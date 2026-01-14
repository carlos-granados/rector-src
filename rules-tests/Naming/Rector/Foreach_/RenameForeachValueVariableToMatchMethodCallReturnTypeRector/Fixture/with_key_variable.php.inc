<?php

namespace Rector\Tests\Naming\Rector\Foreach_\RenameForeachValueVariableToMatchMethodCallReturnTypeRector\Fixture;

class WithKeyVariable
{
    public function run()
    {
        foreach ($this->getUsers() as $key => $item) {
            echo $key . ': ' . $item;
        }
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

class WithKeyVariable
{
    public function run()
    {
        foreach ($this->getUsers() as $key => $user) {
            echo $key . ': ' . $user;
        }
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

