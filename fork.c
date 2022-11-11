#include<stdio.h>
#include<stdlib.h>
#include<sys/types.h>
#include<unistd.h>
int main()
{
  printf("before use of fork %d \n",getpid());
  fork();
  printf("after use of fork %d\n",getpid());

return 0;
}

