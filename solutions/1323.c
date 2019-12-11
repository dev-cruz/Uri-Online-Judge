#include<stdio.h>

int main()
{
    long long n;
    while(scanf("%lld", &n) && n != 0) {
        long long resp = (n * (n + 1) * (2 * n + 1)) / 6;
        printf("%lld\n",resp);
    }
    return 0;
}