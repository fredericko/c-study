/** 
 * Exercise 1-11. Revise the word count program to use a better definition of "word," for example, 
 * a sequence of letters, digits and apostrophes that begins with a letter.
 *
 * */

#include <stdio.h>
#include <ctype.h>

#define YES 1
#define NO  0

int main() /* count lines, words, chars in input */
{
    int c, nl, nw, nc, inword;
    

    inword = NO;
    nl = nw = nc = 0;
    char firstChar, prevChar;
    while ((c = getchar()) != EOF) {
        ++nc;
        if ((prevChar == ' ' || prevChar == '\t' || prevChar == '\n') || ( isalpha(c) && nc == 1)){ 
          firstChar = c; 
        }
        if (c == '\n' ) ++nl;
        if (c != ' ' && c != '\t' && c != '\n'){ 
          if((isalpha(c) > 0) && inword == NO && isalpha(firstChar)){
            inword = YES;
          }
        }else {
          if(inword == YES) ++nw;
          inword = NO;
          firstChar = 0;
        }
        
        prevChar = c;
    }
    printf("%d %d %d\n", nl, nw, nc);
}
