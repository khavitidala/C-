#include <iostream>
#include <string>
#include <cstddef>
#include <cctype>
using namespace std;
int main() {
string s;
bool temu=false;
getline(cin, s);
if(s.length()>1){
	for(int i=1;i<s.length();i++){
		if(isupper(s[i])){
			s[i] = tolower(s[i]);
			s.insert(i, "_");
			temu=true;
		}
	}
	if(temu==false){
		size_t found = s.find("_");
		while(found!=string::npos){
			s[found+1] = toupper(s[found+1]);
			s.erase(s.begin()+found);
			found = s.find("_");
		}
	}
}
cout<<s<<endl;
}