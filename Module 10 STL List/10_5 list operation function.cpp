#include <bits/stdc++.h>
using namespace std;

int main(){
    list <int> l = {3, 4, 5, 2, 6, 7, 8, 5, 3, 5, 9, 5};

    // l.remove(5); // every 5 will be removed;

    l.sort(); //2 3 3 4 6 7 8 9 

    // l.sort(greater<int>()); //reverse sort //9 8 7 6 4 3 3 2 

    l.unique(); //all duplicate number will be removed but number must be sorted; // 2 3 4 5 6 7 8 9 

    l.reverse(); // 9 8 7 6 5 4 3 2 

    cout << l.front() << " "; //printing head 9;
    cout << *l.begin() << " "; //printing head 9

    cout << l.back() << endl; //printing tail 2;

    for(int val:l){
        cout << val << " ";
    }
    return 0;
}