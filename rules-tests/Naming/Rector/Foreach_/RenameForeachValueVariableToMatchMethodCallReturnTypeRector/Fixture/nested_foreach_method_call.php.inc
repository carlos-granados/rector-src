<?php

namespace Rector\Tests\Naming\Rector\Foreach_\RenameForeachValueVariableToMatchMethodCallReturnTypeRector\Fixture;

class NestedForeachMethodCall
{
    public function run()
    {
        foreach ($this->getCategories() as $item) {
            foreach ($item->getProducts() as $thing) {
                echo $thing;
            }
        }
    }

    /**
     * @return Category[]
     */
    public function getCategories(): array
    {
        return [];
    }
}

class Category
{
    /**
     * @return Product[]
     */
    public function getProducts(): array
    {
        return [];
    }
}

class Product
{
}

-----
<?php

namespace Rector\Tests\Naming\Rector\Foreach_\RenameForeachValueVariableToMatchMethodCallReturnTypeRector\Fixture;

class NestedForeachMethodCall
{
    public function run()
    {
        foreach ($this->getCategories() as $category) {
            foreach ($category->getProducts() as $thing) {
                echo $thing;
            }
        }
    }

    /**
     * @return Category[]
     */
    public function getCategories(): array
    {
        return [];
    }
}

class Category
{
    /**
     * @return Product[]
     */
    public function getProducts(): array
    {
        return [];
    }
}

class Product
{
}

