<?php

namespace Rector\Tests\Php52\Rector\Switch_\ContinueToBreakInSwitchRector\Fixture;

function nested_switch($value, $inner)
{
    switch ($value) {
        case 1:
            switch ($inner) {
                case 'a':
                    echo 'Inner A';
                    continue;
                case 'b':
                    echo 'Inner B';
                    break;
            }
            continue;
        case 2:
            echo 'Outer 2';
            break;
    }
}

?>
-----
<?php

namespace Rector\Tests\Php52\Rector\Switch_\ContinueToBreakInSwitchRector\Fixture;

function nested_switch($value, $inner)
{
    switch ($value) {
        case 1:
            switch ($inner) {
                case 'a':
                    echo 'Inner A';
                    break;
                case 'b':
                    echo 'Inner B';
                    break;
            }
            break;
        case 2:
            echo 'Outer 2';
            break;
    }
}

?>
