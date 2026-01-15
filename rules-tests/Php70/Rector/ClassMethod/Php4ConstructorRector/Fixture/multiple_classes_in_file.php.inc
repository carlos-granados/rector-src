<?php

// PHP4 code is not allowed to contain namespaces

class FirstClass
{
    public function FirstClass()
    {
        echo 'first';
    }
}

class SecondClass
{
    public function SecondClass()
    {
        echo 'second';
    }
}

?>
-----
<?php

// PHP4 code is not allowed to contain namespaces

class FirstClass
{
    public function __construct()
    {
        echo 'first';
    }
}

class SecondClass
{
    public function __construct()
    {
        echo 'second';
    }
}

?>
