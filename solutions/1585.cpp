#include<iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    while(n) {
        int x, y;
        cin >> x >> y;
        int result = (x * y) / 2;
        cout << result << " cm2" << endl;
        n--;
    }
    return 0;
}