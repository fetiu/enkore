#include "unity.h"

#include "keymap.h"


void setUp(void)
{
    setlocale(LC_ALL, ""); // to print korean via wprint
}

void tearDown(void)
{
}

void test_keymap_lookup_upper_latin(void)
{
    for (char c = 'A'; c <= 'Z'; c++)
    {
        const char* actual = keymap_lookup(c);
        printf("%c\" : \"%s\r\n", c, actual);
        TEST_ASSERT_NOT_NULL(actual)
    }
}

void test_keymap_lookup_lower_latin(void)
{
    for (char c = 'a'; c <= 'z'; c++)
    {
        const char* actual = keymap_lookup(c);
        printf("%c\" : \"%s\r\n", c, actual);
        TEST_ASSERT_NOT_NULL(actual);
    }
}

void test_keymap_lookup_hangul(void)
{
    for (wchar_t c = L'ㄱ'; c <= L'ㅣ'; c++)
    {
        const char* actual = keymap_lookup(c);
        wprintf(L"%C\" : \"%s\r\n", c, actual);
        TEST_ASSERT_NOT_NULL(actual);
    }
}

void test_keymap_gksdud(void)
{
    const wchar_t* input = L"qwertyuiopasdfghjklzxcvbnm\
                             QWERTYUIOPASDFGHJKLZXCVBNM\
                             `1234567890-=[]\\;',./\
                             <>?:\"{}|~!@#$%^&*()_+";
    const char* actual;

    while(*input++ != '\0')
    {
        actual = keymap_gksdud(*input);
        TEST_ASSERT_NULL(actual);
    }
}


void test_keymap_dudgks(void)
{
    const wchar_t* input = L"ㅂㅈㄷㄱㅅㅁㄴㅇㄹㅎㅋㅌㅊㅍ\
                            ㅑㅐㅔㅗㅓㅏㅣㅠㅜㅡㅃㅉㄸㄲㅆㅒㅖㅒ";
    const char* actual;

    while(*input++ != '\0')
    {
        actual = keymap_dudgks(*input);
        TEST_ASSERT_NULL(actual);
    }
}