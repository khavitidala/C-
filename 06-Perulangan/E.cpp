#include<iostream>
#include<cstdlib>
using namespace std;

int main()
{
 int q;
 cin>>q;
 while(q%2==0) {
    q=q/2;
 }
  if (q==1) {
    cout<<"ya"<<endl;
  } else {
    cout<<"bukan"<<endl;
 }
}