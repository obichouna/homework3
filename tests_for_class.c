#include <stdio.h>
#include <string.h>

/*
  According to tutorial point:
  The C library function char *strncat
 (char *dest, const char *src, size_t n) appends
 the string pointed to by src to the end of the
 string pointed to by dest up to n characters long.

 The C library function char *strcat(char *dest, const char *src)
 appends the string pointed to by src to the
 end of the string pointed to by dest.
 */

int main(){

  //lets do strcat first :D
  char begin[] = "Hello";
  char added[] = " World";
  strcat(begin, added);

  printf("The very familiar %s \n", begin);

  //now lets try strncat :D
  char new_begin[] = "The best time to wear a";
  char new_added[] = " is all the time";
  strncat(new_begin, new_added, 4);

  printf("%s \n", new_begin);

  


}
