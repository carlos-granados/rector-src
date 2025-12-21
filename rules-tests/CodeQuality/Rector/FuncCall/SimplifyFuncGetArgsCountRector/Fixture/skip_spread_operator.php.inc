<?php

function skipSpreadOperator()
{
    $arrays = [func_get_args()];
    return count(...$arrays);
}
