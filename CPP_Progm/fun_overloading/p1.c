#include<iostream>
using namespace std;

class Cal
{
	int a,b;
	public:
	void getdata()
	{
		cout<<"enter the data members"<<endl;
		cin>>a>>b;
			cout<<"A="<<a<<"b="<<b<<endl;
	}
//	friend void sum();
//	friend int main(); 
};

class add:public Cal
{
	public:
		void sum()
		{
			getdata();
			cout<<"sum fun"<<endl;
		}
};

int main()
{
	add obj;
	obj.sum();
}
