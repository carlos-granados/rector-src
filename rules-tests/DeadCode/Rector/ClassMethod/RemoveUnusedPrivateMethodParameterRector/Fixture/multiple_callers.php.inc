<?php

namespace Rector\Tests\DeadCode\Rector\ClassMethod\RemoveUnusedPrivateMethodParameterRector\Fixture;

final class MultipleCallers
{
    private function log($message, $level, $context)
    {
        echo $message;
    }

    public function info()
    {
        $this->log('Info message', 'info', ['user' => 'admin']);
    }

    public function error()
    {
        $this->log('Error message', 'error', ['code' => 500]);
    }

    public function debug()
    {
        $this->log('Debug message', 'debug', ['time' => '12:00']);
    }
}

?>
-----
<?php

namespace Rector\Tests\DeadCode\Rector\ClassMethod\RemoveUnusedPrivateMethodParameterRector\Fixture;

final class MultipleCallers
{
    private function log($message)
    {
        echo $message;
    }

    public function info()
    {
        $this->log('Info message');
    }

    public function error()
    {
        $this->log('Error message');
    }

    public function debug()
    {
        $this->log('Debug message');
    }
}

?>
