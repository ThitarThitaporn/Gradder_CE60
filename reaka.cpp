#include<stdio.h>
#include<math.h>
int main() 
{
	double x,y,A;
	int An,r,n;
	scanf("%.6lf %.6lf %d",&x,&y,&n);

	
	An = x *pow(y/x,n-1);
	printf("%.6lf",An);
	//An = (A1=x) * (A=(r=y/x)^(n-1))
 

    return 0;
}
