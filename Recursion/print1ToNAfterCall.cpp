#include<iostream>
using namespace std;
int print1ToN(int n){
   if(n == 0) return 0;  // Base condition
    print1ToN(n-1); // funtion call
    cout<< n << endl; // output
}
int main(){
    int n;
    cin>> n;
    print1ToN(n);
}
