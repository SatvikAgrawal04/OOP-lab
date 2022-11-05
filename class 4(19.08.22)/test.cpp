#include <stdio.h>
int main()
{
    int a[5] = {0, 7, 3, 5, 9};
    int b;
    printf("Enter a number: ");
    scanf("%d", &b);
    int f = 0;
    printf("%d", f);

    for (int i = 0; i < 5; i++)
    {
        if (a[i] == b)
        {
            f = 1;
            break;
        }
    }
    printf("%d", f);
    if (f = 1)
        printf("Element is there.");
    else
    {
        printf("Element is not there.");
    }
    return 0;
}