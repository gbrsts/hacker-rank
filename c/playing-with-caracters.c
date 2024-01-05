#include <stdio.h>

void main () 
{
  char ch, s[20], sen[100];
  
  scanf("%c %s \n", &ch, &s);
  fflush(stdin);
  fgets(sen, 100, stdin);

  printf("%c\n", ch);
  printf("%s\n", s);
  printf("%s", sen);
}