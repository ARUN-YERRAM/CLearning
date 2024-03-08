#include <stdio.h>

union myUnion {
  int i;
  float f;
  char c;
};

int main() {
  union myUnion u;
  
  u.i = 10; 
  printf("Value of integer i: %d\n", u.i);
  
  u.f = 3.14;
  printf("Value of float f: %.2f\n", u.f);
  
  u.c = 'A';
  printf("Value of character c: %c\n", u.c);
  
  return 0;
}
   