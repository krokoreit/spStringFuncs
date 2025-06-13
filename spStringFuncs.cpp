/**
 * @file spStringFuncs.h
 * @author krokoreit (krokoreit@gmail.com)
 * @brief a CPP library with functions for handling strings
 * @version 1.0.0
 * @date 2025-06-13
 * @copyright Copyright (c) 2025 krokoreit
 * 
 */


/**
 * Version history:
 * v1.0.0   initial version
 *  
 */

#include "spStringFuncs.h"

/**
 * @brief Converts a byte value to its binary representation.
 * 
 * @param value 
 * @return const char* 
 */
const char *byte2binary(uint8_t value)
{
    static char binary[9];
    binary[0] = '\0';

    uint8_t z;
    for (z = 128; z > 0; z >>= 1)
    {
        strcat(binary, ((value & z) == z) ? "1" : "0");
    }
    return binary;
}


