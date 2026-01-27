<?php

namespace Rector\Tests\Php74\Rector\FuncCall\FilterVarToAddSlashesRector\Fixture;

$var = "Satya's here!";
filter_var(value: $var, filter: FILTER_SANITIZE_MAGIC_QUOTES);
filter_var(filter: FILTER_SANITIZE_MAGIC_QUOTES, value: $var);
