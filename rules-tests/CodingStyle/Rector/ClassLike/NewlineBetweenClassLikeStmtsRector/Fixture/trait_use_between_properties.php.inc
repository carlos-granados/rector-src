<?php

namespace Rector\Tests\CodingStyle\Rector\ClassLike\NewlineBetweenClassLikeStmtsRector\Fixture;

class TraitUseBetweenProperties
{
    private $first;
    use SomeTrait;
    private $second;
}

?>
-----
<?php

namespace Rector\Tests\CodingStyle\Rector\ClassLike\NewlineBetweenClassLikeStmtsRector\Fixture;

class TraitUseBetweenProperties
{
    private $first;

    use SomeTrait;

    private $second;
}

?>
