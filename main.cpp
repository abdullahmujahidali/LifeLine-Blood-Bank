include<iostream.h>
#include<dos.h>
#include<graphics.h>
#include<conio.h>
#include<fstream.h>
#include<iomanip.h>
#include<string.h>
#include<ctype.h>
#include<stdio.h>
#include<process.h>
class DONOR
{
int age1;
char occupation1[30],place1[30];
int weight1;
int pulse1;
char bp1[10];
public:
int rno,donval;
char name1[30],blood1[5];
void getit(int);
void putit();
};
class GROUPS
{
public:
int op,on,ap,an,bp,bn,ab;
void getit();
};
class ACCEPTOR
{
public:
int recval,rno;
char name2[30],blood2[5],hosp[20];
void getit();
};
int doncrit()
{
int ret=0;
char ch[5];
mn:
clrscr();
for(int i=0;i<=79;i++)
{
cout<<"!";
}
delay(100);
textcolor(BLINK + MAGENTA);
cout<<"\n\n----- HEALTH CRITERIA FOR BLOOD DONATION -----";
delay(1000);
textcolor(BLUE);
cout<<"\n\nConditions for donation of blood ";
delay(1000);
cout<<"\n\n(1)General : \nNo person shall donate blood more than once in three months";
cout<<"\nThe donor shall be in good health, mentally alert and physically fit and shall not be inmates of jail ";
cout<<"persons having multiple sex partners and drug-addicts";
cout<<"The donors should fulfill the following requirements, namely :- ";
cout<<"\n(a)The donor should be in the age group of 18 to 60 years ";
cout<<"\n(b)The donor should not be less than 45 kilograms ";
cout<<"\n(c)Temperature and Pulse of the donor should be normal ";
cout<<"\n(d)The systolic and diastolic blood pressuresarrow-10x10.png are within normal limits without medication";
cout<<"\n(e)Haemoglobin of the donor should not be less than 12.5 grams";
cout<<"\n(f)The donor should be free from acute respiratory diseases";
cout<<"\n(g)The donor should be free from any skin diseases at the site of phlebotomy ";
cout<<"\n(h)The donor should be free from any disease transmissible by blood transfusion, insofar as can be determined by history and examination indicated above ";
cout<<"\n(i)The arms and forearms of the donor should be free from skin punctures and scars indicative of professional blood donors ";
cout<<"\n(j)The donor should be free from addiction to self injected narcotics ";
m:
cout<<"\n\nIs the donor violating any of the above mentioned conditions?(yes or no) ";
gets(ch);
{
if(strcmpi(ch,"no")==0)
{
cout<<"\nProcessing";
for(int i=0;i<6;i++)
{
delay(200);
cout<<".";
}
}
else if(strcmpi(ch,"yes")==0)
{
cout<<"\nSorry you are not eligible for blood donation ";
cout<<"\nReturning to main menu";
for(int i=0;i<6;i++)
{
delay(200);
cout<<".";
}
clrscr();
ret=1;
goto pq;
}
else
{
cout<<"\nInvalid entry ";
cout<<"\nPlease enter again ";
goto m;
}
}
delay(2000);
textcolor(YELLOW);
delay(1000);
cout<<"\n\n(2)The blood bank shall not accept blood from a person suffering from any of the under mentioned disease : ";
cout<<"\na. Cancer\nb. Heart disease\nc. Abnormal bleeding tendencies";
cout<<"\nd. Unexplained weight lossarrow-10x10.png\ne. Diabetes-controlled on Insulin";
cout<<"\nf. Hepatitis infection\ng. Chronic nephritis";
cout<<"\nh. Signs and symptoms, suggestive of AIDS\ni. Liver disease";
cout<<"\nj. Tuberculosis \nk. Polycythemia Vera \nl. Asthma ";
cout<<"\nm. Epilepsy\nn. Leprosy\no. Schizophrenia\np. Endocrine disorders";
mm:
cout<<"\n\nIs the donor affected by any of the above mentioned diseases? (yes or no) ";
gets(ch);
{
if(strcmpi(ch,"no")==0)
{
cout<<"\nProcessing";
for(int i=0;i<6;i++)
{
delay(200);
cout<<".";
}
}
else if(strcmpi(ch,"yes")==0)
{
cout<<"\nSorry you are not eligible for blood donation ";
cout<<"\nReturning to main menu";
for(int i=0;i<6;i++)
{
delay(200);
cout<<".";
}
clrscr();
ret=1;
goto pq;
}
else
{
cout<<"\nInvalid entry ";
cout<<"\nPlease enter again ";
goto mm;
}
}
clrscr();
pq:
return ret;
}
void DONOR::getit(int rno)
{
donval=0;
cout<<"\n****Enter the details****";
cout<<"\nReg.No "<<rno;
cout<<"\n\nName ";
gets(name1);
cout<<"\nNationality ";
gets(place1);
lq:
cout<<"\nAge (18-60)";
cin>>age1;
if(age1<=18||age1>=60)
{
cout<<"\nInvalid Entry ";
cout<<"\nPlease enter again";
clrscr();
goto lq;
}

int ch;
lc:
int n;
cout<<"\n\n---------BLOOD GROUP----------";
cout<<"\n1.O+ \n2.O- \n3.A+ \n4.A- \n5.B+ \n6.B- \n7.AB";
cout<<"\n\n--Enter the STATUS(1-2-3-4-5-6-7)-- ";
cin>>ch;
switch(ch)
{
case 1:strcpy(blood1,"O+");
break;
case 2:strcpy(blood1,"O-");
break;
case 3:strcpy(blood1,"A+");
break;
case 4:strcpy(blood1,"A-");
break;
case 5:strcpy(blood1,"B+");
break;
case 6:strcpy(blood1,"B-");
break;
case 7:strcpy(blood1,"AB");
break;
default:{
cout<<"\n\nInvalidOPTIONarrow-10x10.png ";
cout<<"\nPlease enter again\n\n ";
textcolor(RED);
textbackground(BLACK);
getch();
clrscr();
goto lc;
}
}
cout<<"\nOccupation ";
gets(occupation1);
ld:
cout<<"\nWeight(in kgs) (Not less than 45kgs) ";
cin>>weight1;
if(weight1<45)
{
cout<<"\nInvalid Entry ";
cout<<"\nPlease enter again\n\n ";
textcolor(RED);
textbackground(BLACK);
getch();
clrscr();
goto ld;
}
le:
cout<<"\nPulse (50-90)";
cin>>pulse1;
if(pulse1<50||pulse1>90)
{
cout<<"\nPlease enter again\n\n ";
textcolor(RED);
textbackground(BLACK);
getch();
clrscr();
goto le;
}
lf:
cout<<"\nBlood Pressure Status(Normal or Abnormal) ";
gets(bp1);
if(strcmp(bp1,"Abnormal")==0)
{
cout<<"\nPlease enter again\n\n ";
textcolor(RED);
textbackground(BLACK);
getch();
clrscr();
goto lf;
}
}
void GROUPS::getit()
{
op=500,on=500,bp=500,bn=500,ap=500,an=500,ab=500;
}
void ACCEPTOR::getit()
{
int ch4;
cout<<"\nEnter the name of the acceptor : ";
gets(name2);
cout<<"\nFrom which hospital is the acceptor referred to us : ";
gets(hosp);
cout<<"\nEnter the bloodgroup of the acceptor : ";
lc:
cout<<"\n\n---------BLOOD GROUP----------";
cout<<"\n1.O+ \n2.O- \n3.A+ \n4.A- \n5.B+ \n6.B- \n7.AB";
cout<<"\n\n--(1-2-3-4-5-6-7)-- ";
cin>>ch4;
switch(ch4)
{
case 1:strcpy(blood2,"O+");
break;
case 2:strcpy(blood2,"O-");
break;
case 3:strcpy(blood2,"A+");
break;
case 4:strcpy(blood2,"A-");
break;
case 5:strcpy(blood2,"B+");
break;
case 6:strcpy(blood2,"B-");
break;
case 7:strcpy(blood2,"AB");
break;
default:{
cout<<"\n\nInvalid Option ";
cout<<"\nPlease enter again\n\n ";
textcolor(RED);
textbackground(BLACK);
getch();
clrscr();
goto lc;
}
}
cout<<"\nHow much blood do you want???";
cin>>recval;
}
Jan 26, 2013 at 9:08pm
nikhil m (5)
void DONOR::putit()
{
cout<<"\n---- File Display ----\n\n";
cout<<"Registration Number ";
cout<<rno;
cout<<"\n\nName : ";
puts(name1);
cout<<"\n\nNationality : ";
puts(place1);
cout<<"\n\nAge : ";
cout<<age1;
cout<<"\n\nBlood Group : ";
puts(blood1);
cout<<"\n\nOccupation : ";
puts(occupation1);
cout<<"\n\nWeight(in kgs) : ";
cout<<weight1;
cout<<"\n\nPulse : ";
cout<<pulse1;
cout<<"\n\nBlood Pressure Status : ";
puts(bp1);
cout<<"\nDonation made ";
cout<<donval;
cout<<"\n\n";
for(int i=0;i<=79;i++)
{
delay(10);
cout<<".";
}
getch();
}
void insaccpt()
{
ACCEPTOR i;
fstream accptfile;
accptfile.open("ACCEPTOR.dat",ios::out|ios::binary|ios::app);
i.getit();
accptfile.write((char*)&i,sizeof(i));
}
void insbldgrp()
{
fstream pfile;
pfile.open("BLOODGROUPS.dat",ios::binary|ios::app);
GROUPS p;
p.getit();
pfile.write((char*)&p,sizeof(p));
}
void Insertfile()
{
fstream pfile;
int i,n,pos;
DONOR p;
pfile.open("BLOODDONATION.dat",ios::binary|ios::out|ios::app);
cout<<"\nHow many donors to be added? ";
cin>>n;
for(i=1;i<=n;i++)
{
pos=pfile.tellg();
p.rno=(pos/sizeof(p))+1;
p.getit(p.rno);
pfile.write((char*)&p,sizeof(p));
}
pfile.close();
}
void shfn()
{
cout<<"\n\nReturning to --- DONOR MENU --- ";
for(int i=0;i<6;i++)
{
delay(100);
cout<<".";
}
}
void filedisplay()
{
ifstream pfile;
DONOR p;
pfile.open("BLOODDONATION.dat",ios::binary|ios::app);
while(pfile.read((char*)&p,sizeof(p)))
{
p.putit();
getch();
}
pfile.close();
}
void srchnm1()
{
ifstream pfile;
DONOR p;
char name[30];
pfile.open("BLOODDONATION.dat",ios::binary);
pfile.seekg(0);
cout<<"\nEnter the name to be searched : ";
gets(name);
while(pfile.read((char *)&p,sizeof(p)))
{
if(strcmpi(p.name1,name)==0)
{
cout<<"\nDisplaying the record(s) found : ";
p.putit();
}
pfile.close();
}
}
void srchbg1()
{
ifstream pfile;
DONOR p;
int ch;
char blood1[5];
pfile.open("BLOODDONATION.dat",ios::binary);
pfile.seekg(0);
cout<<"\nEnter the bloodgroup to be searched : ";
lc:
cout<<"\n\n---------BLOOD GROUP----------";
cout<<"\n1.O+ \n2.O- \n3.A+ \n4.A- \n5.B+ \n6.B- \n7.AB";
cout<<"\n\n--Enter the STATUS(1-2-3-4-5-6-7)-- ";
cin>>ch;
switch(ch)
{
case 1:strcpy(blood1,"O+");
break;
case 2:strcpy(blood1,"O-");
break;
case 3:strcpy(blood1,"A+");
break;
case 4:strcpy(blood1,"A-");
break;
case 5:strcpy(blood1,"B+");
break;
case 6:strcpy(blood1,"B-");
break;
case 7:strcpy(blood1,"AB");
break;
default:{
cout<<"\n\nInvalid Option ";
cout<<"\nPlease enter again\n\n ";
textcolor(RED);
textbackground(BLACK);
getch();
clrscr();
goto lc;
}
}

while(pfile.read((char *)&p,sizeof(p)))
{
if(strcmp(p.blood1,blood1)==0)
{
cout<<"\nDisplaying the record(s) found : ";
p.putit();
}
pfile.close();
}
}
void searchfile()
{
clrscr();
int ch;
do
{
cout<<"\n---- Search File ----";
cout<<"\n1.Search by Name ";
cout<<"\n2.Search by Blood Group ";
cout<<"\n3.Return to -- DONOR Menu -- ";
cin>>ch;
switch(ch)
{
case 1:srchnm1();
clrscr();
break;
case 2:srchbg1();
clrscr();
break;
case 3:break;
}
}while(ch==1 || ch==2);
}
void deletefile()
{
ifstream pfile;
ofstream tempfile;
DONOR s;
char ch[30];
pfile.open("BLOODDONATION.dat",ios::binary);
tempfile.open("Nashtemp.dat",ios::binary);
cout<<"\nEnter the Name of the donor whose details are to beDELETEDarrow-10x10.png : ";
gets(ch);
while(pfile.read((char*)&s,sizeof(s)))
{
if(strcmpi(ch,s.name1)!=0)
{
tempfile.write((char*)&s,sizeof(s));
}
}
pfile.close();
tempfile.close();
remove("BLOODDONATION.dat");
rename("Nashtemp.dat","BLOODDONATION.dat");
}
void modfile()
{
ifstream pfile;
ofstream tempfile;
DONOR s;
char ch[30];
int no;
pfile.open("BLOODDONATION.dat",ios::binary);
tempfile.open("Nashtemp.dat",ios::binary);
cout<<"\nEnter the registration number of the donor whose details : ";
cin>>no;
while(pfile.read((char*)&s,sizeof(s)))
{
if(s.rno<no)
{
tempfile.write((char*)&s,sizeof(s));
}
else
{
break;
}
}
cout<<"\nEnter the new details of the record to be inserted ";
s.getit(s.rno);
tempfile.write((char*)&s,sizeof(s));
pfile.seekg(0,ios::beg);
while(pfile.read((char*)&s,sizeof(s)))
{
if(s.rno>no)
{
tempfile.write((char*)&s,sizeof(s));
}
}
pfile.close();
tempfile.close();
remove("BLOODDONATION.dat");
rename("Nashtemp.dat","BLOODDONATION.dat");
}
void makdon()
{
fstream pfile;
ofstream mfile;
DONOR p;
GROUPS q;
int don;
char name[30];
pfile.open("BLOODDONATION.dat",ios::binary|ios::in|ios::out);
mfile.open("BLOODGROUPS.dat",ios::app);
cout<<"\nEnter the name to be searched : ";
gets(name);
while(pfile.read((char *)&p,sizeof(p)))
{
if(strcmpi(p.name1,name)==0)
{
p:
cout<<"\n\nHow much would you like to donate?? (10-100)cc ";
cin>>don;
if(don<10)
{
cout<<"\nSorry, Donation cannot be less than 10 cc.";
cout<<"\nPlease enter again ";
getch();
clrscr();
goto p;
}
else if(don>100)
{
cout<<"\nSorry, Donation cannot be more than 100 cc.";
cout<<"\nWe appreciate your helping mentality ";
cout<<"\nPlease enter again ";
getch();
clrscr();
goto p;
}
if(strcmp(p.blood1,"O+")==0)
{
q.op+=don;
mfile.write((char *)&q,sizeof(q));
}
if(strcmp(p.blood1,"O-")==0)
{
q.on+=don;
mfile.write((char *)&q,sizeof(q));
}
if(strcmp(p.blood1,"A+")==0)
{
q.ap+=don;
mfile.write((char *)&q,sizeof(q));
}
if(strcmp(p.blood1,"A-")==0)
{
q.an+=don;
mfile.write((char *)&q,sizeof(q));
}
if(strcmp(p.blood1,"B+")==0)
{
q.bp+=don;
mfile.write((char *)&q,sizeof(q));
}
if(strcmp(p.blood1,"B-")==0)
{
q.bn+=don;
mfile.write((char *)&q,sizeof(q));
}
if(strcmp(p.blood1,"AB")==0)
{
q.ab+=don;
mfile.write((char *)&q,sizeof(q));
}
}
p.donval+=don;
pfile.write((char*)&p,sizeof(p));
}
pfile.close();
mfile.close();
}

void avbld()
{
clrscr();
ifstream mfile;
mfile.open("BLOODGROUPS.dat");
GROUPS m;
mfile.read((char *)&m,sizeof(m));
cout<<"\n----- Available blood -----";
delay(100);
cout<<"\nBloodgroup "<<"\t"<<"Amount(in cc)";
delay(50);
cout<<"\n\n\n1. O+ "<<"\t "<<m.op;
cout<<"\n\n\n2. O- "<<"\t "<<m.on;
cout<<"\n\n\n3. A+ "<<"\t "<<m.ap;
cout<<"\n\n\n4. A- "<<"\t "<<m.an;
cout<<"\n\n\n5. B+ "<<"\t "<<m.bp;
cout<<"\n\n\n6. B- "<<"\t "<<m.bn;
cout<<"\n\n\n7. AB "<<"\t "<<m.ab;
getch();
mfile.close();
}
void accblddisp()
{
clrscr();
ifstream mfile;
mfile.open("BLOODGROUPS.dat");
GROUPS m;
mfile.read((char *)&m,sizeof(m));
cout<<"\n------------------------- Available blood -------------------------";
delay(100);
cout<<"\n\n\n No. Bloodgroup "<<"\t"<<"Amount available(in cc)"<<"\t Cost ";
delay(50);
cout<<"\n\n\n 1. O+ "<<"\t"<<" "<<m.op<<" "<<"\t 10$ ";
cout<<"\n\n\n 2. O- "<<"\t"<<" "<<m.on<<" "<<"\t 20$ ";
cout<<"\n\n\n 3. A+ "<<"\t"<<" "<<m.ap<<" "<<"\t 30$ ";
cout<<"\n\n\n 4. A- "<<"\t"<<" "<<m.an<<" "<<"\t 30$ ";
cout<<"\n\n\n 5. B+ "<<"\t"<<" "<<m.bp<<" "<<"\t 35$ ";
cout<<"\n\n\n 6. B- "<<"\t"<<" "<<m.bn<<" "<<"\t 30$ ";
cout<<"\n\n\n 7. AB "<<"\t"<<" "<<m.ab<<" "<<"\t 50$ ";
getch();
clrscr();
mfile.close();
}
int chaccpt()
{
ACCEPTOR i;
GROUPS p;
ifstream accptfile;
accptfile.open("ACCEPTOR.dat");
ifstream pfile;
pfile.open("BLOODGROUPS.dat");
accptfile.read((char*)&i,sizeof(i));
pfile.read((char*)&p,sizeof(p));
int ret;
cout<<"\n\n You want "<<i.recval<<" cc of blood ";
if(strcmp(i.blood2,"O+")==0)
{
if(i.recval>p.op)
{
ret=0;
}
else
{
ret=1;
}
}
if(strcmp(i.blood2,"O-")==0)
{
if(i.recval>p.on)
{
ret=0;
}
else
{
ret=1;
}
}
if(strcmp(i.blood2,"A+")==0)
{
if(i.recval>p.ap)
{
ret=0;
}
else
{
ret=1;
}
}
if(strcmp(i.blood2,"A-")==0)
{
if(i.recval>p.an)
{
ret=0;
}
else
{
ret=1;
}
}
if(strcmp(i.blood2,"B+")==0)
{
if(i.recval>p.bp)
{
ret=0;
}
else
{
ret=1;
}
}
if(strcmp(i.blood2,"B-")==0)
{
if(i.recval>p.bn)
{
ret=0;
}
else
{
ret=1;
}
}
if(strcmp(i.blood2,"AB")==0)
{
if(i.recval>p.ab)
{
ret=0;
}
else
{
ret=1;
}
}
if(ret==0)
{
cout<<"\n\nSorry!!!\nWe donot have suffecient blood to meet your requirements ";
cout<<"\n\nPlease contact some other blood bank ";
getch();
clrscr();
}
pfile.close();
fstream mfile;
mfile.open("BLOODGROUPS.dat",ios::binary|ios::app|ios::ate|ios::in|ios::out);
if(ret==1)
{
if(strcmp(i.blood2,"O+")==0)
{
p.op-=i.recval;
mfile<<p.op;
}
if(strcmp(i.blood2,"O-")==0)
{
p.on-=i.recval;
mfile<<p.on;
}
if(strcmp(i.blood2,"A+")==0)
{
p.ap-=i.recval;
mfile<<p.ap;
}
if(strcmp(i.blood2,"A-")==0)
{
p.an-=i.recval;
mfile<<p.an;
}
if(strcmp(i.blood2,"B+")==0)
{
p.bp-=i.recval;
mfile<<p.bp;
}
if(strcmp(i.blood2,"B-")==0)
{
p.bn-=i.recval;
mfile<<p.bn;
}
if(strcmp(i.blood2,"AB")==0)
{
p.ab-=i.recval;
mfile<<p.ab;
}
}
mfile.close();
accptfile.close();
clrscr();
return ret;
}
void prcpt()
{
clrscr();
int price;
ACCEPTOR p;
ifstream accptfile;
accptfile.open("ACCEPTOR.dat");
accptfile.read((char*)&p,sizeof(p));
cout<<"\n---- RECEIPT -----";
cout<<"\n\nName : ";
puts(p.name2);
cout<<"\nBlood Group : ";
puts(p.blood2);
cout<<"\nHospital referred from : ";
puts(p.hosp);
cout<<"\nAmount of blood wanted : ";
cout<<p.recval;
if(strcmp(p.blood2,"O+")==0)
{
price=p.recval*10;
}
if(strcmp(p.blood2,"O-")==0)
{
price=p.recval*20;
}
if(strcmp(p.blood2,"A+")==0)
{
price=p.recval*30;
}
if(strcmp(p.blood2,"A-")==0)
{
price=p.recval*30;
}
if(strcmp(p.blood2,"B+")==0)
{
price=p.recval*35;
}
if(strcmp(p.blood2,"B-")==0)
{
price=p.recval*30;
}
if(strcmp(p.blood2,"AB")==0)
{
price=p.recval*50;
}
cout<<"\n\nNet Price : ";
cout<<price;
getch();
clrscr();
}
void frontpage()
{
clrscr();
for(int li=10;li<71;li++)
{
gotoxy(li,15);
delay(30);
printf("\/");
}
for(li=70;li>=10;li--)
{
gotoxy(li,22);
delay(30);
printf("\\");
}
for(int lp=16;lp<=21;lp++)
{
gotoxy(10,lp);
delay(100);
printf("-");
}
for(lp=21;lp>=16;lp--)
{
gotoxy(70,lp);
delay(100);
printf("-");
}
gotoxy(12,17);
textcolor(BLINK + MAGENTA);
cprintf(" Welcome To LIFELINE Blood Bank Computer System ");
gotoxy(12,20);
cprintf(" Designed and Coded By Nash Technologies (C) 2012-13");
gotoxy(31,28);
textcolor(LIGHTGREEN);
cprintf("Programmed By");
gotoxy(30,31);
textcolor(11);
cprintf(" Nikhil And Christy ");
gotoxy(44,48);
textcolor(WHITE);
cprintf("Press Any Key To ..........Continue");
getch();

clrscr();
}
void pagedes()
{
for(int i=0;i<39;i++)
{
printf("*");
}
for(int p=39;p<80;p++)
{
printf("*");
}
for(i=0;i<31;i++)
{
cout<<"<";
}
textcolor(LIGHTGREEN);
cout<<" LIFELINE BLOOD BANK ";
for(i=0;i<30;i++)
{
cout<<">";
}
for(i=0;i<39;i++)
{
printf("*");
}
for(p=39;p<80;p++)
{
printf("*");
}
}
void main()
{
clrscr();
frontpage();
insbldgrp();
char status[30];
int ch,ch2,p,ret1;
textcolor(34);
textbackground(BLUE);
lb:
cout<<"\n\n\n";
for(int i=1; i<=79; i++) // This for loop prints '=' from 1st col to 79th
{ // column.
gotoxy(i,16);
cout<<"=";
gotoxy(i,1);
cout<<"=";
}
for(int j=1; j<=14; j++) // This for loop prints '|' from 1st row to 14th
{ // row.
gotoxy(1,j);
cout<<"|";
gotoxy(79,j);
cout<<"|";
}

textbackground(LIGHTRED);
textcolor(LIGHTGRAY);
gotoxy(2,3);
cout<<"<<<<<<<<<<<< ----- LIFELINE BLOOD BANK ----- >>>>>>>>>>>>";
gotoxy(2,5);
cout<<"\n|-------- MAIN MENU -------";
cout<<"\n\n\n|--------- STATUS ---------";
cout<<"\n|1.Donor ";
cout<<"\n|2.Acceptor ";
cout<<"\n|3.Exit ";
cout<<"\n\n|-Enter the STATUS(1-2)-- ";
cin>>ch;
switch(ch)
{
case 1:strcpy(status," Donor");
break;
case 2:strcpy(status," Acceptor");
break;
case 3:exit(0);
default:{
cout<<"\n\nInvalidOPTIONarrow-10x10.png ";
cout<<"\nPlease enter again\n\n ";
textcolor(RED);
textbackground(BLACK);
getch();
clrscr();
goto lb;
}

}
if(strcmp(status," Donor")==0)
{
p=doncrit();
if(p==1)
{
goto lb;
}
else
{
go1:
do
{
clrscr();
pagedes();
cout<<"\n\n---- DONOR MENU ----\n\n";
cout<<"\n1REGISTERarrow-10x10.png donor information ";
cout<<"\n2.Search for donor information";
cout<<"\n3.Modify donor details";
cout<<"\n4.Delete donor details";
cout<<"\n5.Display donor details";
cout<<"\n6.Make donation ";
cout<<"\n7.Display Blood Available";
cout<<"\n8.Return to MAIN MENU ";
cout<<"\n9.Exit ";
cout<<"\n\n\nWhat is your choice?(1-2-3-4-5-6-7-8-9)? ";
cin>>ch2;
switch(ch2)
{
case 1:Insertfile();
break;
case 2:searchfile();
break;
case 3:modfile();
break;
case 4:deletefile();
break;
case 5:filedisplay();
break;
case 6:makdon();
break;
case 7:avbld();
break;
case 8:clrscr();
goto lb;
case 9:exit(0);
default : {
cout<<"\nInvalid Entry ";
goto go1;
}
}
}while(ch2==1||ch2==5||ch2==3||ch2==4||ch2==2||ch2==6||ch2==7);

}
getch();
}
if(strcmp(status," Acceptor")==0)
{
clrscr();
int ch3,t;
do
{
clrscr();
pagedes();
cout<<"\n\n---- ACCEPTOR MENU -----";
cout<<"\n\n1.Blood Group Content Display and cost ";
cout<<"\n2.Insert and Check for Blood Availability ";
cout<<"\n3.Print Receipt ";
cout<<"\n4.Return to MAIN MENU ";
cout<<"\n5.Exit ";
cout<<"\nWhat is your choice???(1-2-3-4) ";
cin>>ch3;
switch(ch3)
{
case 1:accblddisp();
break;
case 2:{
insaccpt();
t=chaccpt();
if(t==0)
goto lb;
break;
}
case 3:{
prcpt();
break;
}
case 4:clrscr();
goto lb;
case 5:exit(0);
clrscr();
}
}
while(ch3==1||ch3==2||ch3==3);
}
}

Show transcribed image text
Expert Answer
Anonymous's Avatar
Anonymous answered thisWas this answer helpful?

0
1
61 answers
#include<iostream.h>

#include<dos.h>

#include<graphics.h>

#include<conio.h>

#include<fstream.h>

#include<iomanip.h>

#include<string.h>

#include<ctype.h>

#include<stdio.h>

#include<process.h>

class DONOR

{

int age1;

char occupation1[30],place1[30];

int weight1;

int pulse1;

char bp1[10];

public:

int rno,donval;

char name1[30],blood1[5];

void getit(int);

void putit();

};

class GROUPS

{

public:

int op,on,ap,an,bp,bn,ab;

void getit();

};

class ACCEPTOR

{

public:

int recval,rno;

char name2[30],blood2[5],hosp[20];

void getit();

};

int doncrit()

{

int ret=0;

char ch[5];

mn:

clrscr();

for(int i=0;i<=79;i++)

{

cout<<"!";

}

delay(100);

textcolor(BLINK + MAGENTA);

cout<<"\n\n----- HEALTH CRITERIA FOR BLOOD DONATION -----";

delay(1000);

textcolor(BLUE);

cout<<"\n\nConditions for donation of blood ";

delay(1000);

cout<<"\n\n(1)General : \nNo person shall donate blood more than once in three months";

cout<<"\nThe donor shall be in good health, mentally alert and physically fit and shall not be inmates of jail ";

cout<<"persons having multiple sex partners and drug-addicts";

cout<<"The donors should fulfill the following requirements, namely :- ";

cout<<"\n(a)The donor should be in the age group of 18 to 60 years ";

cout<<"\n(b)The donor should not be less than 45 kilograms ";

cout<<"\n(c)Temperature and Pulse of the donor should be normal ";

cout<<"\n(d)The systolic and diastolic blood pressures are within normal limits without medication";

cout<<"\n(e)Haemoglobin of the donor should not be less than 12.5 grams";

cout<<"\n(f)The donor should be free from acute respiratory diseases";

cout<<"\n(g)The donor should be free from any skin diseases at the site of phlebotomy ";

cout<<"\n(h)The donor should be free from any disease transmissible by blood transfusion, insofar as can be determined by history and examination indicated above ";

cout<<"\n(i)The arms and forearms of the donor should be free from skin punctures and scars indicative of professional blood donors ";

cout<<"\n(j)The donor should be free from addiction to self injected narcotics ";

m:

cout<<"\n\nIs the donor violating any of the above mentioned conditions?(yes or no) ";

gets(ch);

{

if(strcmpi(ch,"no")==0)

{

cout<<"\nProcessing";

for(int i=0;i<6;i++)

{

delay(200);

cout<<".";

}

}

else if(strcmpi(ch,"yes")==0)

{

cout<<"\nSorry you are not eligible for blood donation ";

cout<<"\nReturning to main menu";

for(int i=0;i<6;i++)

{

delay(200);

cout<<".";

}

clrscr();

ret=1;

goto pq;

}

else

{

cout<<"\nInvalid entry ";

cout<<"\nPlease enter again ";

goto m;

}

}

delay(2000);

textcolor(YELLOW);

delay(1000);

cout<<"\n\n(2)The blood bank shall not accept blood from a person suffering from any of the under mentioned disease : ";

cout<<"\na. Cancer\nb. Heart disease\nc. Abnormal bleeding tendencies";

cout<<"\nd. Unexplained weight loss\ne. Diabetes-controlled on Insulin";

cout<<"\nf. Hepatitis infection\ng. Chronic nephritis";

cout<<"\nh. Signs and symptoms, suggestive of AIDS\ni. Liver disease";

cout<<"\nj. Tuberculosis \nk. Polycythemia Vera \nl. Asthma ";

cout<<"\nm. Epilepsy\nn. Leprosy\no. Schizophrenia\np. Endocrine disorders";

mm:

cout<<"\n\nIs the donor affected by any of the above mentioned diseases? (yes or no) ";

gets(ch);

{

if(strcmpi(ch,"no")==0)

{

cout<<"\nProcessing";

for(int i=0;i<6;i++)

{

delay(200);

cout<<".";

}

}

else if(strcmpi(ch,"yes")==0)

{

cout<<"\nSorry you are not eligible for blood donation ";

cout<<"\nReturning to main menu";

for(int i=0;i<6;i++)

{

delay(200);

cout<<".";

}

clrscr();

ret=1;

goto pq;

}

else

{

cout<<"\nInvalid entry ";

cout<<"\nPlease enter again ";

goto mm;

}

}

clrscr();

pq:

return ret;

}

void DONOR::getit(int rno)

{

donval=0;

cout<<"\n****Enter the details****";

cout<<"\nReg.No "<<rno;

cout<<"\n\nName ";

gets(name1);

cout<<"\nNationality ";

gets(place1);

lq:

cout<<"\nAge (18-60)";

cin>>age1;

if(age1<=18||age1>=60)

{

cout<<"\nInvalid Entry ";

cout<<"\nPlease enter again";

clrscr();

goto lq;

}

int ch;

lc:

int n;

cout<<"\n\n---------BLOOD GROUP----------";

cout<<"\n1.O+ \n2.O- \n3.A+ \n4.A- \n5.B+ \n6.B- \n7.AB";

cout<<"\n\n--Enter the STATUS(1-2-3-4-5-6-7)-- ";

cin>>ch;

switch(ch)

{

case 1:strcpy(blood1,"O+");

break;

case 2:strcpy(blood1,"O-");

break;

case 3:strcpy(blood1,"A+");

break;

case 4:strcpy(blood1,"A-");

break;

case 5:strcpy(blood1,"B+");

break;

case 6:strcpy(blood1,"B-");

break;

case 7:strcpy(blood1,"AB");

break;

default:{

cout<<"\n\nInvalid Option ";

cout<<"\nPlease enter again\n\n ";

textcolor(RED);

textbackground(BLACK);

getch();

clrscr();

goto lc;

}

}

cout<<"\nOccupation ";

gets(occupation1);

ld:

cout<<"\nWeight(in kgs) (Not less than 45kgs) ";

cin>>weight1;

if(weight1<45)

{

cout<<"\nInvalid Entry ";

cout<<"\nPlease enter again\n\n ";

textcolor(RED);

textbackground(BLACK);

getch();

clrscr();

goto ld;

}

le:

cout<<"\nPulse (50-90)";

cin>>pulse1;

if(pulse1<50||pulse1>90)

{

cout<<"\nPlease enter again\n\n ";

textcolor(RED);

textbackground(BLACK);

getch();

clrscr();

goto le;

}

lf:

cout<<"\nBlood Pressure Status(Normal or Abnormal) ";

gets(bp1);

if(strcmp(bp1,"Abnormal")==0)

{

cout<<"\nPlease enter again\n\n ";

textcolor(RED);

textbackground(BLACK);

getch();

clrscr();

goto lf;

}

}

void GROUPS::getit()

{

op=500,on=500,bp=500,bn=500,ap=500,an=500,ab=500;

}

void ACCEPTOR::getit()

{

int ch4;

cout<<"\nEnter the name of the acceptor : ";

gets(name2);

cout<<"\nFrom which hospital is the acceptor referred to us : ";

gets(hosp);

cout<<"\nEnter the bloodgroup of the acceptor : ";

lc:

cout<<"\n\n---------BLOOD GROUP----------";

cout<<"\n1.O+ \n2.O- \n3.A+ \n4.A- \n5.B+ \n6.B- \n7.AB";

cout<<"\n\n--(1-2-3-4-5-6-7)-- ";

cin>>ch4;

switch(ch4)

{

case 1:strcpy(blood2,"O+");

break;

case 2:strcpy(blood2,"O-");

break;

case 3:strcpy(blood2,"A+");

break;

case 4:strcpy(blood2,"A-");

break;

case 5:strcpy(blood2,"B+");

break;

case 6:strcpy(blood2,"B-");

break;

case 7:strcpy(blood2,"AB");

break;

default:{

cout<<"\n\nInvalid Option ";

cout<<"\nPlease enter again\n\n ";

textcolor(RED);

textbackground(BLACK);

getch();

clrscr();

goto lc;

}

}

cout<<"\nHow much blood do you want???";

cin>>recval;

}

void DONOR::putit()

{

cout<<"\n---- File Display ----\n\n";

cout<<"Registration Number ";

cout<<rno;

cout<<"\n\nName : ";

puts(name1);

cout<<"\n\nNationality : ";

puts(place1);

cout<<"\n\nAge : ";

cout<<age1;

cout<<"\n\nBlood Group : ";

puts(blood1);

cout<<"\n\nOccupation : ";

puts(occupation1);

cout<<"\n\nWeight(in kgs) : ";

cout<<weight1;

cout<<"\n\nPulse : ";

cout<<pulse1;

cout<<"\n\nBlood Pressure Status : ";

puts(bp1);

cout<<"\nDonation made ";

cout<<donval;

cout<<"\n\n";

for(int i=0;i<=79;i++)

{

delay(10);

cout<<".";

}

getch();

}

void insaccpt()

{

ACCEPTOR i;

fstream accptfile;

accptfile.open("ACCEPTOR.dat",ios::out);

i.getit();

accptfile.write((char*)&i,sizeof(i));

}

void insbldgrp()

{

fstream pfile;

pfile.open("BLOODGROUPS.dat",ios::binary|ios::app);

GROUPS p;

p.getit();

pfile.write((char*)&p,sizeof(p));

}

void Insertfile()

{

fstream pfile;

int i,n,pos;

DONOR p;

pfile.open("BLOODDONATION.dat",ios::binary|ios::out);

cout<<"\nHow many donors to be added? ";

cin>>n;

for(i=1;i<=n;i++)

{

pos=pfile.tellg();

p.rno=(pos/sizeof(p))+1;

p.getit(p.rno);

pfile.write((char*)&p,sizeof(p));

}

pfile.close();

}

void shfn()

{

cout<<"\n\nReturning to --- DONOR MENU --- ";

for(int i=0;i<6;i++)

{

delay(100);

cout<<".";

}

}

void filedisplay()

{

ifstream pfile;

DONOR p;

pfile.open("BLOODDONATION.dat",ios::binary);

while(pfile.read((char*)&p,sizeof(p)))

{

p.putit();

getch();

}

pfile.close();

}

void srchnm1()

{

ifstream pfile;

DONOR p;

char name[30];

pfile.open("BLOODDONATION.dat",ios::binary);

cout<<"\nEnter the name to be searched : ";

gets(name);

while(pfile.read((char *)&p,sizeof(p)))

{

if(strcmpi(p.name1,name)==0)

{

cout<<"\nDisplaying the record(s) found : ";

p.putit();

}

pfile.close();

}

}

void srchbg1()

{

ifstream pfile;

DONOR p;

int ch;

char blood1[5];

pfile.open("BLOODDONATION.dat",ios::binary);

cout<<"\nEnter the bloodgroup to be searched : ";

lc:

cout<<"\n\n---------BLOOD GROUP----------";

cout<<"\n1.O+ \n2.O- \n3.A+ \n4.A- \n5.B+ \n6.B- \n7.AB";

cout<<"\n\n--Enter the STATUS(1-2-3-4-5-6-7)-- ";

cin>>ch;

switch(ch)

{

case 1:strcpy(blood1,"O+");

break;

case 2:strcpy(blood1,"O-");

break;

case 3:strcpy(blood1,"A+");

break;

case 4:strcpy(blood1,"A-");

break;

case 5:strcpy(blood1,"B+");

break;

case 6:strcpy(blood1,"B-");

break;

case 7:strcpy(blood1,"AB");

break;

default:{

cout<<"\n\nInvalid Option ";

cout<<"\nPlease enter again\n\n ";

textcolor(RED);

textbackground(BLACK);

getch();

clrscr();

goto lc;

}

}

while(pfile.read((char *)&p,sizeof(p)))

{

if(strcmp(p.blood1,blood1)==0)

{

cout<<"\nDisplaying the record(s) found : ";

p.putit();

}

pfile.close();

}

}

void searchfile()

{

clrscr();

int ch;

do

{

cout<<"\n---- Search File ----";

cout<<"\n1.Search by Name ";

cout<<"\n2.Search by Blood Group ";

cout<<"\n3.Return to -- DONOR Menu -- ";

cin>>ch;

switch(ch)

{

case 1:srchnm1();

clrscr();

break;

case 2:srchbg1();

clrscr();

break;

case 3:break;

}

}while(ch==1 || ch==2);

}

void deletefile()

{

ifstream pfile;

ofstream tempfile;

DONOR s;

char ch[30];

pfile.open("BLOODDONATION.dat",ios::binary);

tempfile.open("Nashtemp.dat",ios::binary);

cout<<"\nEnter the Name of the donor whose details are to be deleted : ";

gets(ch);

while(pfile.read((char*)&s,sizeof(s)))

{

if(strcmpi(ch,s.name1)!=0)

{

tempfile.write((char*)&s,sizeof(s));

}

}

pfile.close();

tempfile.close();

remove("BLOODDONATION.dat");

rename("Nashtemp.dat","BLOODDONATION.dat");

}

void modfile()

{

ifstream pfile;

ofstream tempfile;

DONOR s;

char ch[30];

int no;

pfile.open("BLOODDONATION.dat",ios::binary);

tempfile.open("Nashtemp.dat",ios::binary);

cout<<"\nEnter the registration number of the donor whose details : ";

cin>>no;

while(pfile.read((char*)&s,sizeof(s)))

{

if(s.rno<no)

{

tempfile.write((char*)&s,sizeof(s));

}

else

{

break;

}

}

cout<<"\nEnter the new details of the record to be inserted ";

s.getit(s.rno);

tempfile.write((char*)&s,sizeof(s));

pfile.seekg(0,ios::beg);

while(pfile.read((char*)&s,sizeof(s)))

{

if(s.rno>no)

{

tempfile.write((char*)&s,sizeof(s));

}

}

pfile.close();

tempfile.close();

remove("BLOODDONATION.dat");

rename("Nashtemp.dat","BLOODDONATION.dat");

}

void makdon()

{

fstream pfile;

ofstream mfile;

DONOR p;

GROUPS q;

int don;

char name[30];

pfile.open("BLOODDONATION.dat",ios::binary|ios::in|ios::out);

mfile.open("BLOODGROUPS.dat",ios::app);

cout<<"\nEnter the name to be searched : ";

gets(name);

while(pfile.read((char *)&p,sizeof(p)))

{

if(strcmpi(p.name1,name)==0)

{

p:

cout<<"\n\nHow much would you like to donate?? (10-100)cc ";

cin>>don;

if(don<10)

{

cout<<"\nSorry, Donation cannot be less than 10 cc.";

cout<<"\nPlease enter again ";

getch();

clrscr();

goto p;

}

else if(don>100)

{

cout<<"\nSorry, Donation cannot be more than 100 cc.";

cout<<"\nWe appreciate your helping mentality ";

cout<<"\nPlease enter again ";

getch();

clrscr();

goto p;

}

if(strcmp(p.blood1,"O+")==0)

{

q.op+=don;

mfile.write((char *)&q,sizeof(q));

}

if(strcmp(p.blood1,"O-")==0)

{

q.on+=don;

mfile.write((char *)&q,sizeof(q));

}

if(strcmp(p.blood1,"A+")==0)

{

q.ap+=don;

mfile.write((char *)&q,sizeof(q));

}

if(strcmp(p.blood1,"A-")==0)

{

q.an+=don;

mfile.write((char *)&q,sizeof(q));

}

if(strcmp(p.blood1,"B+")==0)

{

q.bp+=don;

mfile.write((char *)&q,sizeof(q));

}

if(strcmp(p.blood1,"B-")==0)

{

q.bn+=don;

mfile.write((char *)&q,sizeof(q));

}

if(strcmp(p.blood1,"AB")==0)

{

q.ab+=don;

mfile.write((char *)&q,sizeof(q));

}

}

p.donval+=don;

pfile.write((char*)&p,sizeof(p));

}

pfile.close();

mfile.close();

}

void avbld()

{

clrscr();

ifstream mfile;

mfile.open("BLOODGROUPS.dat");

GROUPS m;

mfile.read((char *)&m,sizeof(m));

cout<<"\n----- Available blood -----";

delay(100);

cout<<"\nBloodgroup "<<"\t"<<"Amount(in cc)";

delay(50);

cout<<"\n\n\n1. O+ "<<"\t "<<m.op;

cout<<"\n\n\n2. O- "<<"\t "<<m.on;

cout<<"\n\n\n3. A+ "<<"\t "<<m.ap;

cout<<"\n\n\n4. A- "<<"\t "<<m.an;

cout<<"\n\n\n5. B+ "<<"\t "<<m.bp;

cout<<"\n\n\n6. B- "<<"\t "<<m.bn;

cout<<"\n\n\n7. AB "<<"\t "<<m.ab;

getch();

mfile.close();

}

void accblddisp()

{

clrscr();

ifstream mfile;

mfile.open("BLOODGROUPS.dat");

GROUPS m;

mfile.read((char *)&m,sizeof(m));

cout<<"\n------------------------- Available blood -------------------------";

delay(100);

cout<<"\n\n\n No. Bloodgroup "<<"\t"<<"Amount available(in cc)"<<"\t Cost ";

delay(50);

cout<<"\n\n\n 1. O+ "<<"\t"<<" "<<m.op<<" "<<"\t 10$ ";

cout<<"\n\n\n 2. O- "<<"\t"<<" "<<m.on<<" "<<"\t 20$ ";

cout<<"\n\n\n 3. A+ "<<"\t"<<" "<<m.ap<<" "<<"\t 30$ ";

cout<<"\n\n\n 4. A- "<<"\t"<<" "<<m.an<<" "<<"\t 30$ ";

cout<<"\n\n\n 5. B+ "<<"\t"<<" "<<m.bp<<" "<<"\t 35$ ";

cout<<"\n\n\n 6. B- "<<"\t"<<" "<<m.bn<<" "<<"\t 30$ ";

cout<<"\n\n\n 7. AB "<<"\t"<<" "<<m.ab<<" "<<"\t 50$ ";

getch();

clrscr();

mfile.close();

}

int chaccpt()

{

ACCEPTOR i;

GROUPS p;

ifstream accptfile;

accptfile.open("ACCEPTOR.dat");

ifstream pfile;

pfile.open("BLOODGROUPS.dat");

accptfile.read((char*)&i,sizeof(i));

pfile.read((char*)&p,sizeof(p));

int ret;

cout<<"\n\n You want "<<i.recval<<" cc of blood ";

if(strcmp(i.blood2,"O+")==0)

{

if(i.recval>p.op)

{

ret=0;

}

else

{

ret=1;

}

}

if(strcmp(i.blood2,"O-")==0)

{

if(i.recval>p.on)

{

ret=0;

}

else

{

ret=1;

}

}

if(strcmp(i.blood2,"A+")==0)

{

if(i.recval>p.ap)

{

ret=0;

}

else

{

ret=1;

}

}

if(strcmp(i.blood2,"A-")==0)

{

if(i.recval>p.an)

{

ret=0;

}

else

{

ret=1;

}

}

if(strcmp(i.blood2,"B+")==0)

{

if(i.recval>p.bp)

{

ret=0;

}

else

{

ret=1;

}

}

if(strcmp(i.blood2,"B-")==0)

{

if(i.recval>p.bn)

{

ret=0;

}

else

{

ret=1;

}

}

if(strcmp(i.blood2,"AB")==0)

{

if(i.recval>p.ab)

{

ret=0;

}

else

{

ret=1;

}

}

if(ret==0)

{

cout<<"\n\nSorry!!!\nWe donot have suffecient blood to meet your requirements ";

cout<<"\n\nPlease contact some other blood bank ";

getch();

clrscr();

}

pfile.close();

fstream mfile;

mfile.open("BLOODGROUPS.dat",ios::binary|ios::app|ios::ate|ios::in|ios::out);

if(ret==1)

{

if(strcmp(i.blood2,"O+")==0)

{

p.op-=i.recval;

mfile<<p.op;

}

if(strcmp(i.blood2,"O-")==0)

{

p.on-=i.recval;

mfile<<p.on;

}

if(strcmp(i.blood2,"A+")==0)

{

p.ap-=i.recval;

mfile<<p.ap;

}

if(strcmp(i.blood2,"A-")==0)

{

p.an-=i.recval;

mfile<<p.an;

}

if(strcmp(i.blood2,"B+")==0)

{

p.bp-=i.recval;

mfile<<p.bp;

}

if(strcmp(i.blood2,"B-")==0)

{

p.bn-=i.recval;

mfile<<p.bn;

}

if(strcmp(i.blood2,"AB")==0)

{

p.ab-=i.recval;

mfile<<p.ab;

}

}

mfile.close();

accptfile.close();

clrscr();

return ret;

}

void prcpt()

{

clrscr();

int price;

ACCEPTOR p;

ifstream accptfile;

accptfile.open("ACCEPTOR.dat");

accptfile.read((char*)&p,sizeof(p));

cout<<"\n---- RECEIPT -----";

cout<<"\n\nName : ";

puts(p.name2);

cout<<"\nBlood Group : ";

puts(p.blood2);

cout<<"\nHospital referred from : ";

puts(p.hosp);

cout<<"\nAmount of blood wanted : ";

cout<<p.recval;

if(strcmp(p.blood2,"O+")==0)

{

price=p.recval*10;

}

if(strcmp(p.blood2,"O-")==0)

{

price=p.recval*20;

}

if(strcmp(p.blood2,"A+")==0)

{

price=p.recval*30;

}

if(strcmp(p.blood2,"A-")==0)

{

price=p.recval*30;

}

if(strcmp(p.blood2,"B+")==0)

{

price=p.recval*35;

}

if(strcmp(p.blood2,"B-")==0)

{

price=p.recval*30;

}

if(strcmp(p.blood2,"AB")==0)

{

price=p.recval*50;

}

cout<<"\n\nNet Price : ";

cout<<price;

getch();

clrscr();

}

void frontpage()

{

clrscr();

for(int li=10;li<71;li++)

{

gotoxy(li,15);

delay(30);

printf("\/");

}

for(li=70;li>=10;li--)

{

gotoxy(li,22);

delay(30);

printf("\\");

}

for(int lp=16;lp<=21;lp++)

{

gotoxy(10,lp);

delay(100);

printf("-");

}

for(lp=21;lp>=16;lp--)

{

gotoxy(70,lp);

delay(100);

printf("-");

}

gotoxy(12,17);

textcolor(BLINK + MAGENTA);

cprintf(" Welcome To LIFELINE Blood Bank Computer System ");

gotoxy(12,20);

cprintf(" Designed and Coded By Nash Technologies (C) 2012-13");

gotoxy(31,28);

textcolor(LIGHTGREEN);

cprintf("Programmed By");

gotoxy(30,31);

textcolor(11);

cprintf(" Nikhil And Christy ");

gotoxy(44,48);

textcolor(WHITE);

cprintf("Press Any Key To ..........Continue");

getch();

clrscr();

}

void pagedes()

{

for(int i=0;i<39;i++)

{

printf("*");

}

for(int p=39;p<80;p++)

{

printf("*");

}

for(i=0;i<31;i++)

{

cout<<"<";

}

textcolor(LIGHTGREEN);

cout<<" LIFELINE BLOOD BANK ";

for(i=0;i<30;i++)

{

cout<<">";

}

for(i=0;i<39;i++)

{

printf("*");

}

for(p=39;p<80;p++)

{

printf("*");

}

}

void main()

{

clrscr();

frontpage();

insbldgrp();

char status[30];

int ch,ch2,p,ret1;

textcolor(34);

textbackground(BLUE);

lb:

cout<<"\n\n\n";

for(int i=1; i<=79; i++) // This for loop prints '=' from 1st col to 79th

{ // column.

gotoxy(i,16);

cout<<"=";

gotoxy(i,1);

cout<<"=";

}

for(int j=1; j<=14; j++) // This for loop prints '|' from 1st row to 14th

{ // row.

gotoxy(1,j);

cout<<"|";

gotoxy(79,j);

cout<<"|";

}

textbackground(LIGHTRED);

textcolor(LIGHTGRAY);

gotoxy(2,3);

cout<<"<<<<<<<<<<<< ----- LIFELINE BLOOD BANK ----- >>>>>>>>>>>>";

gotoxy(2,5);

cout<<"\n|-------- MAIN MENU -------";

cout<<"\n\n\n|--------- STATUS ---------";

cout<<"\n|1.Donor ";

cout<<"\n|2.Acceptor ";

cout<<"\n|3.Exit ";

cout<<"\n\n|-Enter the STATUS(1-2)-- ";

cin>>ch;

switch(ch)

{

case 1:strcpy(status," Donor");

break;

case 2:strcpy(status," Acceptor");

break;

case 3:exit(0);

default:{

cout<<"\n\nInvalid Option ";

cout<<"\nPlease enter again\n\n ";

textcolor(RED);

textbackground(BLACK);

getch();

clrscr();

goto lb;

}

}

if(strcmp(status," Donor")==0)

{

p=doncrit();

if(p==1)

{

goto lb;

}

else

{

go1:

do

{

clrscr();

pagedes();

cout<<"\n\n---- DONOR MENU ----\n\n";

cout<<"\n1.Register donor information ";

cout<<"\n2.Search for donor information";

cout<<"\n3.Modify donor details";

cout<<"\n4.Delete donor details";

cout<<"\n5.Display donor details";

cout<<"\n6.Make donation ";

cout<<"\n7.Display Blood Available";

cout<<"\n8.Return to MAIN MENU ";

cout<<"\n9.Exit ";

cout<<"\n\n\nWhat is your choice?(1-2-3-4-5-6-7-8-9)? ";

cin>>ch2;

switch(ch2)

{

case 1:Insertfile();

break;

case 2:searchfile();

break;

case 3:modfile();

break;

case 4:deletefile();

break;

case 5:filedisplay();

break;

case 6:makdon();

break;

case 7:avbld();

break;

case 8:clrscr();

goto lb;

case 9:exit(0);

default : {

cout<<"\nInvalid Entry ";

goto go1;

}

}

}while(ch2==1||ch2==5||ch2==3||ch2==4||ch2==2||ch2==6||ch2==7);

}

getch();

}

if(strcmp(status," Acceptor")==0)

{

clrscr();

int ch3,t;

do

{

clrscr();

pagedes();

cout<<"\n\n---- ACCEPTOR MENU -----";

cout<<"\n\n1.Blood Group Content Display and cost ";

cout<<"\n2.Insert and Check for Blood Availability ";

cout<<"\n3.Print Receipt ";

cout<<"\n4.Return to MAIN MENU ";

cout<<"\n5.Exit ";

cout<<"\nWhat is your choice???(1-2-3-4) ";

cin>>ch3;

switch(ch3)

{

case 1:accblddisp();

break;

case 2:{

insaccpt();

t=chaccpt();

if(t==0)

goto lb;

break;

}

case 3:{

prcpt();

break;

}

case 4:clrscr();

goto lb;

case 5:exit(0);

clrscr();

}

}

while(ch3==1||ch3==2||ch3==3);

}

}