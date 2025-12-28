<?php

if ($a = true or $b = false) {
    return $a;
}

if ($a = false and $b = true) {
    return $b;
}

?>
-----
<?php

if (($a = true) || $b = false) {
    return $a;
}

if (($a = false) && $b = true) {
    return $b;
}

?>
