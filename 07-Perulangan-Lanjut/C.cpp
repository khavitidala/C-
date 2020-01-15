#include<iostream>
#include<cstdlib>
using namespace std;

int main()
{
 int q;
 cin>>q;
 int cetak=0;
 for(int i=1;i<=q;i++){
 	for(int k=1;k<=i;k++) {
 		if (cetak<=9) {
 			cout<<cetak;
 			cetak++;
 		} else {
 			cetak=0;
 			cout<<cetak;
 			cetak++;
 		}
 	}
 	cout<<endl;
 }
}