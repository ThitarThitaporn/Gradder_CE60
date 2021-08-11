
#include<stdio.h>
#include<math.h>
int main() 
{
	double x,y,n,r,p;
	
	scanf("%lf %lf %lf",&x,&y,&n);
	r=y/x;
	p=n-1;
	
	if(n>0&&x!=0){
		printf("%.6lf",x*pow(r,p));
	}
	else(n<=0)
	{
		
		printf("ERROR");
	}
	

 

    return 0;
}