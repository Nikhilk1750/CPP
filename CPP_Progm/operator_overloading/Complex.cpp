#include"Complex.h"
#include<iostream>
using namespace std;

Complex::Complex(int a,int b)
{
	cout<<"constructor:"<<endl;
	real=a;
	img=b;
}
void Complex::Print()
{
	cout<<real;
	if(img>=0)
		cout<<"+";
	cout<<img<<"J"<<endl;
}

Complex & Complex::operator+(Complex &e)
{
	static Complex temp;
	temp.real=real+e.real;
	temp.img=img+e.img;
	return temp;  // returning reference of temp

}
Complex & Complex::operator-(Complex &e)
{
	static Complex temp;
	temp.real=real-e.real;
	temp.img=img-e.img;
	return temp;
}

Complex & Complex::operator+(const int &x)
{
	static Complex temp;
	temp.real=real+x;
	temp.img=img;
	return temp;
}

Complex & Complex::operator-(const int &x)
{
	static Complex temp;
	temp.real=real-x;
	temp.img=img;
	return temp;
}






