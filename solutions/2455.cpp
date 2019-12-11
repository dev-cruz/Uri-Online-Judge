#include<iostream>
using namespace std;

int main()
{
    int p1, c1, p2, c2;
    cin >> p1 >> c1;
    cin >> p2 >> c2;
    int left = p1 * c1;
    int right = p2 * c2;
    if(left == right) {
        cout << 0 << endl;
    } else if (left > right) {
        cout << -1 << endl;
    } else {
        cout << 1 << endl;
    }
    return 0;
}