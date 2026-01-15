<?php

function withTernary(bool $condition)
{
    return pow($condition ? 2 : 3, $condition ? 4 : 5);
}

function withTernaryFirst(bool $condition)
{
    return pow($condition ? 2 : 3, 4);
}

function withTernarySecond(bool $condition)
{
    return pow(2, $condition ? 4 : 5);
}

?>
-----
<?php

function withTernary(bool $condition)
{
    return ($condition ? 2 : 3) ** ($condition ? 4 : 5);
}

function withTernaryFirst(bool $condition)
{
    return ($condition ? 2 : 3) ** 4;
}

function withTernarySecond(bool $condition)
{
    return 2 ** ($condition ? 4 : 5);
}

?>
