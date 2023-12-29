#include <stdio.h>

int main()
{
    int n, m;
    scanf("%d %d",&n, &m);
    float p, q;
    scanf("%f %f", &p,&q);
    
    int sum=n+m;
    int diff=n-m;
    printf("%d %d \n", sum, diff);
    
    float s=p+q;
    float d=p-q;
    printf("%.1f %.1f",s,d);	
    
    return 0;
}