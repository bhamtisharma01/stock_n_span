#include<stdio.h>
int main()
{
	int input[100],output[100],n,i,j,k;
	int c=1;
	printf("enter the no of stocks: ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	scanf("%d",&input[i]);
	output[0]=1;
	for(i=1;i<n;i++)
	{
	output[i]=1;
	for(j=i-1; (j>=0)&&(input[i]>=input[j]);j--)
	{
		output[i]++;
		}	
	}
	for(i=0;i<n;i++)
	printf("%d ",output[i]);
}
