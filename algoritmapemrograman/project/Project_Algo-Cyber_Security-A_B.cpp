#include<stdio.h>

int split(int n){
    int sum = 0;
    while(n > 0){
        sum += n%10;
        n /= 10;
    }
    return sum;
}

int main(int argc, char const *argv[])
{
    int t,a,b,total=0;
    scanf("%d", &t);
    for(int i = 0; i < t; i++){
        scanf("%d %d", &a, &b);
        int sum1 = split(a);
        int sum2 = split(b);
        total = sum1 * sum2;
        printf("case#%d: %d\n", i, total);
    }   
    return 0;
}
