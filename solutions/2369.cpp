#include<iostream>
using namespace std;

int main()
{
    int n, total = 7, temp;
    cin >> n;
    temp = n - 100;
    if(temp > 0) {
        total += temp * 5;
        n -= temp;
    }
    temp = n - 30;
    if(temp > 0) {
        total += temp * 2;
        n -= temp;
    }
    temp = n - 10;
    if(temp > 0) {
        total += temp;
        n -= temp;
    }
    cout << total << endl;
    return 0;
}
