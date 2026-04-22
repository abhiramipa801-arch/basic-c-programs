#include <stdio.h>
int main() 
{
    int n, arr[100], i, j, found = 0;
    printf("Enter size: ");
    scanf("%d", &n);
    printf("Enter elements:\n");
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    for(i = 0; i < n; i++) {
        for(j = i + 1; j < n; j++)
       {
            if(arr[i] == arr[j])
            {
                found = 1;
                break;
            }
        }
        if(found) break;
    }
    if(found)
        printf("True");
    else
        printf("False");
    return 0;
}
