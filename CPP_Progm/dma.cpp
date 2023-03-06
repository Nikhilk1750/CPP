#include<iostream>
using namespace std;

int main()
{
	int *p;
	p=new int(20);
	cout<<"*P= "<<*p<<endl;
	delete p;
	cout<<"After the delete operator *P="<<*p<<endl;

}

