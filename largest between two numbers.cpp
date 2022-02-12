#include<stdio.h>
int main()
{
	int a,b;
	printf("ENTER TWO NUMBERS");
	scanf("%d %d",&a,&b);
	if(a>b)
	{
	printf("%d is the largest number",a);
    }
    else if(b>a)
    {
    printf("%d is the largest number",b);	
	}
	else{
		printf("BOTH ARE EQUAL\n");
	}
	return 0;
	
	}
