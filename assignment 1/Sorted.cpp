#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        bool is_sorted = true;
        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {

                if (a[i] > a[j])
                {
                    is_sorted = false;
                }
            }
        }

        is_sorted ? cout << "YES" <<endl : cout << "NO" <<endl;
    }

    return 0;
}