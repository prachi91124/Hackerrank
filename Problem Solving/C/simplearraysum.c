#include <stdio.h>

int arrsum(int ar[], int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += ar[i];
    }
    return sum;
}
int main()
{
    int n; // size of array
    scanf("%d", &n);
    int ar[1000];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ar[i]);
    }

    int ans = arrsum(ar, n);
    printf("%d", ans);
    return 0;
}