<?php

namespace Rector\Tests\CodeQuality\Rector\Concat\DirnameDirConcatStringToDirectStringPathRector\Fixture;

final class MultiplePaths
{
    public function run()
    {
        $path1 = dirname(__DIR__) . '/vendor/autoload.php';
        $path2 = dirname(__DIR__) . '/config/app.php';
    }
}

?>
-----
<?php

namespace Rector\Tests\CodeQuality\Rector\Concat\DirnameDirConcatStringToDirectStringPathRector\Fixture;

final class MultiplePaths
{
    public function run()
    {
        $path1 = __DIR__ . '/../vendor/autoload.php';
        $path2 = __DIR__ . '/../config/app.php';
    }
}

?>
