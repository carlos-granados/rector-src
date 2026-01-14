<?php

namespace Rector\Tests\Naming\Rector\Foreach_\RenameForeachValueVariableToMatchMethodCallReturnTypeRector\Fixture;

class SkipAlreadyMatching
{
    public function run()
    {
        foreach ($this->getUsers() as $user) {
            echo $user;
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

