<?php

function withBoolOr(bool $a, bool $b)
{
    return pow($a || $b, 3);
}

?>
-----
<?php

function withBoolOr(bool $a, bool $b)
{
    return ($a || $b) ** 3;
}

?>
