#include <stdio.h>
#include <unistd.h>

int main(void)
{
    pid_t k;

	k=vfork();
	if(k==0)
	{
		printf("this is CHILD PROCESS\n");
		printf("the process id= %d parent id= %d\n",getpid(),getppid());
	}
	else
	{
		printf("this is PARENT PROCESS\n");
		printf("the process id= %d parent id= %d\n",getpid(),getppid());
	}
    
return 0;
}

