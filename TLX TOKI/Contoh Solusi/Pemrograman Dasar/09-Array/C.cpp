#include<iostream>
#define NMAX 1001
using namespace std;
int main() {
  int frek[NMAX];
  int y, z, m;
  for (int v=0;v<=NMAX;v++){
  	frek[v]=0;
  }
  cin>>y;
  m=0;
  for(int i=0;i<y;i++){
  	cin>>z;
  	frek[z]++;
  	if (z>m){
  		m=z;
  	}
  }
  int j, maks;
  maks=0;
  j=maks;
  do{
  	if(frek[j]>0){
  	 if(frek[j]>=frek[maks]){
  	 	maks=j;
  	 }
  	}
  	j++;
  }while(j<=m);
  cout<<maks<<endl;
}