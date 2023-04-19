#include<stdio.h>
void main()
{
	int sum(),diff(),mul(),div(),mod(),x,y,z,r,s;
	x=sum();
	printf("sum=%d",x);
	y=diff();
	printf("diff=%d",y);
	z=mul();
	printf("mul=%d",z);
	r=div();
	printf("div=%d",r);
	s=mod();
	printf("mod=%d",s);
}
int sum()
{
	int a,b,c;
	printf("enter a,b values:\n");
	scanf("%d %d",&a,&b);
	c=a+b;
	return c;
}
int diff()
{
	int a,b,c;
	printf("enter a,b values:\n");
	scanf("%d %d",&a,&b);
	c=a-b;
	return c;
}
int mul()
{
	int a,b,c;
	printf("enter a,b values:\n");
	scanf("%d %d",&a,&b);
	c=a*b;
	return c;
}
int div()
{
	int a,b,c;
	printf("enter a,b values:\n");
	scanf("%d %d",&a,&b);
	c=a/b;
	return c;
}
int mod()
{
	int a,b,c;
	printf("enter a,b values:\n");
	scanf("%d %d",&a,&b);
	c=a%b;
	return c;
}
