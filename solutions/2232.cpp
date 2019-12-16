#include<bits/stdc++.h>
using namespace std;

int main()
{
    long t, n, i;
    cin >> t;
    while (t)
    {
        cin >> n;
        long total = 0;
        for(i = 0; i <= (n - 1); i++)
        {
            total += pow(2, i);
        }
        cout << total << endl;
        t--;
    }
    return 0;
}