#include<stdio.h>
void main()
{
	int a[20],i,n,j,temp;
	printf("enter the size of an array\n:");
	scanf("%d",&n);
	printf("enter the elements in array\n:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(a[j]<a[j+1])
			{
			temp=a[j];
			a[j]=a[j+1];
			a[j+1]=temp;
			}
		}
	}
	printf("sorted list of elements:\n");
	for(i=0;i<n;i++)
		printf("%d",a[i]);
}

			
		
	
