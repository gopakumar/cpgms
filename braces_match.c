#include<stdio.h>
int main()
{
  FILE *fp;
  int flag;
  char ch;
  flag =0;

  fp = fopen ("input.txt","r");

  if (fp == NULL)
  {
    printf("unable to open the file\n");
    return 0;
  }

//  while(fp != EOF)
  while ((ch = fgetc(fp)) != EOF)
  {

//    printf("read char %c\n",ch);

    if (ch == '(')
        flag++;
    else if(ch ==')')
       flag--;

    if(flag<0)
    {
      printf("Error\n");
      fclose(fp);
       return 0;
    }

 //   ch = fgetc(fp);
  }//while

  if(flag !=0)
  {
      printf("Error\n");
      fclose(fp);
      return 0;
  }

  printf("Braces are correct\n");
  fclose(fp);
  return 0;

}
