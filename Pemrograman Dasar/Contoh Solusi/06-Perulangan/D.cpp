#include<iostream>
#include<cstdlib>
using namespace std;

int main()
{
    char masukan[4];
    int hasil;
    hasil=0;
  while (scanf("%s", masukan) != EOF) {
    hasil+=atoi(masukan);
  }
  printf("%d\n", hasil);
}