<?php

function skipSpreadOperator()
{
    $args = ['searching', ['a', 'b', 'c']];
    return array_search(...$args) !== false;
}

?>
