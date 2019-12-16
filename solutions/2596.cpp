#include<iostream>
using namespace std;

int divisors(int n)
{
    int i, total = 0;
    for(i = 1; i <= n; i++)
    {
        if(n % i == 0) {
            total++;
        }
    }
    return total;
}

int main()
{
    int c, n, total, i;
    cin >> c;
    while(c)
    {
        total = 0;
        cin >> n;
        for(i = 1; i <= n; i++)
        {
            if(divisors(i) % 2 == 0)
            {
                total++;
            }
        }
        cout << total << endl;
        c--;
    }
    return 0;
}