#include <stdio.h>
int main(void)
{
    int n,n2,n3;

    /*该程序本有多处错误*/
    n = 5;
    n2 = n*n;
    n3 = n*n*n;
    printf("n = %d, n squared = %d, n subed = %d\n", n,n2,n3);

    return 0;
}