#include <stdio.h>
void pts(int a[], int b[])
{
    int calice = 0;
    int cbob = 0;
    for (int i = 0; i < 3; i++)
    {
        if (a[i] > b[i])
        {
            calice++;
        }
        else if (a[i] < b[i])
        {
            cbob++;
        }
    }
    printf("%d %d", calice, cbob);
}
int main()
{
    int a[100];
    for (int i = 0; i < 3; i++)
    {
        scanf("%d", &a[i]);
    }

    int b[100];
    for (int i = 0; i < 3; i++)
    {
        scanf("%d", &b[i]);
    }

    pts(a, b);
    return 0;
}