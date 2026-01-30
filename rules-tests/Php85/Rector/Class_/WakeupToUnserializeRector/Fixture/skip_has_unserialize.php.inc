<?php

namespace Rector\Tests\Php85\Rector\Class_\WakeupToUnserializeRector\Fixture;

class SkipHasUnserialize
{
    private $id;

    public function __wakeup()
    {
        $this->id = 1;
    }

    public function __unserialize(array $data): void
    {
        $this->id = $data['id'];
    }
}
