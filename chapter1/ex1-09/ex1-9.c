/** 
 * Exercise 1-9. Write a program to copy its input to its output, replacing each string of one or
more blanks by a single blank.
 *
 * */

#include <stdio.h>

int main()
{
    char c;
    char prevChar;
    while ((c = getchar()) != EOF) {
        if (prevChar != ' ') {
          putchar(c);
        } 
    prevChar = c;
  }

}
