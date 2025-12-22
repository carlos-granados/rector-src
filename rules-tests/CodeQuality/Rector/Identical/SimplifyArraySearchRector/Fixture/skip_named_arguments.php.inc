<?php

function skipNamedArguments(array $array)
{
    return array_search(needle: 'searching', haystack: $array) !== false;
}

?>
