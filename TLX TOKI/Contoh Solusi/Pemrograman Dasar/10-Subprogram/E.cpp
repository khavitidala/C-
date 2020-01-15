#include <iostream>
using namespace std;
int a, b, k;
int f(int x){
	int hasil=abs(a*x+b);
	return hasil;
}
int main() {
int hasil, x;
cin>>a>>b>>k>>x;
hasil=x;
	for(int i=0;i<k;i++){
		hasil = f(hasil);
	}
cout<<hasil<<endl;
}