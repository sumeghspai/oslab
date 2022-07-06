#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>
void main()
{
FILE *f1,*f2;
char a[100],b[100],ch;
printf("\n\n enter name of first file");
scanf("%s",a);

printf("\n\n enter name of second file");
scanf("%s",b);
f1=fopen(a,"r");
f2=fopen(b,"w");

while(!feof(f1))
{

ch=fgetc(f1);
fputc(ch,f2);
}
fclose(f1);
fclose(f2);
}
