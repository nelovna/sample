#include<stdio.h>
int main()
{
	int array[100],n,i,j,swap;
	printf("enter number of elements\n");
	scanf("%d",&n);
	printf("enter %d integers\n",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&array[i]);
	}
	for(i=0;i<n-1;i++)              
	{
		for(j=0;j<n-i-1;j++)
		{
			if(array[j+1]<array[j])
			{
				swap   =array[j];
				array[j] =array[j+1];
				array[j+1]=swap;	
			}
		}
    }
    printf("sorted list in ascending order:\n");
    for(i=0;i<n;i++)
    {
    	printf("%d\n",array[i]);
    }
}

