<?php

namespace Rector\Tests\CodeQuality\Rector\LogicalAnd\LogicalToBooleanRector\Fixture;

final class SkipAssignRightSide
{
    public function run(string $fileLocation)
    {
        // Should skip: right side is assign with non-boolean type
        if (true or $file = fopen($fileLocation, 'w')) {
            fclose($file);
        }

        // Should skip: right side is assign with non-boolean type
        if (false and $file = fopen($fileLocation, 'r')) {
            fclose($file);
        }
    }
}
