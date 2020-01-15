#include <iostream>
#include <string>
using namespace std;

bool palindrom(string str){
	int len=str.length();
	string sub=str.substr(1,len-2);
	if((len==2||len==1)&&(str[0]==str[len-1])) return true;
	return str[0]==str[len-1]&&palindrom(sub);

}

int main(){
	string str;
	getline(cin, str);
	if(palindrom(str)) cout<<"YA"<<endl;
	else cout<<"BUKAN"<<endl;
}