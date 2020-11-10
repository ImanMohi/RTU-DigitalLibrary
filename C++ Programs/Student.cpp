#include<iostream>

using namespace std;

class student 
{ 
public: 
	int reg,age; 
    char name[20];

    void read_data();
}; 

class ugstudent:public student 
{ 
 public:  
 	int stipend,sem; 
    float fees; 
    void read_data(); 
}; 


class pgstudent:public student 
{ 
 public:  
 	int stipend,sem; 
    float fees; 
    void read_data(); 
}; 

void student::read_data() 
{ 
	cout<<"\n Enter name:"; 
	cin>>name; 
	cout<<"\n Enter Reg.no."; 
	cin>>reg; 
	cout<<"\n Enter age:"; 
	cin>>age;  
 }
void ugstudent::read_data() 
{ 
	student::read_data(); 
	cout<<"\nEnter the sem:"; 
	cin>>sem; 
	cout<<"\nEnter the fees:"; 
	cin>>fees; 
	cout<<"\nEnter the stipend:"; 
	cin>>stipend; 
} 

void pgstudent::read_data() 
{ 
	student::read_data(); 
	cout<<"\nEnter the sem:"; 
	cin>>sem; 
	cout<<"\nEnter the fees:"; 
	cin>>fees; 
	cout<<"\nEnter the stipend:"; 
	cin>>stipend; 
} 


int main() 
{ 
	ugstudent ug[20]; 
	pgstudent pg[20]; 
	int i,n,m; 
	float average; 

	cout<<"\nEnter the no. of entries in the ugstudent class:"; 
	cin>>n; 

	for(i=1;i<=n;i++) 
 	ug[i].read_data(); 

 for(int sem=1;sem<=8;sem++) 
 { 
 	float sum=0; 
 	int found=0,count=0;

 	for(i=1;i<=n;i++) 
 	{ 
 		if(ug[i].sem==sem) 
 		{ 
 			sum=sum+ug[i].age; 
 			found=1;
   			count++; 
 		} 
 	} 
 		if(found==1) 
 		{ 
 			average=sum/count; 
 			cout<<"\nAverage of age of sem "<<sem<<" is "<<average; 

 		} 
 } 
 
cout<<"\nEnter the no. of entries of pgstudent class:"; 
cin>>n; 
for(i=1;i<=n;i++) 
	pg[i].read_data(); 

for(int sem=1;sem<=8;sem++) 
{ 
 	float sum=0; 
 	int found=0,count=0; 
 	for(i=1;i<=n;i++) 
 	{ 
 		if(pg[i].sem==sem) 
 		{ 
 			sum=sum+pg[i].age; 
 			found=1; 
 			count++; 
 		} 
 	} 
 	if(found==1) 
 	{ 
 		average=sum/count; 
 		cout<<"\nAverage of age of sem "<<sem<<" is "<<average<<endl; 
 	} 
 }

} 
