#include<stdio.h>
void main()
{
	int x,y,temp=0;
	printf("\n Enter a value for x=");
	scanf("%d",&x);
	
	printf("\n Enter a value for y=");
	scanf("%d",&y);
	
	printf("\n Before swap value of x =%d",x);
	printf("\n Before swap value of y =%d",y);
	
	temp=x;
	x=y;
	y=temp;
	
	printf("\n After swap value of x =%d",x);
	printf("\n After swap value of y =%d",y);
}
