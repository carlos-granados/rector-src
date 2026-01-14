<?php

namespace Rector\Tests\Naming\Rector\Foreach_\RenameForeachValueVariableToMatchMethodCallReturnTypeRector\Fixture;

class InterfaceReturnType
{
    public function run(UserRepositoryInterface $repository)
    {
        foreach ($repository->getUsers() as $item) {
            echo $item;
        }
    }
}

interface UserRepositoryInterface
{
    /**
     * @return User[]
     */
    public function getUsers(): array;
}

class User
{
}

-----
<?php

namespace Rector\Tests\Naming\Rector\Foreach_\RenameForeachValueVariableToMatchMethodCallReturnTypeRector\Fixture;

class InterfaceReturnType
{
    public function run(UserRepositoryInterface $repository)
    {
        foreach ($repository->getUsers() as $user) {
            echo $user;
        }
    }
}

interface UserRepositoryInterface
{
    /**
     * @return User[]
     */
    public function getUsers(): array;
}

class User
{
}

