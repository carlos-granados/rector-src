<?php

// PHP4 code is not allowed to contain namespaces

class WithDocblock
{
    /**
     * The old PHP4 constructor.
     *
     * @param string $value The value
     */
    public function WithDocblock($value)
    {
        echo $value;
    }
}

?>
-----
<?php

// PHP4 code is not allowed to contain namespaces

class WithDocblock
{
    /**
     * The old PHP4 constructor.
     *
     * @param string $value The value
     */
    public function __construct($value)
    {
        echo $value;
    }
}

?>
