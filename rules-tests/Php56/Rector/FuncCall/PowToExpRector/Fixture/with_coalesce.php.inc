<?php

function withCoalesce(?int $a, ?int $b)
{
    return pow($a ?? 2, $b ?? 3);
}

?>
-----
<?php

function withCoalesce(?int $a, ?int $b)
{
    return ($a ?? 2) ** ($b ?? 3);
}

?>
