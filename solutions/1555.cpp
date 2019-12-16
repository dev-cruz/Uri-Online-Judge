#include<bits/stdc++.h>
using namespace std;

long rafa(long x, long y) {
    return ((3*x)*(3*x)) + (y*y);
}

long beto(long x, long y) {
    return (2*(x*x)) + ((5*y) * (5*y));
}

long carlos(long x, long y) {
    return (-100*x + (y*y*y));
}

int main()
{
    long n, x, y;
    string winner;
    cin >> n;
    while(n)
    {
        cin >> x >> y;
        if(rafa(x, y) > beto(x, y) && rafa(x, y) > carlos(x, y)) {
            winner = "Rafael";
        } else if(beto(x, y) > rafa(x, y) && beto(x, y) > carlos(x, y)) {
            winner = "Beto";
        } else if(carlos(x, y) > rafa(x, y) && carlos(x, y) > beto(x, y)) {
            winner = "Carlos";
        }
        cout << winner << " ganhou" << endl;
        n--;
    }
}