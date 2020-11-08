#include<iostream>

using namespace std;

class Time
{
private:
	float hours;
	int minutes;
public:
	void getTime();
	void putTime();
	void addTime(Time T1,Time T2);
	void addTime(Time T1,int x);
	
};

void Time::getTime()
{
	cout<<"Enter Time: "<<endl;
	cout<<"Hours: ";
	cin>>hours;
	cout<<"Minutes: ";
	cin>>minutes;
}

void Time::putTime()
{
	cout<<"Time is: "<<hours<<":"<<minutes<<endl;
}
void Time::addTime(Time T1,Time T2)
{
	this->minutes=T1.minutes+T2.minutes;
	this->hours=T1.hours+T2.hours+(this->minutes/60);
	this->minutes%=60;
}
void Time::addTime(Time T1,int x)
{
	this->minutes=T1.minutes+x;
	this->hours=T1.hours+(this->minutes/60);
	this->minutes%=60;
}

int main()
{
	Time T1,T2,T3,T4;
	int i;
	T1.getTime();
	T2.getTime();
	T3.addTime(T1,T2);
	T3.putTime();
	cout<<"Enter an integer: ";
	cin>>i;
	T4.addTime(T1,i);
	T4.putTime();


	return 0;
}
