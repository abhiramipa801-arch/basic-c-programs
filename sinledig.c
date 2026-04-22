#include <stdio.h>
int main() {
    int num, sum;
    printf("Enter number: ");
    scanf("%d", &num);
    while(num >= 10)
{
        sum = 0;
        while(num > 0)
{
            sum += num % 10;
            num /= 10;
        }
        num = sum;
    }
    printf("Single digit result: %d", num);
    return 0;
}
