#include<stdio.h>
#include<sys/types.h>
#include<unistd.h>
void main()
{
printf("Hello world\n");
for(int i=0;i<5;i++){
fork();
printf("Hello world %d \n");
}}
                                                                                     
