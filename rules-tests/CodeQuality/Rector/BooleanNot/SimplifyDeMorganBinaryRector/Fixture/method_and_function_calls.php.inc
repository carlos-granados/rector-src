<?php

namespace Rector\Tests\CodeQuality\Rector\BooleanNot\SimplifyDeMorganBinaryRector\Fixture;

class MethodAndFunctionCalls
{
    public function run($obj, $value)
    {
        $result1 = !($this->isValid() || $obj->isReady());
        $result2 = !($value === null || empty($value));
        $result3 = !(isset($value) || is_string($value));
    }
    
    private function isValid()
    {
        return true;
    }
}

?>
-----
<?php

namespace Rector\Tests\CodeQuality\Rector\BooleanNot\SimplifyDeMorganBinaryRector\Fixture;

class MethodAndFunctionCalls
{
    public function run($obj, $value)
    {
        $result1 = !$this->isValid() && !$obj->isReady();
        $result2 = $value !== null && !empty($value);
        $result3 = !isset($value) && !is_string($value);
    }
    
    private function isValid()
    {
        return true;
    }
}

?>
