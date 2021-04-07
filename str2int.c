/*                                                                            
 * str2int.c            
 * See str2int.h for documentation.                                           
 */

#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include "str2int.h"

bool str2int(const char string[], int * number)
{
  char nextchar;
  return (sscanf(string, "%d%c", number, &nextchar) == 1);
}
