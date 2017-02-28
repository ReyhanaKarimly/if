#include <stdio.h>
#include <conio.h>
#include <math.h>
int main()
{
	int a,b,c,max;
	printf("Enter a,b and c:");
	scanf_s("%d%d%d",&a,&b,&c);
	if (a>c)
		if (a>b)
	{
		max=a;
	}
	if(c>a)
		if (c>b)
	{
		max=c;
	}
	if (b>c)
		if (b>a) 
	{
		max=b;
	}
	printf("max number=%d",max);
	getch();
}
