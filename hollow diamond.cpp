











































#include<iostream>

using namespace std;

int main (){
    int n = 4;

    // Top half of the diamond
    for (int i = 0; i < n; i++){
        // Print leading spaces
        for (int j = 0; j < n - i - 1; j++){
            cout << " ";
        }
        // Print the first star
        cout << "*";

        // Print spaces between the stars
        if (i != 0){
            for (int j = 0; j < 2 * i - 1; j++){
                cout << " ";
            }
            // Print the second star
            cout << "*";
        }

        cout << endl;
    }

    // Bottom half of the diamond
    for (int i = n - 2; i >= 0; i--){
        // Print leading spaces
        for (int j = 0; j < n - i - 1; j++){
            cout << " ";
        }
        // Print the first star
        cout << "*";

        // Print spaces between the stars
        if (i != 0){
            for (int j = 0; j < 2 * i - 1; j++){
                cout << " ";
            }
            // Print the second star
            cout << "*";
        }

        cout << endl;
    }

    return 0;
}
