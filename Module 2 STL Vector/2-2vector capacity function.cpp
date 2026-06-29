#include <bits/stdc++.h>
using namespace std;

int main(){
    vector <int> v;
    cout << v.capacity(); //0

    v.push_back(33);
    cout <<endl << v.capacity();//1
   
    v.push_back(33);
    cout <<endl << v.capacity();//2
   
    v.push_back(33);
    cout <<endl << v.capacity();//4
   
    v.push_back(33);
    cout <<endl << v.capacity();//4
    
    v.push_back(33);
    cout <<endl << v.capacity();//8

    cout << v.size(); //5;
    v.clear(); //it's only clear the size not the memory;
    cout << v.size();//0

    v.resize(7, 22); // new index will be the value of 22; it makes the resized index 0 
    return 0;
}