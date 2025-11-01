#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        long long Sum = (long long) (n + 1) * n / 2;
        long long count = 0;
        for (int i = 1; i <= n; i *= 2)
        {
            count += i;
        }
        long long P = Sum - 2 * count;
        cout << P << '\n';
    }
    return 0;
}