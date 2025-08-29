#include <stdio.h>

int main() {
    long long n;
    int k, i;

    scanf("%lld %d", &n, &k);

    for(i = 0; i < k; i++) {
        if(n % 10 == 0) {
            n /= 10;
        } else {
            n--;
        }
    }

    printf("%lld\n", n);

    return 0;
}
