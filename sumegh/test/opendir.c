#include<stdio.h>
#include<dirent.h>
struct dirent *dptr;
void main()
{
char buff[100];
DIR *dirp;
printf("\n\n ENTER DIRECTORY NAME");
scanf("%s", buff);
if((opendir(buff)==NULL))
{
dirp=opendir(buff);
printf("The given directory does not exist");
return;
}
dirp=opendir(buff);
while(dptr)
{
    printf("%s\n",dptr->d_name);
    dptr=readdir(dirp);
}
closedir(dirp);
}
