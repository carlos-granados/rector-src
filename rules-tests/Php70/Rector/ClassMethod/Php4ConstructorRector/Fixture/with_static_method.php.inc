<?php

// PHP4 code is not allowed to contain namespaces

class WithStaticMethod
{
    public function WithStaticMethod()
    {
    }

    public static function create()
    {
        return new self();
    }
}

?>
-----
<?php

// PHP4 code is not allowed to contain namespaces

class WithStaticMethod
{
    public function __construct()
    {
    }

    public static function create()
    {
        return new self();
    }
}

?>
