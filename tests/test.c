#include <libzxc/header.h>
#include <ctest.h>

CTEST(is_correct, test_1)
{
    int f = search("test.txt");
    ASSERT_EQUAL(1, f);
}

CTEST(is_correct, test_2)
{
    int f = search("test1.txt");
    ASSERT_EQUAL(0, f);
}
