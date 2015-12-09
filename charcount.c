#include<stdio.h>
#include<string.h>
int main()
{
  char str[50];
  int i,l;
  int count[26]={};
  printf("Enter the string\n");
  gets(str);

  l = strlen(str);
  for(i=0;i<l;i++)
  {
    if(isalpha(str[i]))
    {
      if(isupper(str[i]))
      {
        count[(str[i]-65)]++;
      }
      else
      {
        count[(str[i]-97)]++;
      }
    }
  }
  for(i=0;i<26;i++)
  {
    if(count[i]>0)
    {
      printf("%c%d ",(i+97),count[i]);

    }
  }

  return 0;
}
