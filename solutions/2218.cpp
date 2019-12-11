#include<bits/stdc++.h>
using namespace std;


int main()
{
    int t, n;
    cin >> t;
    while(t)
    {
        cin >> n;
        int r = (n*(n+1)/2)+1;
        cout << r << endl;
        t--;
    }
    return 0;
}