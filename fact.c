#include<stdio.h>
int fact (int);
int val;
int main()
{
  int result;  int num;
  val =0;
  num=5;
  result=fact(5);
  printf("result %d\n",result);
  return 0;
}
int fact (int num)
{
  if(num == 1)
    return 1;
  else
  { 
//   return (num*fact(num-1));
    printf("%d\n",num);
    val = fact(num-1)+1;
    printf("%d %d\n",num,val);
  }
}

