<?php

namespace Rector\Tests\TypeDeclaration\Rector\Class_\ChildDoctrineRepositoryClassTypeRector\Fixture;

use Rector\Tests\TypeDeclaration\Rector\Class_\ChildDoctrineRepositoryClassTypeRector\Source\SomeObject;

/**
 * @extends \Doctrine\ORM\EntityRepository<SomeObject>
 */
final class FqnExtends extends \Doctrine\ORM\EntityRepository
{
    public function findSome($userId)
    {
        return $this->findOneBy([
            'userId' => $userId,
        ]);
    }
}

?>
-----
<?php

namespace Rector\Tests\TypeDeclaration\Rector\Class_\ChildDoctrineRepositoryClassTypeRector\Fixture;

use Rector\Tests\TypeDeclaration\Rector\Class_\ChildDoctrineRepositoryClassTypeRector\Source\SomeObject;

/**
 * @extends \Doctrine\ORM\EntityRepository<SomeObject>
 */
final class FqnExtends extends \Doctrine\ORM\EntityRepository
{
    public function findSome($userId): ?SomeObject
    {
        return $this->findOneBy([
            'userId' => $userId,
        ]);
    }
}

?>
