#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  FILE *fp;
  char c;
  int count;
  count =0;


  fp = fopen("input.txt", "r"); // error check this!
  
  if (fp == NULL)
  {
     printf("Unable to open the file\n");
     exit (0);
  }

  while((c = fgetc(fp)) != EOF) {
    if (c == '\n') 
    {count++;}
//      putchar(c)
      }
      printf("%d",count);
//    }
 // }

  fclose(fp);

  return 0;
}
