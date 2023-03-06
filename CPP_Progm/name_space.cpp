#include<iostream>
using namespace std;

namespace first
{
	int x=10;
	int y=30;
	void fun()
	{
		cout<<"First Namespace"<<endl<<"X="<<x<<endl;
	}
}

namespace second
{
	int x=20;
	void fun()
	{
		cout<<"second Namespace"<<endl<<" X="<<x<<endl;
	}
}

int main()
{
	first::fun();
	cout<<"y="<<first::y<<endl;
	second::fun();
}

