<?php

namespace Rector\Tests\Php84\Rector\Class_\PropertyHookRector\Fixture;

final class AddSetHookWhenGetExists
{
    public string $name {
        get => $this->name;
    }

    public function setName(string $name): void
    {
        $this->name = ucfirst($name);
    }
}

?>
-----
<?php

namespace Rector\Tests\Php84\Rector\Class_\PropertyHookRector\Fixture;

final class AddSetHookWhenGetExists
{
    public string $name {
        get => $this->name;
        set(string $name) {
            $this->name = ucfirst($name);
        }
    }
}

?>
