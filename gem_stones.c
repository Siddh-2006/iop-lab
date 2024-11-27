#include<stdio.h>
#include<string.h>
int main()
{
	int n,i,j,gem_stone=0;
	char ch;
	printf("enter the number of stones:");
	scanf("%d",&n);
	char stone[n][100];
	for(i=0;i<n;i++)
	{
		scanf("%s",stone[i]);
	}
	for(ch='a';ch<='z';ch++)
	{
		int count=0;
		for(i=0;i<n;i++)
		{
			for(j=0;j<strlen(stone[i]);j++)
			{
				if(stone[i][j]==ch)
				{
					count++;
					break;
				}
			}
		}
		if(count==n)
		{
			gem_stone++;
		}
	}
	printf("%d",gem_stone);
 return 0;
}
