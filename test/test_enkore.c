#include "unity.h"

#include "enkore.h"

#include "string.h"
#include "locale.h"

struct {const char *actual; const char *expect;} test_data[] =
{
    {.actual = "gd", .expect = "ㅎㅇ"},
    {.actual = "dkssud", .expect = "안녕"},
    {.actual = "해", .expect = "go"},
    {.actual = "english", .expect = "duddj"},
    {.actual = "려차", .expect = "fuck"},
    {.actual = "gd", .expect = "ㅎㅇ"},
    {.actual = "gd", .expect = "ㅎㅇ"},
};

void setUp(void)
{
}

void tearDown(void)
{
}

void test_enkore_kor2eng(void)
{
    // char input[256];
    // wscanf("input: %s\n", input);

    const char* output = enkore_kor2eng("ㅎㅇ");
    const char* expected = "gd";

    TEST_ASSERT_EQUAL_STRING(expected, output);
}

void test_enkore_eng2kor(void)
{
    // char input[256];
    // scanf("%s", input);

    wcstombs();

    const char* output = enkore_eng2kor("dkssud");
    const char* expected = "안녕";

    setlocale(LC_ALL, "");

    printf("%s\n", "내이름은 김준철");
    TEST_ASSERT_EQUAL_MEMORY(expected, output, wcslen(expected) * sizeof(char));
}

//wcslen does not tells us number of bytes.

/*
안녕 8
44
332

내이름은 김준철

7*3 21 +2
- 2byte인가보다.
- wchar안하는게 더 잘나오는데? 그냥하자.
*/