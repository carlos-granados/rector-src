<?php

namespace Rector\Tests\Naming\Rector\Foreach_\RenameForeachValueVariableToMatchMethodCallReturnTypeRector\Fixture;

class StaticMethodCall
{
    public function run()
    {
        foreach (UserRepository::getUsers() as $item) {
            echo $item;
        }
    }
}

class UserRepository
{
    /**
     * @return User[]
     */
    public static function getUsers(): array
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

class StaticMethodCall
{
    public function run()
    {
        foreach (UserRepository::getUsers() as $user) {
            echo $user;
        }
    }
}

class UserRepository
{
    /**
     * @return User[]
     */
    public static function getUsers(): array
    {
        return [];
    }
}

class User
{
}

