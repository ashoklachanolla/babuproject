#include<stdio.h>

int main(int argc,char *argv[])// argv[1]==priority argv[2]==delay
{
int i;
printf("the priority of process is %d\n",atoi(argv[1]));
for(i=0;i<atoi(argv[2]);i++)
	printf(" i=%d ",i);
printf("\n");

sleep(2);
return 0;
}

