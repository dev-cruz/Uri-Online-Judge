#include<iostream>
using namespace std;

int main()
{
    long a, n, f, total = 0;
    cin >> a;
    cin >> n;
    while(n)
    {
        cin >> f;
        if(f * a >= 40000000) {
            total++;
        }
        n--;
    }
    cout << total << endl;
    return 0;
}