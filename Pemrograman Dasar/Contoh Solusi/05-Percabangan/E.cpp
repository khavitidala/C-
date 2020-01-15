#include <iostream>

using namespace std;

int main()
{
    int a;
    cin>>a;
    if (a%10==a) {
            cout<<"satuan"<<endl;
    } else if (a%100==a) {
            cout<<"puluhan"<<endl;
    } else if (a%1000==a) {
            cout<<"ratusan"<<endl;
    } else if (a%10000==a) {
            cout<<"ribuan"<<endl;
    } else if (a%100000==a) {
            cout<<"puluhribuan"<<endl;
    }
    return 0;
}