<?php

namespace Rector\Tests\CodeQuality\Rector\Assign\CombinedAssignRector\Fixture;

class CommutativeOperations
{
    public function run()
    {
        $a = 5;
        $b = 10;
        // Addition is commutative: $a + $b == $b + $a
        // But $a = $b + $a should NOT be converted to $a += $b
        // because semantically it's different
        $a = $b + $a;
        
        $c = 3;
        $d = 7;
        // Multiplication is commutative
        $c = $d * $c;
    }
}
