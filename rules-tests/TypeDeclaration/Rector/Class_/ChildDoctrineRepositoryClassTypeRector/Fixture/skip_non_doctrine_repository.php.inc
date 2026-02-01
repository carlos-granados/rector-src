<?php

namespace Rector\Tests\TypeDeclaration\Rector\Class_\ChildDoctrineRepositoryClassTypeRector\Fixture;

class SkipNonDoctrineRepository
{
    public function findSome($userId)
    {
        return $this->findOneBy([
            'userId' => $userId,
        ]);
    }
}
