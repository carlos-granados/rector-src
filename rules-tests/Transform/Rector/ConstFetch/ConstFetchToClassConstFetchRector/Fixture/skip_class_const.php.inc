<?php

namespace Rector\Tests\Transform\Rector\ConstFetch\ConstFetchToClassConstFetchRector;

// Class constant should not be affected - rule only operates on ConstFetch
$x = SomeClass::CONTEXT_COURSE;
