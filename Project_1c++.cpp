#include<iostream>
#include<stdlib.h>
#include<fstream>
#include<string>
#include<conio.h>
using namespace std;
char password[30];
class a{
public:
static int count;
void fun_file();
void cdt();
void finalfun(int);
};

char s1[40],ch5;
fstream fout;
ifstream obj;
int  lcount;
string ch2;

void a::cdt(){
switch(count){
case 21:
cout<<"\nPatna"<<endl<<"Hajipur"<<endl<<"Muzzafarpur"<<endl;
break;
case 31:
cout<<"\nDhanbad"<<endl<<"Wasseypur"<<endl<<"Govindpur"<<endl;
break;
case 46:
cout<<"\nViskhapatnam"<<endl<<"Hydrabad"<<endl<<"Vijaywada"<<endl;
break;
case 64:
cout<<"\nSikri"<<endl<<"Baandra"<<endl<<"Sindri"<<endl;
break;
case 71:
cout<<"\nLudhiana"<<endl<<"Amritsar"<<endl<<"Jalandhar"<<endl;
break;
case 78:
cout<<"\nKinda"<<endl<<"Shiv mandir"<<endl<<"Bhoramdev temple"<<endl;
break;
case 87:
cout<<"\nGoa beach"<<endl<<"Deshri"<<endl<<"Mahnaar"<<endl;
break;
case 95:
cout<<"\nKach"<<endl<<"Gorigamma"<<endl<<"Gandharv"<<endl;
break;
case 101:
cout<<"\nGurgaon"<<endl<<"Noida"<<endl<<"Badarpur"<<endl;
break;
case 118:
cout<<"\nTrishi"<<endl<<"Taazpur"<<endl<<"Shimla"<<endl;
break;
case 130:
cout<<"\nBirla temple"<<endl<<"Howrah bridge"<<endl<<"Marble palace"<<endl;
break;
case 137:
cout<<"\nLingaraj temple"<<endl<<"Parshurameshwaram temple"<<endl<<"Rajarani palace"<<endl;
break;
case 145:
cout<<"\nAizawl"<<endl<<"Champhai"<<endl<<"Vanzau"<<endl;
break;
case 152:
cout<<"\nGangtok"<<endl<<"Yuksom"<<endl<<"Tsomgo lake"<<endl;
break;
case 163:
cout<<"\nMahabalipuram"<<endl<<"Madurai"<<endl<<"Vellore"<<endl;
break;
}
obj.close();
}


inline void write_con(){
cout<<ch5;
}


void a::finalfun(int i){
ifstream fin;
cout<<"\n";
fin.open("document3.txt");
fin.seekg(0);
while(!fin.eof()){
fin.get(ch5);
if(ch5=='\n')
{
lcount++;
}

if(lcount>=0 && lcount<=10 ) {
if(count==21 && i==1){
write_con();
}
else if(count==163 && i==2){
write_con();
}
else if(count==95 && i==3){
write_con();
}
}
if(lcount>=11 &&lcount<=21){
if(count==101 &&i==2){
write_con();
}else if(count==118 && i==1){
write_con();
}else if(count==145 && i==3) {
write_con();
}
}
if(lcount>=22 && lcount<=32)
{
if(count==21 &&i==3){
write_con();
}
else if(count==87 && i==2){
write_con();
}
else if(count==95 && i==1){
write_con();
}
}
if(lcount>=33 && lcount<=43){
if(count==137 && i==2){
write_con();
}
else if(count==83 && i==3){
write_con();
}else if(count==71 && i==2){
write_con();
}
}
if(lcount>=44 && lcount<=54){
if(count==137 && i==3){
write_con();
}
else if(count==46 && i==3){
write_con();
}
else if(count==152 && i==1){
write_con();
}
}
if(lcount>=55 &&lcount<=65){
if(count==64 &&i==3){
write_con();
}
else if(count==31 && i==2){
write_con();
}
else if(count==83 && i==1){
write_con();
}
}
if(lcount>=66 &&lcount<=76){
if(count==71 &&i==3){
write_con();
}
else if(count==21 && i==2){
write_con();
}
else if(count==163 && i==1)
{
write_con();
}
}
if(lcount>=77 && lcount<=87){
if(count==145 &&i==1){
write_con();
}
else if(count==152 && i==2){
write_con();
}
else if(count==163 && i==3){
write_con();
}
}
if(lcount>=88 &&lcount<=98){
if(count==137 &&i==1){
write_con();
}
else if(count==83 && i==2){
write_con();
}
else if(count==130 && i==1){
write_con();
}
}


if(lcount>=99 &&lcount<=109){
if(count==101 &&i==1){
write_con();
}
else if(count==118 && i==2){
write_con();
}
else if(count==130 && i==3){
write_con();
}
}


if(lcount>=110 &&lcount<=120){
if(count==87 &&i==1){
write_con();
}
else if(count==145 && i==2){
write_con();
}
else if(count==152 && i==3){
write_con();
}
}


if(lcount>=120 &&lcount<=131){
if(count==31 &&i==1){
write_con();
}
else if(count==130 && i==2){
write_con();
}
else if(count==87 && i==3){
write_con();
}
}

if(lcount>=132 &&lcount<=142){
if(count==64 &&i==1){
write_con();
}
else if(count==46 && i==2){
write_con();
}
else if(count==31 && i==3){
write_con();
}
}

if(lcount>=143 &&lcount<=153){
if(count==71 &&i==1){
write_con();
}
else if(count==95 && i==2){
write_con();
}
else if(count==118 && i==3){
write_con();
}
}

if(lcount>=154 &&lcount<=164){
if(count==64 &&i==2){
write_con();
}
else if(count==101 && i==3){
write_con();
}
else if(count==133 && i==3){
write_con();
}
}
}
fin.close();
}


void a::fun_file(){
obj.open("document.txt");
string str;
cin.getline(s1,40);
int k, l;
while(!obj.eof()){
getline(obj,str);
count=obj.tellg();
if(str.compare(s1)==0){
k=1;
break;
}
else{
k=0;
}
}
if(count==-1 && k==1 || k==0){
cout<<"No data found on your search.....\n"<<"Try again..!";
exit(1);
}
}

void not_matched();


void match(){
cout<<"Press enter to login"<<endl;
cout<<"\t _____"<<endl;
cout<<"\t|login|"<<endl;
cout<<"\t```````"<<endl;
getch();
}

void test_cdt(){
fout.open("document4.txt",ios::in);
cout<<"Email:"<<endl;
cin.getline(s1,40);
int test;
while(!fout.eof()){
fout>>ch2;
if(ch2.compare(s1)==0){
test=1;
cout<<"You already have an account....."<<endl;
break;
}
else{
test=0;
}
}
fout.close();
if(test==1){
match();
}
else if(test==0){
not_matched();
}
}


void not_matched(){
char ch3;
fout.open("document4.txt",ios::out |ios::app);
fout<<s1<<"\t";
int k1=fout.tellg();
if(k1==1){
cout<<"Enter your Email id to get access:-"<<endl;
fout.close();
test_cdt();
}
else{
cout<<"Password:"<<endl;
int i=0;
while(1){
{
if(i<0){
i=0;
}
}
ch3=getch();
if(ch3=='\b')
{
i--;
continue;
}
if(ch3==13)
{
break;
}
else{
fout.put(ch3);
password[i]=ch3;
ch3='*';
cout<<ch3;
i++;
}
}
password[i+1]='\0';
fout<<"\n";
cout<<"\n";
match();
}
}

int a::count=0;


int main()
{
a obj1;
cout<<"\n\n\n\n\n\n\n\n\n\n\n";
cout<<"\t\t\t\t\t _______________________________________________________________"<<endl;
cout<<"\t\t\t\t\t| Follow three simple steps and get updates about your place:\t|"<<endl;
cout<<"\t\t\t\t\t|\t\t\t\t\t\t\t\t|"<<endl;
cout<<"\t\t\t\t\t|1)Enter your Email id and password.\t\t\t\t|"<<endl;
cout<<"\t\t\t\t\t|2)Press enter for login.\t\t\t\t\t|"<<endl;
cout<<"\t\t\t\t\t|3)After getting access enter the state name and get update\t|"<<endl;
cout<<"\t\t\t\t\t| about that place\t\t\t\t\t\t|"<<endl;
cout<<"\t\t\t\t\t|_______________________________________________________________|"<<endl;
getch();
system("cls");
test_cdt();

system("cls");
cout<<"\t\t\t\t\t\tWELCOME TO TOURIST GUIDE SERVICE"<<endl;
cout<<"\t\t\t\t\t\t********************************"<<endl;
while(1){
cout<<"Enter the name of the state where you are now: ";
fflush(stdin);
obj1.fun_file();

obj1.cdt();

int i;

cout<<"Enter the number in which city you are: ";
cin>>i;
if(i<=0 || i>3){
cout<<"Invalid input"<<endl;
exit(0);
}
obj1.finalfun(i);
}
cout<<"\n\t\t\t**********************************************************";
cout<<"\n\t\t\t\t\tHAPPY TO HELP TO YOU"<<endl;
cout<<"\t\t\t***********************************************************";
return 0;
}
