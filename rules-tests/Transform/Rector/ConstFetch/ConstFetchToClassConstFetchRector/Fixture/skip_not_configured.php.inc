<?php

namespace Rector\Tests\Transform\Rector\ConstFetch\ConstFetchToClassConstFetchRector;

// Constant not in config should not be affected
$x = SOME_OTHER_CONST;
