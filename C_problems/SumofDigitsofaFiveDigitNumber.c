
/*
    Source : https://www.hackerrank.com/challenges/sum-of-digits-of-a-five-digit-number/
*/

#include <stdio.h>

int main() {
	
    int n;
    int res = 0;
    scanf("%d", &n);
    while(n)
    {
        res += n % 10;
        n /= 10;
    }
    printf("%d\n",res);
    return 1;
}
