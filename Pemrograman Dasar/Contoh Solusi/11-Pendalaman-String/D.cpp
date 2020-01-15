#include <iostream>
#include <string>
#include <cstddef>
using namespace std;
int main() {
string s1, s2, s3, s4;
cin>>s1;
cin>>s2;
cin>>s3;
cin>>s4;
size_t found = s1.find(s2);
s1.erase(found, s2.length());
size_t found2 = s1.find(s3);
s1.insert(found2+s3.length(), s4);
cout<<s1<<endl;
}