<?php

namespace Rector\Tests\DeadCode\Rector\Switch_\RemoveDuplicatedCaseInSwitchRector\Fixture;

enum Status: string
{
    case Active = 'active';
    case Inactive = 'inactive';
    case Pending = 'pending';
}

class EnumCaseValues
{
    public function run(Status $status)
    {
        switch ($status) {
            case Status::Active:
                return 'enabled';
            case Status::Inactive:
                return 'enabled';
            case Status::Pending:
                return 'waiting';
        }
    }
}

?>
-----
<?php

namespace Rector\Tests\DeadCode\Rector\Switch_\RemoveDuplicatedCaseInSwitchRector\Fixture;

enum Status: string
{
    case Active = 'active';
    case Inactive = 'inactive';
    case Pending = 'pending';
}

class EnumCaseValues
{
    public function run(Status $status)
    {
        switch ($status) {
            case Status::Active:
            case Status::Inactive:
                return 'enabled';
            case Status::Pending:
                return 'waiting';
        }
    }
}

?>
