#include <stdio.h>

int minSteps(long long x, long long y)
{
    long long distance = y - x;
    long long sum = 0;
    int steps = 0;

    while (sum < distance) {
        steps++;
        sum += (steps + 1) / 2;
    }

    return steps;
}

int main(void)
{
    long x;
    long y;

    printf("Введіть x та y: ");
    scanf("%ld %ld", &x, &y);

    printf("Мінімальна кількість кроків: %d", minSteps(x, y));
    return 0;
}
