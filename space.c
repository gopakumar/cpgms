#include<stdio.h>
#include<string.h>
#define MAX 50
int main ()
{
	char str[MAX];
	int l, i,TL,space;
	l=0;
  space = 0;
	TL=MAX-1;
//  str[TL--]='\0';
	printf("Enter the string \n");
//	scanf("%s",str);
  gets(str);
//  printf("\n %s",str);
//	str[TL--] = '\0';
	l =strlen(str);
	for (i=l;i>=0;i--)
	{
		if(str[i] == ' ')
		{	str[TL--]= '0';
      str[TL--]= '2';
			str[TL--]= '%';
      space+=2;
		}
		else
		{
			str[TL--] = str[i];
		}

	}
  l+=space;
 // printf("\nModified string\n %s\n",str);
	memcpy(str,&str[MAX-l-1],((l+1)*sizeof(char)));
// str[l]='\0';
puts(str);
printf("\n");
}
