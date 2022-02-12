#include<stdio.h>
int main()
{
	int a,b,sum,sub,mul,div;
	char OP;
	printf("Enter OP:");
	scanf("%c",&OP);
	printf("Enter two operands");
	scanf("%d %d",&a,&b);
	switch(OP)
	{
		case '+':
		sum=a+b;
		printf("sum=%d",sum);
		break;
		case '-':
		sub=a-b;
		printf("sub=%d",sub);
		break;
		case '*':
		mul=a*b;
		printf("mul=%d",mul);
		break;
		case '/':
		printf("div=%d",div);
		default:
        printf("ENTER VALID OPERATOR");
 	
	}
	return 0;
}
