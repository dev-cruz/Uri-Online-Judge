#include<iostream>
using namespace std;

int main()
{
    int a, b, c, x, y, z;
    cin >> a >> b >> c;
    cin >> x >> y >> z;
    int r = (x/a) * (y/b) * (z/c);
    cout << r << endl;
    return 0;
}