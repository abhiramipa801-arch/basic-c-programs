#include <stdio.h>
int main()
{
    int x, original, rev = 0, rem;
    printf("Enter number: ");
    scanf("%d", &x);
    original = x;
while (x != 0)
   {
        rem = x % 10;
        rev = rev * 10 + rem;
        x /= 10;
    }
    if (original == rev)
        printf("%d is a Palindrome");
    else
        printf("%d is Not a Palindrome");
    return 0;
}
