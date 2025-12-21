<?php

function skipNamedArguments()
{
    return count(array: func_get_args());
}
