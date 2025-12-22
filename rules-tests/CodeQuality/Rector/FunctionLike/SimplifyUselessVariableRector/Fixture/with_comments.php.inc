<?php

namespace Rector\Tests\CodeQuality\Rector\FunctionLike\SimplifyUselessVariableRector\Fixture;

function withInlineComment()
{
    $result = computeValue();
    // This comment should move with the code
    return $result;
}

function withDocComment()
{
    /**
     * Important documentation
     */
    $value = getValue();
    return $value;
}

?>
-----
<?php

namespace Rector\Tests\CodeQuality\Rector\FunctionLike\SimplifyUselessVariableRector\Fixture;

function withInlineComment()
{
    // This comment should move with the code
    return computeValue();
}

function withDocComment()
{
    /**
     * Important documentation
     */
    $value = getValue();
    return $value;
}

?>
