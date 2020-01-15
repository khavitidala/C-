#include<iostream>
#include<cstdlib>
using namespace std;

int main()
{
 int q;
 cin>>q;
 for(int i=1;i<=q;i++){
 	if (i%10!=0 && i!=42) {
 		cout<<i<<endl;
 	} else if (i%10==0) {
 		continue;
 	} else if (i==42) {
 		cout<<"ERROR"<<endl;
 		break;
 	}
 }
}