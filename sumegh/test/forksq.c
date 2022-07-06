#include<stdio.h>
#include<sys/types.h>
#include<unistd.h>
#include<stdlib.h>
void main()
{
int pid,pid1,pidc1;
pid =fork();
int a=5;
if(pid==-1)
{
printf("error process not founds\n");
exit(1);
}
if(pid!=0)
{
//pid1=fork();
printf("the parent process id is %d\n",a);

}
if(pid==0){
//pid2=getpid();

printf("the child process id is %d\n",++a);
pid1=fork();

}
if(pid==0&&pid1==0)
{
printf("the child process id is %d\n",a*a);
}

}
                                                                                     
