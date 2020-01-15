#include<iostream>
#include<cstdlib>
using namespace std;

int main()
{
	struct koor
	{
		int x;
		int y;
	};
	koor a, b;
	cin>>a.x>>a.y>>b.x>>b.y;
	cout<<abs(a.x-b.x)+abs(a.y-b.y)<<endl;
}