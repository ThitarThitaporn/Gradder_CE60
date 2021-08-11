#include<stdio.h>
int main() 
{
  int x,z;
  scanf("%d",&x);
  
 if(z=x%4==0){
  	
  	printf("%d",(x*249)-249);
  }
  
  	else if(z=x%4==1){
  	printf("%d",(z*249)+(x*249)-249);
}
  
  else if(z=x%4==2){
  	printf("%d",z*249+(x*249)-249-249);
  
  }
  else if (z=x%4==3){
  printf("%d",z*249+(x*249)-249-249-249);
  	
  }
 
  return 0;
}
