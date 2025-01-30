#include "basic_functions.h"

/* Teaching notes:
 * Demonstrating multiple file linking using header files
 * 
 * Learning notes:
 * Why header guards are important
 * How to link multiple files
 * See the inside of the object file using objdump, nm, or otool
 */

int main(void) {
  int a = 5;
  int c = 24;

  print_int(sum(a, c));

  return 0;
}

