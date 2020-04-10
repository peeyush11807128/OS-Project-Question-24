#include<stdio.h>
#include<stdbool.h>
int i,j,t;
int counter =0;
bool bol=false;
main()
{
	printf("Enter How many resource \n");
	int a;
	scanf("%d",&a);
	int res[a];
	printf("Enter the total Weight of All Resource\n");
	
	for(i=0;i<a;i++)
	{
		printf("%c is  ",65+i);
		scanf("%d",&res[i]);
	}
	
	printf("\nEnter how many process u have ");
	int b;
	scanf("%d",&b);
	int c[b][a],max[b][a],need[b][a],avali[a];
	
	m:for(i=0;i<b;i++)
	
	for(j=0;j<a;j++)
	{
		printf("\nP[%d] allocation of %c",i,(char)65+j);
		scanf("%d",&c[i][j]);
		printf("\nP[%d] maximum Required resource for %c",i,(char)65+j);
		scanf("%d",&max[i][j]);
		need[i][j]=max[i][j]-c[i][j];
	}
	
	for(j=0;j<a;j++)
		{
			for(i=0;i<b;i++)
			{
				avali[j]=avali[j]+c[i][j];
			}
		avali[j]=res[j]-avali[j];
		}
	i=0;
	
	while(counter<b&&t<b)
	{
		bol=true;
		
		for(j=0;j<a;j++)
		{
			if(need[i][j]>avali[j])
			{
				t++;
				bol=false;
				break;
			}
		}
		if(bol)
		{
			counter++;
			for(j=0;j<a;j++)
			{
			avali[j]+=c[i][j];
			need[i][j]=res[j]+2000;
			}
		}
		if(i==b-1)
		i=0;
		else
		i++;
		}
	if(counter==b)
	{
		printf("\nsafe");
	}
	else
	{
		printf("\nunsafe");
	}
}
