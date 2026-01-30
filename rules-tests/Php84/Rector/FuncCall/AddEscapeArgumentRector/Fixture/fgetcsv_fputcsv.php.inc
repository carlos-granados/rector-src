<?php

namespace Rector\Tests\Php84\Rector\FuncCall\AddEscapeArgumentRector\Fixture;

final class FgetcsvFputcsv
{
    public function run($fp, $data)
    {
        fgetcsv($fp, 0, ',', '"');
        fputcsv($fp, $data, ',', '"');
    }
}

?>
-----
<?php

namespace Rector\Tests\Php84\Rector\FuncCall\AddEscapeArgumentRector\Fixture;

final class FgetcsvFputcsv
{
    public function run($fp, $data)
    {
        fgetcsv($fp, 0, ',', '"', escape: '\\');
        fputcsv($fp, $data, ',', '"', escape: '\\');
    }
}

?>
