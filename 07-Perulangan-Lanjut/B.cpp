#include<iostream>
#include<cstdlib>
using namespace std;

int main()
{
 int q;
 cin>>q;
 for(int i=1;i<=q;i++){
 	for(int j=q;j>=i+1;j--) {
 		cout<<" ";
 	}
 	for(int k=1;k<=i;k++) {
 		cout<<"*";
 	}
 	cout<<endl;
 }
}