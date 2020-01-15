#include <iostream>
#include <string>
#include <cstddef>
using namespace std;
int main ()
{
string s;
string k;
cin>>s>>k;
size_t found = s.find(k);
	while(found!=string::npos){
		s.erase(found, k.length());
		found = s.find(k);
	}
cout<<s<<endl;
}