<?php

function withFourArgs(array $array)
{
    // array_search only accepts 2-3 args, but let's test what happens if someone passes more
    return array_search('searching', $array, true, 'extra') !== false;
}

?>
-----
<?php

function withFourArgs(array $array)
{
    // array_search only accepts 2-3 args, but let's test what happens if someone passes more
    return in_array('searching', $array, true, 'extra');
}

?>
