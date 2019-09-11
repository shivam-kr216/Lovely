#include<iostream>
#include<process.h>
#include<unistd.h>
#include<stdlib.h>
#include<fstream>
#include<string.h>
#include<conio.h>
using namespace std;
class Appointment;
class Doctor{
private:
char dname[20], spec[20];
char did_no[4];
char fee[5];
int bookSpec();
int checkDid();
void getDoctorDetails();
public:
void m_specialist();
//void viewAllDoctors();
void searchForSpec(char * , Appointment &);
};

class Patient{
private:
char pname[20], pid_no[4];
char disease[20];
char medic[20];
void patient_record();
void medicineDetails();
inline void onePatientUpdate();
inline void showPatientRecord();
int checkPid();
public:
void patient_details(Appointment &app);
void releasePatient(char *);
void updateMedicine(char *);
void viewAllPatient();
};

class Appointment{
char aname[20], age[3];
char date[9], time[6];
char id[4];
friend void Doctor::searchForSpec(char *,Appointment &);
friend void Patient::patient_details(Appointment &);
public:
int searchAppointment(char *);
void getAppointment();
void approveAppointmentWithDate();
void writeIntoAppFile();
};

int Appointment::searchAppointment(char *str){
int k=0;
ifstream fin;
fin.open("appointment.dat",ios::binary | ios::app);
if(!fin.is_open()){
cout<<"Error";
}
while(!fin.eof()){
fin.read((char*)this,sizeof(*this));
if(strcmp(id,str)==0){
int k=1;
return k;
}
}
fin.close();
}

void Appointment::approveAppointmentWithDate(){
cout<<"Give patient id:: ";
cin.getline(date,4);
cout<<"Enter date of Appointment:: ";
cin.getline(date,9);
cout<<"Enter time:: ";
cin.getline(time,6);
}

void Appointment::writeIntoAppFile(){
ofstream fout;
fout.open("appointment.dat",ios::binary | ios::app);
if(!fout.is_open()){
cout<<"Error";
}
else {
fout.write((char*)this,sizeof(*this));
}
fout.close();
}

void Appointment::getAppointment(){
cout<<"Enter patient name:: ";
cin.getline(aname,20);
cout<<"Enter patient age:: ";
cin.getline(age,3);
approveAppointmentWithDate();
writeIntoAppFile();
}



int Doctor::bookSpec(){
int k=1;
cout<<"Name of doctor:: "<<dname<<endl;
cout<<"Doctor's Id:: "<<did_no<<endl;
cout<<"Specialist:: "<<spec<<endl;
cout<<"Doctor's fee:: "<<fee<<endl;
}

void Doctor::searchForSpec(char *str,Appointment &app){   //For appointment
int k=0;
ifstream fin;
fin.open("binary.dat");
if(!fin.is_open())
cout<<"Error";
fin.seekg(0);
fin.read((char*)this,sizeof(*this));
while(!fin.eof()){
if(stricmp(spec,str)==0){
k=bookSpec();
}
fin.read((char*)this,sizeof(*this));
}
fin.close();
if(k==0){
cout<<"No such specialist available."<<endl;
}
else if(k==1){
char approv, approv1;
cout<<"For appointment press 'Y' else press 'N':: ";
approv=getch();
approv1=toupper(approv);
if(approv1=='Y'){
app.getAppointment();
}	
else if(approv1=='N'){
cout<<"Happy to help you."<<endl;
}
}
else{
cout<<"Invalid input"<<endl;
}
}


int Doctor::checkDid(){
cout<<"Doctor's 4 digit I'd:: ";
cin.getline(did_no,5);
int k=strlen(did_no);
if(k==4){
return k;
}
cout<<"Wrong id"<<endl;	
checkDid();   
}

void Doctor::m_specialist(){
cout<<"Enter doctor's name:: ";
fflush(stdin);
cin.getline(dname,20);
cout<<"Enter specialisation:: ";
fflush(stdin);
cin.getline(spec,20);
int k=checkDid();
fflush(stdin);
cout<<"Doctor's fee:: ";
fflush(stdin);
cin.getline(fee,5);
getDoctorDetails();
}

void Doctor::getDoctorDetails(){
ofstream fout;
fout.open("binary.dat",ios::binary | ios::app);
if(!fout.is_open()){
cout<<"Error";
}
else{
fout.write((char*)this,sizeof(*this));
}
fout.close();
}

inline void Patient::showPatientRecord(){
cout<<"Name of patient:: "<<pname<<endl;
cout<<"Patient id:: "<<pid_no<<endl;
cout<<"Disease patient have:: "<<disease<<endl;
cout<<"Recommended medicine:: "<<medic<<endl;
cout<<"----------------------------------------------------\n";
}

void Patient::viewAllPatient(){
ifstream fin;
fin.open("binary2.dat");
if(!fin.is_open())
cout<<"Error";
fin.read((char*)this,sizeof(*this));
while(!fin.eof()){
showPatientRecord();
fin.read((char*)this,sizeof(*this));
}
fin.close();
}

int Patient::checkPid(){
cout<<"Enter patient's 3 digit I'd:: ";
cin.getline(pid_no,4);
int k=strlen(pid_no);
if(k==3){
return k;
}
cout<<"Wrong id"<<endl;	
checkPid();   
}

void Patient::patient_details(Appointment &app){
char id[4];
cout<<"Enter exactly 3 digit Id for checking:: ";
fflush(stdin);
cin.getline(id,4);
int k=app.searchAppointment(id);
if(k==1){
cout<<"Id found."<<endl;
}
else{
cout<<"Came without appointment."<<endl;
exit(0);
}
cout<<"Enter into doctor's cabin!!"<<endl;
sleep(4);
string symptoms;
char j;
cout<<"Enter Patient's name:: ";
cin.getline(pname,20);
int k1=checkPid();
cout<<"Enter symptoms:: ";
getline(cin,symptoms);
cout<<"Enter disease name:: ";
cin.getline(disease,20);
cout<<"Wheather patient have to take admit or not:: ";
j=getch();
if(j=='y'){
onePatientUpdate();
patient_record();
}
else
medicineDetails();
}

void Patient::medicineDetails(){
string medicine[5];
int j;
cout<<"Enter number of medicines:: ";
cin>>j;
cout<<"Enter recomended midicines:: ";
for(int i=0;i<j;i++)
cin>>medicine[i];
}

inline void Patient::onePatientUpdate(){
//strcpy(this->pname,pname);
//strcpy(this->pid_no,pid_no);
//strcpy(this->disease,disease);
cout<<"Enter medicine name:: ";
cin.getline(medic,20);
}

void Patient::updateMedicine(char *str1){
fstream fout;
fout.open("binary2.dat",ios::in|ios::out|ios::ate);
if(!fout.is_open())
cout<<"Error";
fout.seekg(0);
fout.read((char*)this,sizeof(*this));
while(!fout.eof()){
if(stricmp(pid_no,str1)==0){
//fout.seekp(fout.tellp()-sizeof(this));     //ambiguity
onePatientUpdate();
fout.write((char*)this,sizeof(*this));
break;
}
fout.read((char*)this,sizeof(*this));
}
fout.close();
}

void Patient::patient_record(){
ofstream fout;
fout.open("binary2.dat",ios::binary | ios::app);
if(!fout.is_open()){
cout<<"Error";
}
else {
fout.write((char*)this,sizeof(*this));
}
fout.close();
}

void Patient::releasePatient(char *str1){
ofstream fout;
ifstream fin;
fin.open("binary2.dat");
fout.open("Patient1.txt");
if(!fin.is_open() || !fout.is_open())
cout<<"Error";
fin.read((char*)this,sizeof(*this));
while(!fin.eof()){
if(!stricmp(pid_no,str1)==0){
fout.write((char*)this,sizeof(*this));
}
fin.read((char*)this,sizeof(*this));
}
fout.close();
fin.close();
remove("binary2.dat");
rename("Patient1.txt","binary2.dat");
}

int main(){
cout<<"Welcome to Hospital Management Portal."<<endl;
sleep(3);
cout<<"1.Taking appointment.\n2.New doctor's arrival.\n3.Arrival of patient."<<endl;
cout<<"4.Show all patient.\n5.Update patient's medicine."<<endl;
cout<<"6.Release patient"<<endl;
Doctor doc;
Patient pat;
Appointment app;
cout<<"Enter your choice:: ";
int i;
cin>>i;
switch(i){
case 1:
char str[20];
cout<<"Enetr the specialist searching for:: ";
fflush(stdin);
cin.getline(str,20);
doc.searchForSpec(str,app);
break;
case 2:
doc.m_specialist();
break;
case 3:
pat.patient_details(app);
break;
case 4:
pat.viewAllPatient();
break;
case 5:
char id[4];
cout<<"Enter exactly 3 digit Id for updating medicine:: ";
//fflush(stdin);
cin.getline(id,4);
pat.updateMedicine(id);
break;
case 6:
char id1[4];
cout<<"Enter exactly 3 digit Id for releasing patient:: ";
cin.getline(id1,4);
pat.releasePatient(id1);
break;
default: 
cout<<"Please provide a valid input!!"<<endl;
}
}

/******************DELETION OF 2d ARRAY********************
for(int i=0; i<nm; mn++){
delete []ptr[i];    //next line:: delete ptr[i]=0;
}
delete []ptr;
}******************/
