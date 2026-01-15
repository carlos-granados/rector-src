<?php

// PHP4 code is not allowed to contain namespaces

class ProtectedConstructor
{
    protected function ProtectedConstructor()
    {
    }
}

?>
-----
<?php

// PHP4 code is not allowed to contain namespaces

class ProtectedConstructor
{
    protected function __construct()
    {
    }
}

?>
