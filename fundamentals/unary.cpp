#include <cstdio>


int main()
{
    int x = 2;
    int y = 1;

    x++; // postfix
    ++y; // prefix

    printf("%d %d\n", x, y);

    x--;
    --y;
    printf("%d %d\n", x, y);

    // x = 2 and y = 1
    printf("%d\n", x-- == ++y);
    return 0;
}