#include<stdio.h>
int main()
{
	int k=0,i,n;
	int arr[n];
	printf("\n Enter size of arr=");
	scanf("%d",&n);
	//UB=n-1;
	
	for(i=0; i<n; i++)
	{
		printf("\n Enter values of arr[%d]=",i);
		scanf("%d",&arr[i]);
		
	}		
	

		while(k<=(n-1))
		{
			printf("\n Enter values of arr[%d]=%d",k,arr[k]);	
			k++;
		}
	
		
		
	
	
		
			return 0;
}	

