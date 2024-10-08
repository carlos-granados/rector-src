<?php

declare(strict_types=1);

/**
 * License
 */

use Foobar\A;

/**
 * Docblock
 */
final class NoNamespaceWithStrictTypes
{
    public function run()
    {
        new A();
        new \Foobar\B();
    }
}

?>
-----
<?php

declare(strict_types=1);

/**
 * License
 */
use Foobar\A;
use Foobar\B;

/**
 * Docblock
 */
final class NoNamespaceWithStrictTypes
{
    public function run()
    {
        new A();
        new B();
    }
}

?>
