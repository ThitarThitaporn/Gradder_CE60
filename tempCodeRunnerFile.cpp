#include<stdio.h>
int main() 
{
  int x,z;
  scanf("%d",&x);
  
  z=x%4==0;
  if(z>0){
  	
  	printf("%d",x);
  }
  return 0;
}