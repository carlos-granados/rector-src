<?php

namespace Rector\Tests\CodingStyle\Rector\ClassLike\NewlineBetweenClassLikeStmtsRector\Fixture;

class MixedElementTypes
{
    private const SOME_CONSTANT = 1;
    private $property;
    public function __construct()
    {
    }
    public function method()
    {
    }
}

?>
-----
<?php

namespace Rector\Tests\CodingStyle\Rector\ClassLike\NewlineBetweenClassLikeStmtsRector\Fixture;

class MixedElementTypes
{
    private const SOME_CONSTANT = 1;

    private $property;

    public function __construct()
    {
    }

    public function method()
    {
    }
}

?>
