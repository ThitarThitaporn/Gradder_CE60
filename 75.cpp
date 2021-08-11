#include<stdio.h>
int main() 
{
  int x,z,y;
  scanf("%d",&x);
  z=x%4;
  printf("%d",(249*z)+(x-z)*249-(((x-z)/4)*249));

 
  return 0;
}
