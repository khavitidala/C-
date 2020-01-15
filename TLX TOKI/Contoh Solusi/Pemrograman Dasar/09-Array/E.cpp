#include <cstdio>
#include <iostream>
#define NMAX 101
using namespace std;
int N, M, P, hasil;
int matriksA[NMAX][NMAX];
int matriksB[NMAX][NMAX];

int main() {
cin>>N>>M>>P;
for(int i=0;i<N;i++){
	for(int j=0;j<M;j++){
		cin>>matriksA[i][j];
	}
}
for(int i=0;i<M;i++){
	for(int j=0;j<P;j++){
		cin>>matriksB[i][j];
	}
}
for(int i=0;i<N;i++){
	for(int k=0;k<P;k++){
		hasil=0;
		for(int j=0;j<M;j++){
			hasil += matriksA[i][j]*matriksB[j][k];
		}
		if(k < P-1) {
			cout<<hasil<<" ";
		} else {
			cout<<hasil<<endl;
		}
	}
}
}