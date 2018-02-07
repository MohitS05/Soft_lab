#include<stdio.h>
#include<math.h>
int main()
{
	int arr[]={4,8,2,9,1}
	for (i=0;i<5,i++)
	{
	for (j=1;j<5;j++)
	{
	if (a[j-1]<a[j])
	{
	t=a[j-1];
	a[j-1]=a[j];
	a[j]=t;
	}
	}
	}
}
for (i=0;i<5;i++)
{
	printf("The sorted array is %d\n",arr[i])
}