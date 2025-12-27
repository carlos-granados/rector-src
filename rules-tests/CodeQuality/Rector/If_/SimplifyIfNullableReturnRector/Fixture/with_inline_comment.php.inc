<?php

namespace Rector\Tests\CodeQuality\Rector\If_\SimplifyIfNullableReturnRector\Fixture;

final class WithInlineComment
{
    public function run()
    {
        // Get the value
        $value = $this->get();
        if (! $value instanceof \stdClass) {
            return null;
        }

        return $value;
    }

    private function get(): ?\stdClass
    {
        return new \stdClass();
    }
}

?>
-----
<?php

namespace Rector\Tests\CodeQuality\Rector\If_\SimplifyIfNullableReturnRector\Fixture;

final class WithInlineComment
{
    public function run()
    {
        // Get the value
        return $this->get();
    }

    private function get(): ?\stdClass
    {
        return new \stdClass();
    }
}

?>
