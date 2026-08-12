#include <bits/stdc++.h>
using namespace std;

int main(){
    list <int> l = {10, 20, 30};
    list <int> l2;

    l2.assign(l.begin(), l.end());  //l2 = l;

    l2.push_front(33); //insert head 33 10 20 30 44
    l2.push_back(44); // insert tail 33 10 20 30 44 

    l2.pop_front(); //delete head 10 20 30 44
    l2.pop_back(); //delete tail 10 20 30

    cout << *next(l2.begin(), 2) <<endl; //30 accessing ith element or index; (begin() = head) + 2 step 

    l2.insert(next(l2.begin(), 2), 77); // insert at any position  10207730

    list <int> l4 = {9, 8, 7, 4};
    l2.insert(next(l2.begin(), 2), l4.begin(), l4.end()); // insert at any position  //10 20 9 8 7 4 77 30 

    // l2.erase(next(l2.begin(), 6)); //10 20 9 8 7 4 30 
    l2.erase(next(l2.begin(), 3), next(l2.begin(), 6)); //10 20 9 77 30 //erase multiple value

    replace(l2.begin(), l2.end(), 9, 99); // all 9 will replace to 99; // 10 20 99 77 30 

    
    
    
    for (int val: l2)
    {
        cout << val <<" ";
    }
    
    auto it = find(l.begin(), l.end(), 200);

    if (it == l.end())
    {
        cout << "not found"; // not found so 200 is not in the list
    }
    else
    {
        cout << "found";
    }

    return 0;
}