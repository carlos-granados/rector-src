<?php

namespace Rector\Tests\Php71\Rector\TryCatch\MultiExceptionCatchRector\Fixture;

final class MultipleGroups
{
    public function run()
    {
        try {
            doSomething();
        } catch (\RuntimeException $e) {
            handleGroupA();
        } catch (\InvalidArgumentException $e) {
            handleGroupA();
        } catch (\LogicException $e) {
            handleGroupB();
        } catch (\DomainException $e) {
            handleGroupB();
        }
    }
}

?>
-----
<?php

namespace Rector\Tests\Php71\Rector\TryCatch\MultiExceptionCatchRector\Fixture;

final class MultipleGroups
{
    public function run()
    {
        try {
            doSomething();
        } catch (\RuntimeException|\InvalidArgumentException $e) {
            handleGroupA();
        } catch (\LogicException|\DomainException $e) {
            handleGroupB();
        }
    }
}

?>
