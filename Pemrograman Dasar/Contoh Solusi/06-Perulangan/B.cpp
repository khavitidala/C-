#include<iostream>
#include<cstdlib>
using namespace std;

int main()
{
	int x, jum, hasil;
	cin>>x;
	hasil = 0;
	for (int i=1;i<=x;i++) {
		cin>>jum;
		hasil += jum;
	}
	cout<<hasil<<endl;
}