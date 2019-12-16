#include<bits/stdc++.h>
using namespace std;


int main()
{
    double p, t;
    cin >> p >> t;
    long double area = (p * t) / 2;
    cout << "Concluimos que, dado o limite da entrada,"; 
    cout << " a resposta seria:  y = f(x) = ";
    cout << fixed << setprecision(5);
    cout << area << "." << endl;
    return 0;
}