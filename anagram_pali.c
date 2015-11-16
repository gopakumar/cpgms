#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
  FILE *fp;
  char c;
  char str[20];
  int count;
  count =0;


  fp = fopen("input.txt", "r"); // error check this!
  
  if (fp == NULL)
  {
     printf("Unable to open the file\n");
     exit (0);
  }

  while(( fscanf(fp,"%s",str)) != EOF) 
  {
    
    printf ("%s  %d \n",str,(strlen(str)));
  }

  fclose(fp);

  return 0;
}
