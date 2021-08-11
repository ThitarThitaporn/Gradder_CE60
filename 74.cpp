#include<stdio.h>
int main() 
{
  double x,y,P;
  scanf("%lf %lf",&x,&y);
  P=x*y;
  if(x>=0&&y>=0)
  { 
  printf("Area = %.6lf x %.6lf = %.6lf",x,y,P);
  }
  else{
  	printf("Error");
  }
  return 0;
}
