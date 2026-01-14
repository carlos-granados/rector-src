<?php

namespace Rector\Tests\Naming\Rector\Foreach_\RenameForeachValueVariableToMatchMethodCallReturnTypeRector\Fixture;

class ForeachInClosure
{
    public function run()
    {
        $closure = function () {
            foreach ($this->getUsers() as $item) {
                echo $item;
            }
        };
    }

    /**
     * @return User[]
     */
    public function getUsers(): array
    {
        return [];
    }
}

class User
{
}

-----
<?php

namespace Rector\Tests\Naming\Rector\Foreach_\RenameForeachValueVariableToMatchMethodCallReturnTypeRector\Fixture;

class ForeachInClosure
{
    public function run()
    {
        $closure = function () {
            foreach ($this->getUsers() as $user) {
                echo $user;
            }
        };
    }

    /**
     * @return User[]
     */
    public function getUsers(): array
    {
        return [];
    }
}

class User
{
}

