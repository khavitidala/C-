#include<iostream>
#include<cstdlib>
using namespace std;

int N, arr[105];

int main() {
  while (scanf("%d", &arr[N]) != EOF) {
    N++;
  }
  for(int i=N-1;i>=0;i--) {
  	cout<<arr[i]<<endl;
  }
}