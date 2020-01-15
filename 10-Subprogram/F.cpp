#include <iostream>
#include <cmath>
using namespace std;
struct titik{
		int x, y;
};
struct z
{
titik tk[10001];	
};

int main(){
	z a;
	int n, d, j;
	long int carimax=-99999999;
	long int carimin=999999999;
	cin>>n>>d;
	for(int i=0;i<n;i++){
		cin>>a.tk[i].x>>a.tk[i].y;
	}
	long int cari=0;
	for(int i=0;i<n;i++){
		j=i+1;
		while(j<n){
		cari = pow(abs(a.tk[i].x-a.tk[j].x),d)+pow(abs(a.tk[i].y-a.tk[j].y),d);
			if(cari>carimax){
				carimax=cari;
			}
			if(cari<carimin){
				carimin=cari;
			}
		j++;
		}
	}
	cout<<carimin<<" "<<carimax<<endl;
}