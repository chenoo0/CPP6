#include <stdio.h>

int main(void)
{
    int age = 20;
    const int days_per_year = 365;
    int days;

    days = days_per_year * age;
    printf("Age:%d\nDays:%d\n",age,days);
    return 0;
}
