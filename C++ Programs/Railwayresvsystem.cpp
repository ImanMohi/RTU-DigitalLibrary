#include
#include
#include 
#include
#include 
#include 
#include
#include

char f[10]="f"; 
char s[10]="s"; 
int addr,ad,flag,f1,d,m,i,amt; 
float tamt; 
class login 
{
public:
char id[100]; 
char pass[100]; 
char *password;
void getid()

{ cout< <"Enter your id:";gets(id);
password=getpass("Enter the password:"); 
strcpy(pass,password); }

void displayid()
{ cout<<"Id:";puts(id);
cout<<"Password:";puts(pass);
} };

class detail
{ 
public:
int tno; 
char tname[100];

char bp[100];
char dest[100]; 
int c1,c1fare; 
int c2,c2fare; 
int d,m,y;
void getdetail()

{ cout<<"Enter the details as follows\n";
cout<<"Train no:";cin>>tno; cout< <"Train name:";
gets(tname); cout<<"Boarding point:";gets(bp); 
cout<<"Destination pt:";gets(dest); 
cout<<"No of seats in first class & fare per ticket:"; 
cin>>c1>>c1fare; 
cout< <"No of seats in second class & fare per ticket:"; 
cin>>c2>>c2fare; 
cout< <"Date of travel:";cin>>d>>m>>y;
}
void displaydetail() 
{ 
cout< >tno; 
cout< <"Train name:";gets(tname); 
cout<<"Boarding point:";gets(bp); 
cout<<"Destination pt:";gets(dest);
cout<<"No of seats required:";
cin>>nosr;
for(i=0;i>age[i];
}
cout< <"Enter the class f-first class s-second class:"; 
gets(clas); 
cout<<"Date of travel:";
cin>>d>>m>>y; 
cout< <"Enter the concession category\n"; 
cout<<"1.Military\n2.Senior citizen\n"; 
cout<<"3.Children below 5 yrs\n4.None\n";
cin>>con; 
cout< <"............END OF GETTING DETAILS............\n"; 
}
void displayresdet() 
{
cout<<"...............................................\n"; 
cout<<"...............................................\n"; 
cout<<"Pnr no:"<>pnr; 
cout< <"Date of cancellation:";
cin>>d>>m>>y; 
cout< <"...........END OF GETTING DETAILS...........\n"; }

void displaycancdet() 
{ 
cout<<"...........................................\n"; 
cout<<"...........................................\n"; 
cout<<"Pnr no:"<>ch; 
cout< >ch;

cout< >c; 
}
while(c=='y'); 
f.close();
break;
case 2:
f.open("t.txt",ios::in|ios::out|ios::binary|ios::app); 
a.getdetail(); 
f.write((char *) & a,sizeof(a)); 
f.close(); 
break;

case 3:
f.open("t.txt",ios::in|ios::out|ios::binary|ios::app); 
f.seekg(0); 
while(f.read((char *) & a,sizeof(a))) { a.displaydetail();
} 
f.close();
break;

case 4:
manage(); 
break;

case 5: 
displaypassdetail(); 
break; 
} 
}
while(ch< =5);

f.close(); 
} 
h: 
}
void reserve() 
{ 
int ch; 
do 
{ 
cout<<"1.Reserve\n2.Return to the main menu\n";
cout<<"Enter your choice:"; 
cin>>ch; 
cout< =b.nosr
)

{
amt=a.c1fare; 
addr=f1.tellg(); 
ad=sizeof(a.c1); 
f1.seekp(addr-(7*ad));
a.c1=a.c1-b.nosr; 
f1.write((char *) & a.c1,sizeof(a.c1));

if(b.con==1) 
{ 
cout< <"Concession category:MILITARY PERSONNEL\n";
b.amc=b.nosr*((amt*50)/100); 
}
else if(b.con==2) 
{
cout<<"Concession category:SENIOR CITIZEN\n"; 
b.amc=b.nosr*((amt*60)/100); 
}
else if(b.con==3) 
{ 
cout<<"Concession category:CHILDERN BELOW FIVE\n"; 
b.amc=0.0;
}
else if(b.con==4) { 
cout<<"You cannot get any concession\n"; 
b.amc=b.nosr*amt; 
}
srand((unsigned) time(&t));
b.pnr=rand(); 
f2.write((char *) & b,sizeof(b));
b.displayresdet();
cout<<"------------------------------------------------------\n";
cout<<"--------------Your ticket is reserved-----------\n";
cout<<"-----------------End of reservation menu-------\n"; } 
else { 
cout<<"**********Sorry req seats not available********\n"; }
}

else if(strcmp(b.clas,s)==0) 
{ 
if(a.c2>=b.nosr) 
{ amt=a.c2fare;
addr=f1.tellg(); 
ad=sizeof(a.c2); 
f1.seekp(addr-(5*ad));
a.c2=a.c2-b.nosr; 
f1.write((char *) & a.c2,sizeof(a.c2));
if(b.con==1) 
{ 
cout< <"Concession category:MILITARY PRESONNEL\n";
b.amc=b.nosr*((amt*50)/100); 
}

else if(b.con==2) 
{ 
cout<<"Concession category:SENIOR CITIZEN\n";
b.amc=b.nosr*((amt*60)/100); 
} 
else if(b.con==3) 
{ 
cout<<"Concession category:CHILDERN BELOW FIVE\n";
b.amc=0.0; 
} 
else if(b.con==4) 
{ 
cout<<"You cannot get any concession\n";
b.amc=b.nosr*amt; } f2.write((char *) & b,sizeof(b)); 
b.displayresdet();
cout<<"---------------------------------------\n"; 
cout<<"--------Your ticket is reserved--------\n";
cout<<"------------End of reservation---------\n";
}

else

{ cout<<"********Sorry req no of seats not available*******\n"; }
}
{
cout<<"********Sorry req no of seats not available*******\n"; } 
} 
getch(); 
goto h; 
} 
else 
{ flag=0; }
} 
if(flag==0) 
{ cout<<"............Wrong train no......................\n";
cout<<"......Enter the train no from the data base.....\n";
}

f1.close(); 
f2.close();
getch(); 
h:
}

void displaypassdetail() 
{ 
fstream f; 
reser b; 
f.open("p.txt",ios::in|ios::out|ios::binary);
f.seekg(0); 
while(f.read((char *) & b,sizeof(b)))
{ b.displayresdet();
} 
f.close(); 
getch(); 
}


void enquiry() 
{ 
fstream f; 
f.open("t.txt",ios::in|ios::out|ios::binary);
detail a; while(f.read((char *) & a,sizeof(a)))
{ 
a.displaydetail(); 
} 
getch();
}

void cancell() 
{ detail a; 
reser b;
canc c; 
fstream f1,f2,f3; 
f1.open("t.txt",ios::in|ios::out|ios::binary);
f2.open("p.txt",ios::in|ios::out|ios::binary);
f3.open("cn.txt",ios::in|ios::out|ios::binary);
cout<<"**********CANCELLATION MENU*********\n"; 
c.getcancdet();
while(f2.read((char *) & b,sizeof(b))) 
{ if(b.pnr==c.pnr) 
{ c.tno=b.tno; 
strcpy(c.tname,b.tname); 
strcpy(c.bp,b.bp);
strcpy(c.dest,b.dest);
c.nosc=b.nosr; 
for(int j=0;jc.m)

{ 
cout< <"You are cancelling one month before the date of departure\n";
c.amr=tamt-((tamt*20)/100);
}
goto h; 
c.displaycancdet(); 
}
} 
}

else if(strcmp(c.clas,s)==0) { 
while(f1.read((char *) & a,sizeof(a)))
{

if(a.tno==c.tno) 
{
a.c2=a.c2+c.nosc; 
d=a.d; 
m=a.m; 
addr=f1.tellg(); 
ad=sizeof(a.c2); 
f1.seekp(addr-(5*ad)); 
f1.write((char *) & a.c2,sizeof(a.c2));
tamt=b.amc;

if((c.d==d)&&(c.m==m))
{ 
cout<<"You are cancelling at the date of departure\n";
c.amr=tamt-((tamt*60)/100); 
}
else if(c.m==m) 
{ cout<<"You are cancelling at the month of departure\n"; 
c.amr=tamt-((tamt*50)/100); 
} 
else if(m>c.m) 
{ 
cout< <"You are cancelling one month before the date of departure\n";
c.amr=tamt-((tamt*20)/100);
}
else
{ cout<<"Cancelling after the departure\n"; 
cout<<"Your request cannot be completed\n";
}
goto h; 
c.displaycancdet(); 
} 
} 
} 
} 
else 
{ flag=0; 
} 
} 
h: 
if(flag==0)
{ cout<<"Enter the correct pnr no\n";
} 
f1.close();
f2.close(); 
f3.close();
getch(); 
}

void can()
{ 
int ch;
do 
{ 
cout<<".................CANCELLATION MENU.........\n";
cout<<"1.Cancell\n2.Return to the main menu\n"; 
cout<<"Enter your choice:"; 
cin>>ch; 
cout< >ch; 
cout< >ch; 
cout< >c; 
}
while(c=='y'); 
f.close(); 
break; 
case 2: 
f.open("id.txt",ios::in|ios::out|ios::binary|ios::app);
a.getid();
f.write((char *) & a,sizeof(a));
f.close();
break; 
case 3:
f.open("id.txt",ios::in|ios::out|ios::binary);
f.seekg(0); 
while(f.read((char *) & a,sizeof(a))) 
{ a.displayid(); 
}
f.close();
break; 
} 
}
while(ch< =3);
getch();
}

Source: https://www.icbse.com



