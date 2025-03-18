#include <stdio.h>

int main()
{
    bool bVal;
    double x=46.7, y=93, z;
    bVal = (x==y);
    printf("%d\n", bVal);
    bVal = (x<y);
    printf("%d\n", bVal);
    bVal = (2*x>y);
    printf("%d\n", bVal);
    z = (x>y)*x + (x<=y)*y;
    printf("%f\n", z);
    return 0;
}
