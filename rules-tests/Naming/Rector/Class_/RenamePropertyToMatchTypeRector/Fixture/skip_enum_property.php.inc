<?php

namespace Rector\Tests\Naming\Rector\Class_\RenamePropertyToMatchTypeRector\Fixture;

enum Status: string
{
    case PENDING = 'pending';
    case ACTIVE = 'active';
}

final class SkipEnumProperty
{
    private Status $currentStatus;

    public function __construct(Status $status)
    {
        $this->currentStatus = $status;
    }
}
