<?php

function withStrictComparison()
{
    $array = ['key' => 'value', 'another' => 'data'];
    return in_array('value', array_values($array), true);
}

?>
-----
<?php

function withStrictComparison()
{
    $array = ['key' => 'value', 'another' => 'data'];
    return in_array('value', $array, true);
}

?>
