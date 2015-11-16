#include<stdio.h>

int main()
{
  int *ptr1,*ptr2;
  int in,in2;

  ptr1 = &in;
  ptr2 = &in2;

  if(ptr2 == ptr1)
       printf("Ptr2 is equlal to pointer  ptr1");

  return(0);
}
