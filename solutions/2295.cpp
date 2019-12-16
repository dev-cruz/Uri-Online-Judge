#include<iostream>
using namespace std;


int main()
{
    double a, g, ra, rg;
    cin >> a >> g;
    cin >> ra >> rg;
    char r = (ra/a) > (rg/g) ? 'A' : 'G';
    cout  << r << endl;
    return 0;
}