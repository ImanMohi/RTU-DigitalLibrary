#include<iostream>

#include<cstdlib>

#include<ctime>

#include<string>

#include<stdio.h>

using namespace std;

const int A=10;

int comp=0,player=0;

bool run;

string str1,str2;

int num,num2;

int m,m1;

const int B=10;

int R1,R2;

char ch[A][B]={'-','1','2','3','4','5','6','7','8','9','B','.','.','.','.','.','.','.','.','.',

'C','.','.','.','.','.','.','.','.','.','D','.','.','.','.','.','.','.','.','.',

'E','.','.','.','.','.','.','.','.','.','F','.','.','.','.','.','.','.','.','.',

'G','.','.','.','.','.','.','.','.','.','H','.','.','.','.','.','.','.','.','.',

'I','.','.','.','.','.','.','.','.','.','J','.','.','.','.','.','.','.','.','.'};

void map(){

for(int i=0;i<10;i++){

for(int j=0;j<10;j++){

cout<<ch[i][j];

}

cout<<"\n";

}

}

int Number(string str1){

if(str1=="B"){num=1;}

else if(str1=="C"){num==2;}

else if(str1=="D"){num==3;}

else if(str1=="E"){num==4;}

else if(str1=="F"){num==5;}

else if(str1=="G"){num==6;}

else if(str1=="H"){num==7;}

else if(str1=="I"){num==8;}

else if(str1=="J"){num==9;}

return num;

}

int main(){

cout<<"\t\t\t\tBattlefield 1.0";

run=false;

srand(time(NULL));

R1=rand()%10;

R2=rand()%10;

cout<<"\n\n\n\n\n\t\t\tWelcome player";

cout<<"\n---->Here are some general instructions about the game\n";

system("pause");

system("cls");

cout<<"\n\n%->Your soldier's , $->Enemy soldiers\n";

system("pause");

system("cls");

cout<<"\n\nIn this game you are competing with computer\n";

system("pause");

system("cls");

cout<<"\n\nYou will win if you have more soldiers on the field,Calling then on a specific coordinate\n";

system("pause");

system("cls");

cout<<"\n\nYou can shoot computer soldier's\n";

system("pause");

system("cls");

cout<<"\n\nCaution you can shoot if and only if you are on the same horizon\n";

system("pause");

system("cls");

cout<<"\n\nYou can exit any time by typing-(q and CTRL+c)\n";

system("pause");

system("cls");

cout<<"\n\nLet's get started\n";

system("pause");

system("cls");

map();

while(!run){

cout<<"\t\nEnter Coordinates,x and y(With space in between)\n=>";

cin>>str1;

cin>>m;

if(str1=="B"&&m==1){

player++;

ch[1][1]='%';

map();

}

else if(str1=="B"&&m==2){

player++;

ch[1][2]='%';

map();

}

else if(str1=="B"&&m==3)

{player++;

ch[1][3]='%';

map();

}

else if(str1=="B"&&m==4){

player++;

ch[1][4]='%';

map();

}

else if(str1=="B"&&m==5){

player++;

ch[1][5]='%';

map();

}

else if(str1=="B"&&m==6){

player++;

ch[1][6]='%';

map();

}

else if(str1=="B"&&m==7){

player++;

ch[1][7]='%';

map();

}

else if(str1=="B"&&m==8){

player++;

ch[1][8]='%';

map();

}

else if(str1=="B"&&m==9){player++;

ch[1][9]='%';

map();

}

else if(str1=="C"&&m==1){

ch[2][1]='%';

map();

player++;

}

else if(str1=="C"&&m==2){

ch[2][2]='%';

map();

player++;

}

else if(str1=="C"&&m==3){

ch[2][3]='%';

map();

player++;

}

else if(str1=="C"&&m==4){ch[2][4]='%';

map();

player++;

}

else if(str1=="C"&&m==5){ch[2][5]='%';

map();

player++;

}

else if(str1=="C"&&m==6){ch[2][6]='%';

map();

player++;

}

else if(str1=="C"&&m==7){

ch[2][7]='%';

map();

player++;

}

else if(str1=="C"&&m==8){

ch[2][8]='%';

map();

player++;

}

else if(str1=="C"&&m==9){

ch[2][9]='%';

map();

player++;

}

else if(str1=="D"&&m==1){

ch[3][1]='%';

map();

player++;

}

else if(str1=="D"&&m==2){

ch[3][2]='%';

map();

player++;

}

else if(str1=="D"&&m==3){

ch[3][3]='%';

map();

player++;

}

else if(str1=="D"&&m==4){

ch[3][4]='%';

map();

player++;

}

else if(str1=="D"&&m==5){

ch[3][5]='%';

map();

player++;

}

else if(str1=="D"&&m==6){

ch[3][6]='%';

map();

player++;

}

else if(str1=="D"&&m==7){

ch[3][7]='%';

map();

player++;

}

else if(str1=="D"&&m==8){

ch[3][8]='%';

map();

player++;

}

else if(str1=="D"&&m==9){

ch[3][9]='%';

map();

player++;

}

else if(str1=="E"&&m==1){

ch[4][1]='%';

map();

player++;

}

else if(str1=="E"&&m==2){

ch[4][2]='%';

map();

player++;

}

else if(str1=="E"&&m==3){

ch[4][3]='%';

map();

player++;

}

else if(str1=="E"&&m==4){

ch[4][4]='%';

map();

player++;

}

else if(str1=="E"&&m==5){

ch[4][5]='%';

map();

player++;

}

else if(str1=="E"&&m==6){

ch[4][6]='%';

map();

player++;

}

else if(str1=="E"&&m==7){

ch[4][7]='%';

map();

player++;

}

else if(str1=="E"&&m==8){

ch[4][8]='%';

map();

player++;

}

else if(str1=="E"&&m==9){

ch[4][9]='%';

map();

player++;

}

else if(str1=="F"&&m==1){

ch[5][1]='%';

map();

player++;

}

else if(str1=="F"&&m==2){

ch[5][2]='%';

map();

player++;

}

else if(str1=="F"&&m==3){

ch[5][3]='%';

map();

player++;

}

else if(str1=="F"&&m==4){

ch[5][4]='%';

map();

player++;

}

else if(str1=="F"&&m==5){

ch[5][5]='%';

map();

player++;

}

else if(str1=="F"&&m==6){

ch[5][6]='%';

map();

player++;

}

else if(str1=="F"&&m==7){

ch[5][7]='%';

map();

player++;

}

else if(str1=="F"&&m==8){

ch[5][8]='%';

map();

player++;

}

else if(str1=="F"&&m==9){

ch[5][9]='%';

map();

player++;

}

else if(str1=="G"&&m==1){

ch[6][1]='%';

map();

player++;

}

else if(str1=="G"&&m==2){

ch[6][2]='%';

map();

player++;

}

else if(str1=="G"&&m==3){

ch[6][3]='%';

map();

player++;

}

else if(str1=="G"&&m==4){

ch[6][4]='%';

map();

player++;

}

else if(str1=="G"&&m==5){

ch[6][5]='%';

map();

player++;

}

else if(str1=="G"&&m==6){

ch[6][6]='%';

map();

player++;

}

else if(str1=="G"&&m==7){

ch[6][7]='%';

map();

player++;

}

else if(str1=="G"&&m==8){

ch[6][8]='%';

map();

player++;

}

else if(str1=="G"&&m==9){

ch[6][9]='%';

map();

player++;

}

else if(str1=="H"&&m==1){

ch[7][1]='%';

map();

player++;

}

else if(str1=="H"&&m==2){

ch[7][2]='%';

map();

player++;

}

else if(str1=="H"&&m==3){

ch[7][3]='%';

map();

player++;

}

else if(str1=="H"&&m==4){

ch[7][4]='%';

map();

player++;

}

else if(str1=="H"&&m==5){

ch[7][5]='%';

map();

player++;

}

else if(str1=="H"&&m==6){

ch[7][6]='%';

map();

player++;

}

else if(str1=="H"&&m==7){

ch[7][7]='%';

map();

player++;

}

else if(str1=="H"&&m==8){

ch[7][8]='%';

map();

player++;

}

else if(str1=="H"&&m==9){

ch[7][9]='%';

map();

player++;

}

else if(str1=="I"&&m==1){

ch[8][1]='%';

map();

player++;

}

else if(str1=="I"&&m==2){

ch[8][2]='%';

map();

player++;

}

else if(str1=="I"&&m==3){

ch[8][3]='%';

map();

player++;

}

else if(str1=="I"&&m==4){

ch[8][4]='%';

map();

player++;

}

else if(str1=="I"&&m==5){

ch[8][5]='%';

map();

player++;

}

else if(str1=="I"&&m==6){

ch[8][6]='%';

map();

player++;

}

else if(str1=="I"&&m==7){

ch[8][7]='%';

map();

player++;

}

else if(str1=="I"&&m==8){

ch[8][8]='%';

map();

player++;

}

else if(str1=="I"&&m==9){

ch[8][9]='%';

map();

player++;

}

if(R1>=1&&R2>=1){

ch[R1][R2]='$';

map();

comp++;

}

else if(R1>=9&&R2>=9){

ch[--R1][--R2]='$';

map();

comp++;

}

else{

ch[R1++][R2++]='$';

map();

comp++;

}

cout<<R1<<":"<<R2<<":"<<str1<<":"<<m;

cout<<"\nEnter coordinates of the person to bombard:";

cin>>str2;

cin>>m1;

if(R1==Number(str2)||R2==m1){

cout<<"\nPerson killed succesfully\n";

ch[R1][R2]='.';

map();

comp--;

}

else{

cout<<"Location missed,Better luck next time";

ch[R1][R2]='.';

map();

comp--;

}

//num2=Number(str1);

//str1 and m

cout<<"\nArmy of player:"<<player<<"\nArmy of computer:"<<comp;

if(player>=comp){

cout<<"\nPlayer is winning";}

else{

cout<<"\nComputer is winning\n";

}

if(str1=="Q"){

cout<<"Created by-Akshat";

run=true;

}

}

system("pause");

return 0;

}
