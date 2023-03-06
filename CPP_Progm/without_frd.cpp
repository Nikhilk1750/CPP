#include<iostream>
using namespace std;

class A
{
	int x;
	void getdata()
	{
		cin>>x;
	}
	public:	void fun();
};
void A:: fun()
{
	getdata();
	cout<<"x="<<x<<endl;
}
int main()
{
	A obj;
	obj.fun();
}

