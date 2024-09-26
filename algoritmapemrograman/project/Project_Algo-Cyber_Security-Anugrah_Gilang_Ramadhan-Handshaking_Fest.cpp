#include <stdio.h>

int main()
{
    int T;
    scanf("%d", &T);

    for (int i = 1; i <= T; i++)
    {
        int n;
        scanf("%d", &n);
        int handshakes = n * (n - 1) / 2;
        printf("Case #%d: %d\n", i, handshakes);
    }

    return 0;
}
