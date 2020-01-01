#include "unity.h"

#include "enkore.h"

#include "string.h"

#include "keymap.h"

void setUp(void)
{
    setlocale(LC_ALL, ""); // to print korean via wprint
}

void tearDown(void)
{
}

struct {const char *input; const char *output;} sample[] =
{
    /* kor2eng */
    {.input = "해", .output = "go"},
    {.input = "쌔ㅡ'ㄴ", .output = "Tom's"},
    {.input = "ㅠㄷ꾜", .output = "berry"},
    /* eng2kor */
    {.input = "gd", .output = "ㅎㅇ"},
    {.input = "dkssud!", .output = "안녕!"},
    {.input = "Eksthfl", .output = "딴소리"},
    /* reverse */
    {.input = "햣gjqm", .output = "git허브"},
    {.input = "ㄱㄷㅁㅇ/ㅈ걋ㄷ tjdsmd", .output = "read/write 성능"},
};

void test_enkore_kor2eng(void)
{
    // char input[256];
    // wscanf("input: %s\n", input);

    const char* output = enkore_kor2eng(sample[0].input);
    TEST_ASSERT_EQUAL_STRING(sample[0].output, output);
}

void test_enkore_eng2kor(void)
{
    // char input[256];
    // scanf("%s", input);

    const char* output = enkore_eng2kor("dkssud");
    const char* outputed = "안녕";


    TEST_ASSERT_EQUAL_STRING(outputed, output);
}