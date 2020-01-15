#include<iostream>
#include<cstdlib>
using namespace std;

int main()
{
 int q, w;
 int max = -100001;
 int min = 100001;
 cin>>q;
 for(int i=1;i<=q;i++){
 	cin>>w;
 	if (w>max) {
 		max = w;
 	} 
 	if (w<min) {
 		min = w;
 	}
 }
 cout<<max<<" "<<min<<endl;
}