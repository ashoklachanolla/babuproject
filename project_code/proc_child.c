#include<stdio.h>
#include<unistd.h>
#include<signal.h>
#include<stdlib.h>
#include<sys/types.h>

int main()
{
int local=434,global=99,status;
pid_t child;

child=fork();

 if(child>=0)
 {
	if(child==0)//child process
	{
	local=20;
	printf("this is child process\n");
	printf("the local=%d global=%d\n",local,global);
//	sleep(5);
	}
	else //parent process
	{
	wait(&status);
	local=25;
	printf("this is parent process\n");
	printf("the local=%d global=%d\n",local,global);
	}

 }
 else// child creation failed condition
 {
	perror("creation failed\n");
	exit(EXIT_FAILURE);
 }

return 0;
}



