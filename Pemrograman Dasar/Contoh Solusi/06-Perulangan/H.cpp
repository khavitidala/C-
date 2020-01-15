#include<iostream>
#include<cstdlib>
using namespace std;

int main()
{
 int q, w;
 cin>>q>>w;
 for(int i=1;i<=q;i++){
 	if (i<q) {
 		if (i%w==0) {
 			cout<<"* ";
 		} else {
 			cout <<i<<" ";
 		}
 	} else {
 		if (i%w==0) {
 			cout<<"*";
 		} else {
 			cout <<i;
 		}
 	}
 }
 cout<<endl;
}