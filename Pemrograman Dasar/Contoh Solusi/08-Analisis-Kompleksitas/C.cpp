#include <iostream>
#include <cstdio>
using namespace std;

int main() {
  int N;

  scanf("%d", &N);
  for (int i = 0; i < N; i++) {
    int x;
    scanf("%d", &x);

	int sprime=0;
    int divisor = 1;
    while (divisor <= x) {
      if (x % divisor == 0) {
        sprime++;
        if(sprime>4){
      		break;
      	}
      }
      divisor++;
    }

    if (sprime<=4) {
      printf("YA\n");
    } else {
      printf("BUKAN\n");
    }
  }
}