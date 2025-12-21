<?php

function skipSpreadOperatorArrayValues()
{
    $arrays = [['a', 'b']];
    return in_array('key', array_values(...$arrays), true);
}
