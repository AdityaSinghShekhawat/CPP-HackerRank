#include <stdio.h>

void update(int *a, int *b)
{
    int sum, absolute_diff;
    sum = *a + *b;
    absolute_diff = *a - *b;
    if (absolute_diff < 0)
    {
        absolute_diff = absolute_diff - 2 * absolute_diff;
    }
    *a = sum;
    *b = absolute_diff;
}

int main()
{
    int a, b;
    int *pa = &a, *pb = &b;

    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}