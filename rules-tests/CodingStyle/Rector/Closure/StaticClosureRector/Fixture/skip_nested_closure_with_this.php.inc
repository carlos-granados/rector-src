<?php

namespace Rector\Tests\CodingStyle\Rector\Closure\StaticClosureRector\Fixture;

class SkipNestedClosureWithThis
{
    private $data = 'data';

    public function run()
    {
        function () {
            return function () {
                return $this->data;
            };
        };
    }
}
