<?php

namespace Rector\Tests\TypeDeclaration\Rector\Class_\ChildDoctrineRepositoryClassTypeRector\Fixture;

use Doctrine\ORM\EntityRepository;
use Rector\Tests\TypeDeclaration\Rector\Class_\ChildDoctrineRepositoryClassTypeRector\Source\SomeObject;

/**
 * @extends EntityRepository<SomeObject>
 */
final class SkipHasReturnType extends EntityRepository
{
    public function findSome($userId): ?SomeObject
    {
        return $this->findOneBy([
            'userId' => $userId,
        ]);
    }
}
