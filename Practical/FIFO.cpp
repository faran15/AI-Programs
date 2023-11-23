#include<stdio.h>
int main()
{
	int incomingstream[]={5,2,1,4,8,9,3,6,7},pagefaults = 0,frames = 3,m,n,s,pages,i,temp[frames];
	pages = sizeof(incomingstream)/sizeof(incomingstream[0]);
	printf("Incoming\t Frame 1 \t Frame 2 \t Frame 3");
	for(m =0;m<frames;m++)
	{
		temp[m] = -1;
	}
	for(m=0;m<pages;m++)
	{
		s= 0;
		for(n=0;n<frames;n++)
		{
		if(incomingstream[m] == temp[n])
		{
			s++;
			pagefaults--;
		}
		}
			pagefaults++;
			if((pagefaults<= frames) && (s==0))
			{
				temp[m]=incomingstream[m];
			}
			else if(s==0)
{
	temp[(pagefaults -1)% frames] = incomingstream[m];
			}	printf("\n");	
			printf("%d\t\t",incomingstream[m]);
			for(n=0;n<frames;n++)
			{
				if (temp[n] != -1)
				printf("%d\t\t\t",temp[n]);
				else
				printf("-\t\t\t");
				}	}
				printf("\n total page faults: \t%d\n",pagefaults);	
		}	
