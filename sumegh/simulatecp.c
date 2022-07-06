#include<stdio.h>
#include<sys/types.h>
#include<unistd.h>
#include<stdlib.h>
void main(char *argv[])
{
FILE *f;char ch;
int sc=0;
printf("thes %d\n",sc);
f=fopen("./fork.txt","r");
printf("thes %d\n",sc);
if(f==NULL)
{
printf("error not able to open file\n");
exit(1);

}
else{

while(!feof(f))
{

ch=fgetc(f);
if(ch==' ')
sc++;

}
}

printf("the number of spaces is %d\n",sc);

}
                                                                                     
