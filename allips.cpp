#include<stdio.h>
#include<stdlib.h>
#include<iostream>
#include<string>
#include<cstring>
using namespace std;
void print_ip(char *, int *);
int main()
{
  char ipval[15] = "192168111111";
  char  *ips = ipval;
 ipval[12] = '\0';
  int i=0,j=0,k=0;
  int pos[3];
  

  for (i=1;i<=3;i++)
  {
    cout <<"\n";
    pos[0]=i;
    for(j=1;j<=3;j++)
    {
     pos[1]=j; 
     for(k=1;k<=3;k++)
     {  
       pos[2]=k;
       print_ip(ips,pos);
     } 
    }
  }
}

void print_ip(char *str,int pos[])
{
  std::string ip(str); 
  int len = strlen(str);

//  cout <<len  <<"  " <<(pos[0]+pos[1]+pos[2]) <<"\n";
  if ((pos[0]+pos[1]+pos[2]) >=len)
      return;
  int num1= stoi(ip.substr(0,pos[0]));
  if (0>= num1 || num1 >255)
      return;
  int num2= stoi(ip.substr((0+pos[0]),pos[1]));
  if (0>= num2 || num2 >255)
      return;
  int num3= stoi(ip.substr((0+pos[0]+pos[1]),pos[2]));
  if (0>= num3 || num3 >255)
      return;
  int num4= stoi(ip.substr((0+pos[0]+pos[1]+pos[2])));
  if (0>= num4 || num4 >255)
      return;
  cout << num1<<"."<<num2<<"."<<num3<<"."<<num4<<"\n";
  
}
