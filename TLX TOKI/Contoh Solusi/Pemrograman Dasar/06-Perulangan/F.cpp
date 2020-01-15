#include<iostream>
#include<cstdlib>
using namespace std;

int main()
{
 long int q;
 cin>>q;
 for(int i=q;i>=1;i--) {
 	if (q%i==0) {
 		cout<<i<<endl;
 	}
 }
}