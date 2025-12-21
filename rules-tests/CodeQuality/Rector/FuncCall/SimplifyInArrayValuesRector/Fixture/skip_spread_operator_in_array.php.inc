<?php

function skipSpreadOperatorInArray()
{
    $args = ['key', [array_values($arr)]];
    return in_array(...$args);
}
