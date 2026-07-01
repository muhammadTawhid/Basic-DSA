#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int left_space = 0;
    int middle_space = n - 2;

    for (int i = 0; i < n / 2; i++) {
        for (int j = 0; j < left_space; j++) {
            cout << " ";
        }
        cout << "\\";

        for (int j = 0; j < middle_space; j++) {
            cout << " ";
        }
        cout << "/";

        cout << endl;
        left_space++;   
        middle_space -= 2; 
    }

    for (int j = 0; j < n / 2; j++) {
        cout << " ";
    }
    
    cout << "X" << endl;

    left_space = (n / 2) - 1; 
    middle_space = 1;            

    for (int i = 0; i < n / 2; i++) {
        for (int j = 0; j < left_space; j++) {
            cout << " ";
        }
        cout << "/";

        for (int j = 0; j < middle_space; j++) {
            cout << " ";
        }
        cout << "\\";

        cout << endl;
        left_space--;  
        middle_space += 2; 
    }

    return 0;
}