#include <math.h>
#include <stdio.h>
int power(int x, unsigned int y) {
    if (y == 0)
        return 1;
    else if (y % 2 == 0)
        return power(x, y / 2) * power(x, y / 2);
    else
        return x * power(x, y / 2) * power(x, y / 2);
}
int order(int x) {
    int n = 0;
    while (x) {
        n++;
        x /= 10;
    }
    return n;
}
int isArmstrong(int x) {
    int n = order(x);
    int temp = x, sum = 0;
    while (temp) {
        int r = temp % 10;
        sum += power(r, n);
        temp /= 10;
    }
    return (sum == x);
}
int main() {
    int x;
    scanf("%d",&x);
    int result = isArmstrong(x);
    if (result == 1)
        printf("%d is an Armstrong number.", x);
    else
        printf("%d is not an Armstrong number.", x);
    return 0;
}
