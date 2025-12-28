<?php

if (true or (false and $a = true)) {
    return $a;
}

if ($b = true and (false or true)) {
    return $b;
}

?>
-----
<?php

if (true || false && $a = true) {
    return $a;
}

if ((($b = true)) && (false || true)) {
    return $b;
}

?>
