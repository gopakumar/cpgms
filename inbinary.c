#include<stdio.h>
#include<string.h>
int main()
{
  int mask;
  int number,count,index;;
  char val[32];
  mask = 0x01;
  index =32;
  count =0;
  number =8;
  val[--index]='\0';
  while (number)
  {
    val[--index]= ((number&mask)>0?'1':'0');
    number>>=1;
    count++;

  }
  memcpy(val,&val[32-count-1],(sizeof(val[0])*++count));
  puts(val);
  return 0;

}
