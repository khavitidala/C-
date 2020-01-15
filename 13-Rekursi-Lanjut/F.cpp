#include <iostream>
#include <string>
using namespace std;
int m[128][128];
string s[128*128];
int d;
void homogen(int r, int c, int k) {
   for (int i = r; i < r+k; i++) {
      for (int j = c; j < c+k; j++)
         m[i][j] = 1;
    }
}

void quadtree(int r, int c, int k, int deep, string str){
	string stri;
   if (deep>=d) {
      homogen(r, c, k);
   } else {
   	  stri = str[deep];
      if (stri=="0")
      	quadtree(r, c, k/2, deep+1, str);
  	  else if (stri=="1")
      		quadtree(r, c+(k/2), k/2, deep+1, str);
  	  else if (stri=="2")
      		quadtree(r+(k/2), c, k/2, deep+1, str);
  	  else if (stri=="3")
      		quadtree(r+(k/2), c+(k/2), k/2, deep+1, str);
   }
}

int main(){
   int r, c, n;
   string str;
   cin>>n;

   //input koordinat kuadran
   for (int i = 0; i < n; i++){
      cin>>s[i];
   }
   
   cin>>r>>c;

   // Cari 2^p yang >= max(r, c)
   int maxRc = max(r, c);
   int pow2 = 1;
   while (pow2 < maxRc){
      pow2 *= 2;
   }
   // Inisialisasi
   for (int i = 0; i < pow2; i++) {
      for (int j = 0; j < pow2; j++) {
         m[i][j] = 0;
      }
   }

   //penerjemahan
   for(int i=0; i<n; i++){
   	str = s[i];
   	d = str.length();
   	quadtree(0, 0, pow2, 1, str);
   }

   //cetak hasil
	for (int i = 0; i < r; i++) {
      for (int j = 0; j < c; j++){
         cout<<m[i][j];
         if(j<c-1)
         	cout<<" ";
      }
      cout<<endl;
    }
   return 0;
}