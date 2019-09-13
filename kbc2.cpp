#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<dos.h>
void menu_3();
 char str;
char ch;
FILE *ptr;
int k;
static int lcount=0;
void menu();
void menu1();
void ftxt()
{
while(str != '_')
{
str=fgetc(ptr);
printf("%c",str);
}
str=str-1;
printf("\n");
}
void flush()
{
fflush(stdin);
}
void option_1()
{
ftxt();
ch=getche();
flush();
if(ch=='a' || ch=='A')
{
menu();
}
else{
menu1();
}
}
void option_2()
{
ftxt();
ch=getche();
flush();
if(ch=='b' || ch=='B')
{

menu();
}
else{
menu1();
}
}
void option_3()
{
ftxt();
ch=getche();
flush();
if(ch=='c' || ch=='C')
{

menu();
}
else{
menu1();
}
}
void option_4()
{
ftxt();
ch=getche();
flush();
if(ch=='d' || ch=='D')
{

menu();
}
else{
menu1();
}
}
void menu()
{
system("color 27");
printf("\n\n");
}
void menu1()
{
system("color 47");
printf("\nTry again!!\n");
printf("\a");
exit(0);
}
int main()
{
printf("\t\t\t\t\t\t\tKBC me Shivam Kumar aapka swaagat krte hai\n");
printf("\t\t\t\t\t\t\t******************************************\n\n");
printf("\a");
char ch1;
ptr=fopen("kk.doc","r");
if(ptr==NULL)
{
printf("Error in opening\n");
}
while(!feof(ptr)){
ch1=fgetc(ptr);
if(ch1=='\n'){
lcount++;
}
switch(lcount){
case 4:
case 12:
case 22:
case 32: option_1();
break;
case 0:
case 14:
case 24:
case 26:
case 30:
case 36: option_2();
break;
case 6:
case 8:
case 10:
case 16:
case 18:
case 34: option_3();
break;
case 2:
case 20:
case 28:
case 38: option_4();
break;
}
}
fclose(ptr);
}
