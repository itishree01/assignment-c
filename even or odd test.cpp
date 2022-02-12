#include<stdio.h>
int main()
{
	int a;
	printf("ENTER ANY NUMBER a=");
	scanf("%d",&a);
	switch(a%2)
	{
	  case 0:
	  printf("number is even");
	  break;
	  case 1:
	  printf("number is odd");
	  break;
	}
	return 0;
}
