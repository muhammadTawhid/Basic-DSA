#include <bits/stdc++.h>
using namespace std;

void recursion(int val){
    //base case
    if (val == 5)
    {
        return;
    }
    recursion(val+1);
    cout << val <<" ";
}

int main(){
    int val = 0;
    recursion(val);
    return 0;
}