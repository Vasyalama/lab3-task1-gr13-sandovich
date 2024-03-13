#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(int argc, char *argv[])
{
  if(argc == 2){
    char ch;
    int i;
    printf("Original string: %s\n", argv[1]);
    printf("The frequency of all characters in the string are : \n");
    for(i=0; i<=strlen(argv[1]); i++)
    {
      ch = *(argv[1]+i);
      printf("%c%d",ch,ch);	
    }
    printf("\n\n");
    return 0;
  }
  printf("Invalid arguments \n");
  return 0;
}