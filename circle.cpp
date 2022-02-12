#include<stdio.h>
int main()
{
	float r,D,C,A;
	printf("Enter the radius of the circle r=\n");
	scanf("%f",&r);
	D=2*r;
	printf("%f is the diamtere of the circle\n",D);
	C=2*3.141*r;
	printf("%f is the circumference of the circle\n",C);
	A=3.141*r*r;
	printf("%f is the area of the circle\n",A);
	return 0;
	
	
}
