#include<iostream>
using namespace std;

namespace first
{
	int x=10;
	void fun()
	{
		cout<<"first"<<endl;
	}
}
namespace second
{
	int x=10;
	void fun()
	{
		cout<<"second"<<endl;
	}
}

using namespace first;
//using namespace second;//error we have to give only one 

int main()
{
	{ //  using namespace first;

		fun();
	cout<<"X="<<x<<endl;
	}
	//using namespace second
	{using namespace second;
		fun();
		cout<<x<<endl;
	}
}
