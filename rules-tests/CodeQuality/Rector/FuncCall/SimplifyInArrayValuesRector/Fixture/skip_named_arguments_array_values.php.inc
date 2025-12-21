<?php

function skipNamedArgumentsArrayValues()
{
    $array = ['key', 'value'];
    return in_array('key', array_values(array: $array), true);
}
