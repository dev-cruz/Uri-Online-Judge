#include<bits/stdc++.h>
using namespace std;

int main()
{
    long n, c, d;
    cin >> n;
    while(n)
    {
        cin >> c >> d;
        if(c == 0 && d == 0)
            cout << 0 << endl;
        else {
            int r = pow(26, c) * pow(10, d);
            cout << r << endl;
        }
        n--;
    }
    return 0;
}