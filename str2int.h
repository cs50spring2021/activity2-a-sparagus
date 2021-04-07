/*                                                                             
 * Convert a string to an integer, returning that integer.                    
 * Returns true if successful, or false if any error.                          
 * It is an error if there is any additional character beyond the integer.     
 * Assumes number is a valid pointer.                                          
 */

#define __STR2INT_H__

#include <stdbool.h>

extern bool str2int(const char string[], int * number);

