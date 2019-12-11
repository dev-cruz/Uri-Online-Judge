#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    while(cin >> n) {
        double r = sqrt(3) / 4.00;
        double area = r * n * n;
        cout << fixed << setprecision(2);
        cout << area * 1.6 << endl;
    }
    return 0;
}