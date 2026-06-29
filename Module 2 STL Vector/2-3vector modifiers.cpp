#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v = {1,2,3,4,5};
    vector<int> v2;
    v2 = v;

    // for (int i = 0; i < v2.size(); i++)
    // {
    //      cout << v[i];//12345;
    // }
    
    for (int x: v2)
    {
        cout << x;//12345
    }

    vector <int> v3 = {88, 9, 77};
    // v.insert(v.begin()+2, 200); //insert(position, value)
    v.insert(v.begin()+2, v3.begin(), v3.end()); //inserting multiple values

    // v.erase(v.begin()+1);//erasing 
    v.erase(v.begin()+1, v.begin()+5);//erasing multiple values;

    replace(v.begin(), v.end(), 2, 55); //replace(v.begin(),v.end(),value,replace_value replacing all values (between the range) to 55 where is 2

    // vector <int> :: iterator it =  find(v.begin(), v.end(), 5);
    auto it = find(v.begin(), v.end(), 5); // if got 5 between the range it will return the iterator;

    cout << (it == v.end() ? "not found" : "found");    
    cout << *it; // value 5;

    for(auto it = v.begin(); it < v.end(); it++){
        cout << *it;
    }
    return 0;
}