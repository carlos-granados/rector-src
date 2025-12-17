<?php

namespace Rector\Tests\CodeQuality\Rector\BooleanNot\ReplaceMultipleBooleanNotRector\Fixture;

class MethodAndFunctionCalls
{
    public function run()
    {
        $result1 = !!$this->method();
        $result2 = !!getValue();
        $result3 = !!!static::staticMethod();
    }
    
    private function method()
    {
        return null;
    }
    
    private static function staticMethod()
    {
        return null;
    }
}

function getValue() {
    return null;
}

?>
-----
<?php

namespace Rector\Tests\CodeQuality\Rector\BooleanNot\ReplaceMultipleBooleanNotRector\Fixture;

class MethodAndFunctionCalls
{
    public function run()
    {
        $result1 = (bool) $this->method();
        $result2 = (bool) getValue();
        $result3 = !static::staticMethod();
    }
    
    private function method()
    {
        return null;
    }
    
    private static function staticMethod()
    {
        return null;
    }
}

function getValue() {
    return null;
}

?>
