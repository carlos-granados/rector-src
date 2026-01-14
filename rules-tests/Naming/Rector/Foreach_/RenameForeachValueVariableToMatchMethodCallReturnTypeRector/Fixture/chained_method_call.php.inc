<?php

namespace Rector\Tests\Naming\Rector\Foreach_\RenameForeachValueVariableToMatchMethodCallReturnTypeRector\Fixture;

class ChainedMethodCall
{
    public function run()
    {
        foreach ($this->getRepository()->getUsers() as $item) {
            echo $item;
        }
    }

    public function getRepository(): UserRepository
    {
        return new UserRepository();
    }
}

class UserRepository
{
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

class ChainedMethodCall
{
    public function run()
    {
        foreach ($this->getRepository()->getUsers() as $user) {
            echo $user;
        }
    }

    public function getRepository(): UserRepository
    {
        return new UserRepository();
    }
}

class UserRepository
{
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

