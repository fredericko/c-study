/**
* Exercise 1-13. Write a program to print a histogram of the lengths of words in its input. 
* It is easy to draw the histogram with the bars horizontal; a vertical orientation is more challenging.*
* */

#include <stdio.h>

#define YES 1
#define NO 0
#define MAX_WORDS 10

void printHorizontal(int histogram[]){
  printf("Horizontal Histogram\n") ;
  for(int i = 0; i < MAX_WORDS; ++i){
    printf("%i. ", i+1);
    for (int j = 0; j < histogram[i]; ++j) {
      printf("#");
    }
    printf("\n");
  }

}

void printVertically(int histogram[]){
  printf("Vertical Histogram\n") ;
  int longestWord = 0;

  //Find longest word, so we can know how tall the histogram is going to be
  for(int i = 0; i < MAX_WORDS; ++i){
    if(histogram[i] > longestWord) longestWord = histogram[i]; 
  }

  for (int i = longestWord; i > 0; --i) {
    printf("%i", i);
    for (int j = 0; j < MAX_WORDS; ++j) {
      if(histogram[j] - i >= 0) {
        printf(" #");
      }    
    }
    printf("\n");
  }

  printf(" ");
  for (int i = 1; i <= MAX_WORDS; ++i) {
    printf(" %i", i); 
  }

}

int main()
{
  char c; 
  int words[MAX_WORDS]; 
  int inword = NO;
  for(int i = 0; i < MAX_WORDS; ++i){
      words[i] = 0;
  }

  int wordCount = 0;
  int inWord = NO;
  printf("Write up to 10 words\n");
  while ((c = getchar()) != EOF && wordCount < MAX_WORDS) {
    if((c == ' ' || c == '\t' || c == '\n')){
      if (inWord == YES) {
        ++wordCount;
        inWord = NO;
      }
    }else{
      inWord = YES; 
    }
    if(inWord) {
      ++words[wordCount]; 
    }
  } 

  printHorizontal(words);
  printf("\n");
  printVertically(words);

}




