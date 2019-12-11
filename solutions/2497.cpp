#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    int exp = 1;
    while(1) {
        cin >> n;
        if(n == -1) break;
        int result = n / 2;
        cout << "Experiment " << exp << ": " << result << " full cycle(s)" << endl;
        exp++;
    }
    return 0;
}