<?php

declare(strict_types=1);

namespace Rector\DependencyInjection;

use Illuminate\Container\Container;
use Rector\Autoloading\BootstrapFilesIncluder;
use Rector\Caching\Detector\ChangedFilesDetector;
use Rector\ValueObject\Bootstrap\BootstrapConfigs;

final class RectorContainerFactory
{
    public function createFromBootstrapConfigs(BootstrapConfigs $bootstrapConfigs): Container
    {
        $container = $this->createFromConfigs($bootstrapConfigs->getConfigFiles());

        $mainConfigFile = $bootstrapConfigs->getMainConfigFile();

        if ($mainConfigFile !== null) {
            $changedFilesDetector = $container->make(ChangedFilesDetector::class);
            assert($changedFilesDetector instanceof ChangedFilesDetector);
            $changedFilesDetector->setFirstResolvedConfigFileInfo($mainConfigFile);
        }

        $bootstrapFilesIncluder = $container->get(BootstrapFilesIncluder::class);
        assert($bootstrapFilesIncluder instanceof BootstrapFilesIncluder);
        $bootstrapFilesIncluder->includeBootstrapFiles();

        return $container;
    }

    /**
     * @param string[] $configFiles
     */
    private function createFromConfigs(array $configFiles): Container
    {
        $lazyContainerFactory = new LazyContainerFactory();
        $rectorConfig = $lazyContainerFactory->create();

        foreach ($configFiles as $configFile) {
            $rectorConfig->import($configFile);
        }

        $rectorConfig->boot();

        return $rectorConfig;
    }
}
