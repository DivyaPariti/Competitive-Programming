//GeeksForGeeks Problem : Count Pairs in Array (Easy)
//Author : Piyush
#include<stdio.h>
int main()
{
	int t,n,no[101],ch[101],i,j,count;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		for(i=0;i<n;i++)
		{
			scanf("%d",&no[i]);
			ch[i]=i*no[i];
		}
		count=0;
		for(i=0;i<n-1;i++)
		{
			for(j=i+1;j<n;j++)
			{
				if(ch[i]>ch[j])
				count++;
			}
		}
		printf("%d\n",count);
	}
	return 0;
}

