#include <stdio.h>
 
int main() {
    int t;
    scanf("%d", &t);
 
    while (t--) {
        int k;
        scanf("%d", &k);
 
        int two = 0;
        int ok = 0;
 
        for (int i = 0; i < k; i++) {
            long long x;
            scanf("%lld", &x);
 
            if (x >= 3)
                ok = 1;
 
            if (x >= 2)
                two++;
        }
 
        if (ok || two >= 2)
            printf("YES\n");
        else
            printf("NO\n");
    }
 
    return 0;
}