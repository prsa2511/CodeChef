#include<stdio.h>
int main()
{
	int w;
	float n;
	printf("Enter the amount withdrawal amount\n");
	scanf("%d",&w);
	printf("Enter intial bank balance with 2 digit precision\n");
	scanf("%f",&n);
	if((w<=2000&&w>0&&(n<=2000&&n>=0)))
	{
		if(w<=(n-0.5))
		{
			if(w%5==0)
			{
				n=n-w-0.5;
				printf("The current bank balance is %f\n",n);
			}	
			else
				printf("Withdrawal amount must be multiple of 5");
		}
		else
			printf("%f",n);
	}
	else
		printf("Check inputs\n");
}
