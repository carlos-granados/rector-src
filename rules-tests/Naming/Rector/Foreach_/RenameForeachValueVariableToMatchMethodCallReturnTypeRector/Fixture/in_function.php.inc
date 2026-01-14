<?php

namespace Rector\Tests\Naming\Rector\Foreach_\RenameForeachValueVariableToMatchMethodCallReturnTypeRector\Fixture;

function inFunction()
{
    $repo = new UserRepository();
    foreach ($repo->getUsers() as $item) {
        echo $item;
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

function inFunction()
{
    $repo = new UserRepository();
    foreach ($repo->getUsers() as $user) {
        echo $user;
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

