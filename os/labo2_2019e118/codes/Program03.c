#include<stdio.h>
#include<curses.h>
#include <stdlib.h>

struct process
{
	int pid;
	int bt;
	int wt,tt;
}
p[10];

void clrscr(void)
{
    system("clear");
}

int waitTime(int time,int n){
return time/n;
}

int turnAround(int time, int n){
return time/n;
}

int main()
{
int i,n,totwt,tottt,avg1,avg2;
clrscr();

printf("Enter the no of process\n");
scanf("%d",&n);

for(i=1;i<=n;i++)
	{
		p[i].pid=i;
		printf("enter the burst time\n");
		scanf("%d",&p[i].bt);
	}

p[1].wt=0;
p[1].tt = p[1].bt+p[1].wt;
i=2;
while(i<=n)
{
	p[i].wt=p[i-1].bt+p[i-1].wt;
	p[i].tt=p[i].bt+p[i].wt;
	i++;
}

i=1;
totwt=tottt=0;
printf("\n processid\t bt\t wt\t tt\n");
while(i<=n)
{
	printf("\n\t%d\t%d\t%d\t%d",p[i].pid,p[i].bt,p[i].wt,p[i].tt);
	totwt=p[i].wt+totwt;
	tottt=p[i].tt+tottt;
	i++;
}

avg1 = waitTime(totwt,n);
avg2=turnAround(tottt,n);
printf("\nAverage waiting time=%d\t Average Turn Around Time=%d\t\n",avg1,avg2);
getch();
return 0;

}
