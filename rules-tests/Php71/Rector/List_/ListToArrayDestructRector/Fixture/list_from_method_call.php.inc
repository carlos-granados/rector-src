<?php

namespace Rector\Tests\Php71\Rector\List_\ListToArrayDestructRector\Fixture;

final class ListFromMethodCall
{
    public function run()
    {
        list($a, $b) = $this->getData();
    }
    
    private function getData(): array
    {
        return [1, 2];
    }
}

?>
-----
<?php

namespace Rector\Tests\Php71\Rector\List_\ListToArrayDestructRector\Fixture;

final class ListFromMethodCall
{
    public function run()
    {
        [$a, $b] = $this->getData();
    }
    
    private function getData(): array
    {
        return [1, 2];
    }
}

?>
