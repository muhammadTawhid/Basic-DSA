#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    vector<int> b(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }
    vector<int> c;
    c = b;
    for (int i = 0; i < n; i++)
    {
        c.push_back(a[i]);
    }

    for (int s : c)
    {
        cout << s << " ";
    }

    return 0;
}