#include<iostream>
using namespace std;
#include"Complex.h"
//#include"Complex.cpp"
int main()
{
	int a,b;
	cout<<"enter the real:"<<endl;
	cin>>a;
	cout<<"enter the img:"<<endl;
	cin>>b;
	Complex e1(a,b);

	cout<<"enter the real:"<<endl;
	cin>>a;
	cout<<"enter the img:"<<endl;
	cin>>b;
	Complex e2(a,b);

	Complex e3,e4;

	e3=e1+e2; // e1.operator+(e2)
	e4=e2*e3; // e2.operator-(e3);

	cout<<"e1:";
	e1.Print();
	cout<<"e2:";
	e2.Print();
	cout<<"e3:";
	e3.Print();
	cout<<"e4:";
	e4.Print();
}
