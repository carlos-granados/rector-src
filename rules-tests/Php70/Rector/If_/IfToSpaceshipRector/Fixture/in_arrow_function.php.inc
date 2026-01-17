<?php

namespace Rector\Tests\Php70\Rector\If_\IfToSpaceshipRector\Fixture;

function inArrowFunction()
{
    // Arrow functions cannot have multiple statements, so spaceship is useful here
    usort($items, fn ($first, $second) => $first <=> $second);
}

?>
