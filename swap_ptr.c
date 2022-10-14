#include<stdio.h>
void main()
{
	
	int x,y,temp=0,*p,*q;
	printf("\n Enter a value for x=");
	scanf("%d",&x);
	
	printf("\n Enter a value for y=");
	scanf("%d",&y);
	
	printf("\n Before swap value of x =%d",x);
	printf("\n Before swap value of y =%d",y);
	
	p=&x;
	q=&y;
	
	temp=*p;
	*p=*q;
	*q=temp;
	
	printf("\n After swap value of x =%d",*p);
	printf("\n After swap value of y =%d",*q);
}
