<?php

// PHP4 code is not allowed to contain namespaces

class PrivateConstructor
{
    private function PrivateConstructor()
    {
    }
}

?>
-----
<?php

// PHP4 code is not allowed to contain namespaces

class PrivateConstructor
{
    private function __construct()
    {
    }
}

?>
