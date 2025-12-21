<?php

function multipleFunctionCalls()
{
    return count(func_get_args()) + count(func_get_args());
}

?>
-----
<?php

function multipleFunctionCalls()
{
    return func_num_args() + func_num_args();
}

?>
