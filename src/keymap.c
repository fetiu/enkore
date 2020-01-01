#include "keymap.h"

#define is_latin(c) ((c >= 'a') && (c <= 'z') || (c >= 'A') && (c <= 'Z'))
#define is_hangul(c) (c > 0x3130) && (c < 0x3164) // Unicode Hangul Jamo Range
#define hash(c) is_hangul(c) ? (c - 0x3130) : is_latin(c) ? c : '\0'
#define hash_u(c) hash( L##c ) // Unicode conversion before hash


static const char* keymap[] =
{
    ['\0'] = NULL, // Every charaters except hangul/latin

    /* KSX 5002 -> QWERTY */
    [hash_u('ㄱ')] = "r",
    [hash_u('ㄳ')] = "rt",
    [hash_u('ㄲ')] = "R",
    [hash_u('ㄴ')] = "s",
    [hash_u('ㄵ')] = "sw",
    [hash_u('ㄶ')] = "sg",
    [hash_u('ㄷ')] = "e",
    [hash_u('ㄸ')] = "E",
    [hash_u('ㄹ')] = "f",
    [hash_u('ㄺ')] = "fr",
    [hash_u('ㄻ')] = "fa",
    [hash_u('ㄼ')] = "fq",
    [hash_u('ㄽ')] = "ft",
    [hash_u('ㄾ')] = "fx",
    [hash_u('ㄿ')] = "fv",
    [hash_u('ㅀ')] = "fg",
    [hash_u('ㅁ')] = "a",
    [hash_u('ㅂ')] = "q",
    [hash_u('ㅃ')] = "Q",
    [hash_u('ㅄ')] = "qt",
    [hash_u('ㅅ')] = "t",
    [hash_u('ㅆ')] = "T",
    [hash_u('ㅇ')] = "d",
    [hash_u('ㅈ')] = "w",
    [hash_u('ㅉ')] = "W",
    [hash_u('ㅊ')] = "c",
    [hash_u('ㅋ')] = "z",
    [hash_u('ㅌ')] = "x",
    [hash_u('ㅍ')] = "v",
    [hash_u('ㅎ')] = "g",
    [hash_u('ㅏ')] = "k",
    [hash_u('ㅐ')] = "o",
    [hash_u('ㅑ')] = "i",
    [hash_u('ㅒ')] = "O",
    [hash_u('ㅓ')] = "j",
    [hash_u('ㅔ')] = "p",
    [hash_u('ㅕ')] = "u",
    [hash_u('ㅖ')] = "P",
    [hash_u('ㅗ')] = "h",
    [hash_u('ㅘ')] = "hk",
    [hash_u('ㅙ')] = "ho",
    [hash_u('ㅚ')] = "hl",
    [hash_u('ㅛ')] = "y",
    [hash_u('ㅜ')] = "n",
    [hash_u('ㅝ')] = "nj",
    [hash_u('ㅞ')] = "np",
    [hash_u('ㅟ')] = "nl",
    [hash_u('ㅠ')] = "b",
    [hash_u('ㅡ')] = "m",
    [hash_u('ㅢ')] = "ml",
    [hash_u('ㅣ')] = "l",

    /* QWERTY -> KSX 5002 */
    [hash_u('a')] = "ㅁ",
    [hash_u('b')] = "ㅠ",
    [hash_u('c')] = "ㅊ",
    [hash_u('d')] = "ㅇ",
    [hash_u('e')] = "ㄷ",
    [hash_u('f')] = "ㄹ",
    [hash_u('g')] = "ㅎ",
    [hash_u('h')] = "ㅗ",
    [hash_u('i')] = "ㅑ",
    [hash_u('j')] = "ㅓ",
    [hash_u('k')] = "ㅏ",
    [hash_u('l')] = "ㅣ",
    [hash_u('m')] = "ㅡ",
    [hash_u('n')] = "ㅜ",
    [hash_u('o')] = "ㅐ",
    [hash_u('p')] = "ㅔ",
    [hash_u('q')] = "ㅂ",
    [hash_u('r')] = "ㄱ",
    [hash_u('s')] = "ㄴ",
    [hash_u('t')] = "ㅅ",
    [hash_u('u')] = "ㅕ",
    [hash_u('v')] = "ㅍ",
    [hash_u('w')] = "ㅈ",
    [hash_u('x')] = "ㅌ",
    [hash_u('y')] = "ㅛ",
    [hash_u('z')] = "ㅋ",
    [hash_u('A')] = "ㅁ",
    [hash_u('B')] = "ㅠ",
    [hash_u('C')] = "ㅊ",
    [hash_u('D')] = "ㄸ",
    [hash_u('E')] = "ㄷ",
    [hash_u('F')] = "ㄹ",
    [hash_u('G')] = "ㅎ",
    [hash_u('H')] = "ㅗ",
    [hash_u('I')] = "ㅑ",
    [hash_u('J')] = "ㅓ",
    [hash_u('K')] = "ㅏ",
    [hash_u('L')] = "ㅣ",
    [hash_u('M')] = "ㅡ",
    [hash_u('N')] = "ㅜ",
    [hash_u('O')] = "ㅒ",
    [hash_u('P')] = "ㅖ",
    [hash_u('Q')] = "ㅃ",
    [hash_u('R')] = "ㄲ",
    [hash_u('S')] = "ㄴ",
    [hash_u('T')] = "ㅆ",
    [hash_u('U')] = "ㅕ",
    [hash_u('V')] = "ㅍ",
    [hash_u('W')] = "ㅉ",
    [hash_u('X')] = "ㅌ",
    [hash_u('Y')] = "ㅛ",
    [hash_u('Z')] = "ㅋ",
};

const char* keymap_lookup(wchar_t letter)
{
    short key = hash(letter);

    return keymap[key];
}

const char* keymap_gksdud(wchar_t hangul)
{
    if(!is_hangul(hangul))
    {
        return NULL;
    }

    return keymap_lookup(hangul);
}

const char* keymap_dudgks(wchar_t latin)
{
    if(!is_latin(latin))
    {
        return NULL;
    }

    return keymap_lookup(latin);
}