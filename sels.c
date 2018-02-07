#include<stdio.h>
#include<math.h>
int main()
	{
	int a[]={9,7,8,1,5,3},i,j,min,temp;
	for(i=0;i<6;i++)
{
	min=i;
	for(j=i+1;j<6;j++)
{
	if (a[min]>a[j])
	min=j;
}
temp=a[min];
a[min]=a[i];
a[i]=temp;
}

printf("the sorted array is ");

for(i=0;i<6;i++)
{
	printf("%d ",a[i]);
}
	
	}
	
