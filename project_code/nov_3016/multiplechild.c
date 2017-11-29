#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>

int main(int argc, char *argv[])
{
pid_t p_id[20], pid;
int i=0,k;

for(i=0;i<20;i++)
{
	pid = fork();
	if(pid == 0) // child process
	{
		printf("pid=%d ppid=%d\n",getpid(),getppid());
		printf("this is child process\n");
		k=execl("/home/lachaash/ashok_files/Babu_sent/new_task/project_code/nov_3016/child_folder/child","child",(char *)NULL);
		printf("the exec value is %d\n",k);
		exit(0);
	}
	else if(pid > 0) {//parent process
		p_id[i] = pid;
		wait(0);
		continue;
		//exit(0);
	}
	else
	{
		perror("child creation failed\n");
		exit(EXIT_FAILURE);
	}
}
printf("parent\n");

return 0;
}


