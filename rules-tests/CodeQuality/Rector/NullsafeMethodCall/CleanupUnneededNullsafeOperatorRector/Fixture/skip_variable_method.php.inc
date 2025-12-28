<?php

namespace Rector\Tests\CodeQuality\Rector\NullsafeMethodCall\CleanupUnneededNullsafeOperatorRector\Fixture;

class SkipVariableMethod
{
    public function getString(): string
    {
        return 'hello world';
    }
}

function getSkipVariableMethod(): SkipVariableMethod
{
    return new SkipVariableMethod();
}

$method = 'getString';
echo getSkipVariableMethod()?->$method();
