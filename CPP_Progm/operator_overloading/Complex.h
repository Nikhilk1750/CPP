#include<iostream>
using namespace std;

class Complex
{
	float real,img;
	public : Complex(int=0,int=0); // constructor with default args
		 void Print();
		 Complex & operator+(Complex &);
		 Complex & operator-(Complex &);
		 Complex & operator+(const int & );
		 Complex & operator-(const int &);
};
