#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>
#include<sys/types.h>
#include<stdlib.h>
int main()
{
 int pid=fork();
 if(pid==0)
{
 exit(0);
printf("child process id is %d has a parent id %d \n",getpid(),getppid());

}
else if(pid>0)
{
wait(NULL);// done for parent to wait for child to ex first
printf("parent process id is %d\n",getpid());

}
else
{
printf("process not created");
}
 return 0;
}
