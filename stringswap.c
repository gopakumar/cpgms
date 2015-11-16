#include<stdio.h>
int main ()
{
  char *A;
  char *B;
  A = "Hello World";
  B  = "Welcome to America";
  char *c;

  printf ("%s\n",A);
  printf ("%s\n",B);

  c=A;
  A=B;
  B=c;

  printf ("%s\n",A);
  printf ("%s\n",B);

  return 0;
}
