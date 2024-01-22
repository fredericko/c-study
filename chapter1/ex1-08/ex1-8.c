/**
 * Exercise 1-8. Write a program to count blanks, tabs, and newlines.
 *
 * */

#include <stdio.h>

int main() {
  
  int totalBlank = 0;
  int totalTab = 0;
  int totalNewline = 0;
  char c;

  while ((c = getchar()) != EOF){
    if(c == ' '){
      ++totalBlank;
    }
    if(c == '\n'){
      ++totalNewline;
    }
    if(c == '\t'){
      ++totalTab;
    }
  }

  printf("Blank total: %d\n", totalBlank);
  printf("Tab total: %d\n", totalTab);
  printf("Newline total: %d\n", totalNewline);

}
