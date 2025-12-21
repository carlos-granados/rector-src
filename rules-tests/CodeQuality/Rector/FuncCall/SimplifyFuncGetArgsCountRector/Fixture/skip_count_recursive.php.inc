<?php

function skipCountRecursive()
{
    return count(func_get_args(), COUNT_RECURSIVE);
}
