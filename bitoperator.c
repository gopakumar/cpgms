#include<stdio.h>
main ()
{
  int a, b, c, d, and, exor;
  int mask= 0x80;
  printf ("enter two numbers");
  scanf ("%d%d", &a, &b);
  b=~b;
  a=a+1;
  d=a+b;
  printf ("%d", d);
}

