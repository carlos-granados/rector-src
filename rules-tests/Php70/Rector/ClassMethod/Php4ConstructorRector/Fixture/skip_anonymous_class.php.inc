<?php

// PHP4 code is not allowed to contain namespaces

class SkipAnonymousClass
{
    public function create()
    {
        return new class {
            public function run()
            {
            }
        };
    }
}
