#include "header.h"
#include <ctest.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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
