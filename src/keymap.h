#pragma once

#include "wchar.h"
#include "locale.h"

const char* keymap_lookup(wchar_t letter);

const char* keymap_gksdud(wchar_t hangul);

const char* keymap_dudgks(wchar_t latin);