#include<stdio.h>
#include<conio.h>
int main(void)
{
	int sthra,stmin,sphr,spmin;
	int time,tmhr,tmmin;
	scanf("%d",&sthra);
	scanf("%d",&stmin);
	scanf("%d",&sphr);
	scanf("%d",&spmin);
	printf("\nstarting time=%d hr:%d min",sthra,stmin);
	printf("\nstop time=%d hr:%d min",sphr,spmin);
	if(sphr<sthr)
	{
		sphr=sphr+12;
	}
	sthra=sthra*60+stmin;
	sphr=sphr*60+spmin;
	time=sphr-sthr;
	if(time<60)
	{
		printf("\n The time difference=00 hr:%d min",time);
	}
	else
	{
	tmhr=time/60;
	tmmin=time%60;
	printf("\n The time difference=%d hr:%d min",tmhr,tmmin);
	}
	return 0;
	}
