#include<iostream>
using namespace std;

struct point {
    int x;
    int y;
};

int main()
{
    int k, n, m, x, y;
    while(cin >> k && k != 0)
    {
        struct point dp;
        struct point hp;
        cin >> dp.x >> dp.y;
        while(k)
        {
            cin >> hp.x >> hp.y;
            if(hp.x == dp.x || hp.y == dp.y) {
                cout << "divisa" << endl;
            } else if(hp.x > dp.x && hp.y > dp.y) {
                cout << "NE" << endl;
            } else if(hp.x < dp.x && hp.y > dp.y) {
                cout << "NO" << endl;
            } else if(hp.x < dp.x && hp.y < dp.y) {
                cout << "SO" << endl;
            } else if(hp.x > dp.x && hp.y < dp.y) {
                cout << "SE" << endl;
            }
            k--;
        }
    }
    return 0;
}