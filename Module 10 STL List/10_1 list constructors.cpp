#include <bits/stdc++.h>
using namespace std;

int main(){
    // list <int> l(10); // list declaration of 10 size
    list <int> l(10, 3); // list declaration of 10 size every value is 3;
    
    // for(auto it = l.begin(); it!= l.end(); it++)
    // {
    //     cout << *it << endl; // 333333333333
    // }

    for(int val : l){
        cout << val; //33333333333;
    }
    
    // list <int> l2 = {1, 2, 3, 4, 5};
    // int a[] = {1, 2, 3, 4};
    vector<int> v = {1, 2, 3, 3, 4};
    list <int> l3(v.begin(), v.end());

    
    // l3.clear();
    // l3.empty() ? cout << "empty";
    // l3.resize(5); it was 3, now 5 and new valus are zero;
    // l3.resize(5, 22); it was 3, now 5 and new valus are 22;

    for (int val: l3)
    {
        cout << val;
    }
    

    return 0;
}


// https://docs.google.com/document/d/1IbS-qmFx6oRO-GyIG55yavdDUHpfHTNM/edit