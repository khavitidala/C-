#include<iostream>
using namespace std;

int main()
{
	double masukan;
	cin>>masukan;
	int konv = static_cast<int>(masukan);
	if (masukan < 0 && masukan < konv) {
		cout<<konv-1<<" "<<konv<<endl;
	} else if (masukan > 0 && masukan > konv) {
		cout<<konv<<" "<<konv+1<<endl;
	} else if (masukan == konv){
		cout<<konv<<" "<<konv<<endl;
	}
	return 0;
}