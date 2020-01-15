#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    int a,b;
    float c;
	cin >> a >> b;
	c = float(float(a)*float(b)/2.0);
	printf("%.2f\n", c);
	return 0;
}