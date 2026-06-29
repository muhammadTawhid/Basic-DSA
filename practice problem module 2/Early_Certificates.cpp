#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n, m;
        cin >> n >> m;
        string a, b;
        cin >> a >> b;
        int min_val = min(n, m);

        for (int i = 0; i < min_val; i++)
        {
            if (a[i] == b[i])
            {
                cout << a[i];
            }
            else
            {
                break;
            }
            
        }
        cout << endl;
    }

    return 0;
}