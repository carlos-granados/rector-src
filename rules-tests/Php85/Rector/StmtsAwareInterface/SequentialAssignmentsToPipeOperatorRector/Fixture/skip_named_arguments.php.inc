<?php

namespace Rector\Tests\Php85\Rector\StmtsAwareInterface\SequentialAssignmentsToPipeOperatorRector\Fixture;

$value = "hello world";
$result1 = strtolower(string: $value);
$result2 = trim(string: $result1);
$result = ucfirst(string: $result2);
