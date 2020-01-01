#include "enkore.h"

// #include <regex.h>
#include "keymap.h"

/*__ type definitions __*/
struct syllable_s
{
    wchar_t initial;
    wchar_t medial;
    wchar_t final;
};

/*__ private function prototypes __*/
static struct syllable_s split_hangul(wchar_t raw);


/*__ public function implementations __*/

const char* enkore_kor2eng(const char* korean)
{
    return "go";
}

const char* enkore_eng2kor(const char* english)
{
    return "안녕";
}

const char* enkore_reverse(const char* string)
{
    return "god신";
}


/*__ private function implementations __*/

static struct syllable_s split_hangul(wchar_t raw)
{

}