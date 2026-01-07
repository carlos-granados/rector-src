<?php

namespace Rector\Tests\DeadCode\Rector\ClassMethod\RemoveUnusedPrivateMethodParameterRector\Fixture;

final class MixedStaticInstanceCalls
{
    private static function format($value, $unused)
    {
        return strtoupper($value);
    }

    public function instanceCall()
    {
        return $this->format('hello', 'extra');
    }

    public static function staticCall()
    {
        return self::format('world', 'extra');
    }

    public static function lateStaticCall()
    {
        return static::format('test', 'extra');
    }
}

?>
-----
<?php

namespace Rector\Tests\DeadCode\Rector\ClassMethod\RemoveUnusedPrivateMethodParameterRector\Fixture;

final class MixedStaticInstanceCalls
{
    private static function format($value)
    {
        return strtoupper($value);
    }

    public function instanceCall()
    {
        return $this->format('hello');
    }

    public static function staticCall()
    {
        return self::format('world');
    }

    public static function lateStaticCall()
    {
        return static::format('test');
    }
}

?>
