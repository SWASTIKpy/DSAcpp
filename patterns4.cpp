#include <iostream>
#include <string>
using namespace std;

int main (){
    int n = 4;
    char num = 'A';
    for(int i=0; i<n; i++){
        for(int j=0; j < i+1; j++){
            cout << num <<" ";
            num++;
        }
        cout << endl;
    }
}