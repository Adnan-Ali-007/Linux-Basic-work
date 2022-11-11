#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
int main()
{
printf("i am in exec demo.c\n");
printf("PID of exec demo.c is %d\n",getpid());
char* args[] ={"./helloout",NULL};
execv(args[0],args);
printf("coming back to execv_demo.c"); // this will not be execute
return 0;
}
