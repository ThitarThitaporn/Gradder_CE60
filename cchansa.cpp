#include<stdio.h>
#include<math.h>
int main(){
	double r,ri;
	ri=22/7.0;
	scanf("%lf",&r);
	if (r>0) 
	{
		printf("%.8lf",ri*(r*r));
	}
	else {
		printf("ERROR");
	}
	
}
