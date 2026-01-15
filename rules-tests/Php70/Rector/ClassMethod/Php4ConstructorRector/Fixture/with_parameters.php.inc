<?php

// PHP4 code is not allowed to contain namespaces

class WithParameters
{
    private $name;
    private $value;

    public function WithParameters(string $name, int $value = 10)
    {
        $this->name = $name;
        $this->value = $value;
    }
}

?>
-----
<?php

// PHP4 code is not allowed to contain namespaces

class WithParameters
{
    private $name;
    private $value;

    public function __construct(string $name, int $value = 10)
    {
        $this->name = $name;
        $this->value = $value;
    }
}

?>
