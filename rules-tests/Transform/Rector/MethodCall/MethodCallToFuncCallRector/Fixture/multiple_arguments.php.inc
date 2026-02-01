<?php

namespace Rector\Tests\Transform\Rector\MethodCall\MethodCallToFuncCallRector\Fixture;

use Rector\Tests\Transform\Rector\MethodCall\MethodCallToFuncCallRector\Source\ParentControllerWithRender;

final class MultipleArguments extends ParentControllerWithRender
{
    public function show()
    {
        return $this->render('template', ['key' => 'value'], true);
    }
}

?>
-----
<?php

namespace Rector\Tests\Transform\Rector\MethodCall\MethodCallToFuncCallRector\Fixture;

use Rector\Tests\Transform\Rector\MethodCall\MethodCallToFuncCallRector\Source\ParentControllerWithRender;

final class MultipleArguments extends ParentControllerWithRender
{
    public function show()
    {
        return \view('template', ['key' => 'value'], true);
    }
}

?>
