<?php

function skipNamedArgumentsInArray()
{
    $array = ['key', 'value'];
    return in_array(needle: 'key', haystack: array_values($array));
}
