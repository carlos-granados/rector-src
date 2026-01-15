<?php

// PHP4 code is not allowed to contain namespaces

class WithProperties
{
    public $name;
    protected $value;
    private $secret;

    public function WithProperties()
    {
        $this->name = 'test';
        $this->value = 42;
        $this->secret = 'hidden';
    }
}

?>
-----
<?php

// PHP4 code is not allowed to contain namespaces

class WithProperties
{
    public $name;
    protected $value;
    private $secret;

    public function __construct()
    {
        $this->name = 'test';
        $this->value = 42;
        $this->secret = 'hidden';
    }
}

?>
