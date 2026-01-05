<?php

namespace Rector\Tests\DeadCode\Rector\ClassLike\RemoveAnnotationRector\Fixture;

final class PropertyAnnotation
{
    /**
     * @method getName()
     * @var string
     */
    private $name;
}

?>
-----
<?php

namespace Rector\Tests\DeadCode\Rector\ClassLike\RemoveAnnotationRector\Fixture;

final class PropertyAnnotation
{
    /**
     * @var string
     */
    private $name;
}

?>
