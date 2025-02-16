#include <iostream>

using namespace std;

void name (int i , int n){
if(i<=n){
    cout<<i;
name(i+1,n);

}

}

int main (void){
   int n,i;
   cin >> i >>n;
   name(i,n);
}

