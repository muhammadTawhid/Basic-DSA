#include <bits/stdc++.h>
using namespace std;

int main(){
    //type 1;
    // vector <int> v; //size 0
    
    // vector <int> v(5); //size 5
    vector <int> v(5, -4); //size 10 and all elements are -4;
    vector <int> v2(v); // v is copied to v2;
    for (int i = 0; i < v2.size(); i++)
    {
        cout << v2[i];
    }

    int a[5] = {1, 2, 3, 4, 5};
    vector <int> v3(a, a+5); //arry's elements are copied to vector;
    for (int i = 0; i < v.size(); i++)
    {
        cout << v3[i];
    }
    
    
    cout << v.size() <<endl; //0;
    
    return 0;
}