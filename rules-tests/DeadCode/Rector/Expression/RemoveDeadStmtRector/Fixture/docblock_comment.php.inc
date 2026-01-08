<?php

namespace Rector\Tests\DeadCode\Rector\Expression\RemoveDeadStmtRector\Fixture;

function wrapToPreventPhpStanCallingMethods()
{
    /** 
     * This is a doc comment 
     */
    $a;
    
    $b = 1;
    
    /**
     * Another doc comment
     */
    1 + 1;
}

?>
-----
<?php

namespace Rector\Tests\DeadCode\Rector\Expression\RemoveDeadStmtRector\Fixture;

function wrapToPreventPhpStanCallingMethods()
{
    /** 
     * This is a doc comment 
     */


    $b = 1;

    /**
     * Another doc comment
     */

}

?>
