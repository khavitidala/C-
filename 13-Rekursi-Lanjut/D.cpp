#include <iostream>
using namespace std;
int K, N;
int catat[10];
void tulis(int kedalaman) {
	if (kedalaman >= N) {
		for (int i = 0; i < N; i++) {
			printf("%d", catat[i]);
			if(i<N-1)
				cout<<" "; 
		}
			printf("\n");
	} else {
		for (int i = catat[kedalaman-1]+1; i <= K; i++) {
			catat[kedalaman] = i;
			tulis(kedalaman + 1);
		}
	}
}
int main() {
	cin>>K>>N;
	tulis(0);
}