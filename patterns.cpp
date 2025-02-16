#include<iostream>
#include<string>

using namespace std;

int main() {
    int n;
    char dc ='A';
    cout << "What's n? " << endl;
    cin >> n;
    
    for (int i = 1; i <= n; i++){
        char ch ='A';
        for(int j =1; j <= n; j++){
        cout << dc;
        dc +=1;
        }
        cout << endl;
    }
    return 0;
}
