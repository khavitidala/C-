#include <iostream>
#include <vector>
using namespace std;
void isPrime(int n) 
{ 
	int cek, j, count, faktor;
    j=2;
    while(j<=n&&n>1){
    	cek=0;
	   for (int i=2; i*i<=j; i=i+9){
	    if (j%i == 0 && j!=i) 
	        cek++;
	   }
	    if(cek==0){
	    	count=0;
	    	faktor=j;
	    	do{
	  		if(n%faktor==0){
	  			n/=faktor;
	  			count++;
	 		}
	  		}while(n%faktor==0);
			if(n>1&&count>1){
		  		cout<<faktor<<"^"<<count<<" x ";
		  	}else if(n>1&&count==1){
		  		cout<<faktor<<" x ";
		  	}else if(n==1&&count>1){
		  		cout<<faktor<<"^"<<count<<endl;
		  	}else if(n==1&&count==1){
		  		cout<<faktor<<endl;
		  }
	    }
	  j++;  
	  }
}
int main() {
  int a;
  cin>>a;
  isPrime(a);
}