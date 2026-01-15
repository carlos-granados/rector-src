<?php

function withLogicalAnd(bool $a, bool $b)
{
    return pow($a and $b, 3);
}

?>
-----
<?php

function withLogicalAnd(bool $a, bool $b)
{
    return ($a and $b) ** 3;
}

?>
