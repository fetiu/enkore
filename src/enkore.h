#pragma once

/**
 * @brief Converts korean text to English
 *
 * @param korean
 * @return const char*
 */
const char* enkore_kor2eng(const char* korean);

/**
 * @brief Converts English text to Korean
 *
 * @param english
 * @return const char*
 */
const char* enkore_eng2kor(const char* english);

/**
 * @brief Converts Korean text to English and vice versa
 *
 * @param string
 * @return const char*
 */
const char* enkore_reverse(const char* string);