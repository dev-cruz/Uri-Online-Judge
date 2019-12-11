#include<stdio.h>
#include<stdlib.h>

long long euclides(long long m, long long n)
  {
    if (n == 0)
    {
    return m;
    }

    return euclides (n, m % n);
  }


int main()
{
    long long n, n1, n2, i;

    scanf("%lld", &n);

    for( i = 0; i < n; i++) {
        scanf("%lld %lld", &n1, &n2);
        printf("%lld\n", euclides(n1, n2));
    }

    return 0;
}
