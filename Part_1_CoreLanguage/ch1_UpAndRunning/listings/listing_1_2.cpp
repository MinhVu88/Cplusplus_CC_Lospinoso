#include <cstdio>

int main() {
    int x = 0;

    printf("%s", 42 == x ? "true" : "false");

    printf(" | ");

    fputs(42 != x ? "true" : "false", stdout);

    printf(" | ");

    fputs(100 > x ? "true" : "false", stdout);

    printf(" | ");

    fputs(123 >= x ? "true" : "false", stdout);

    printf(" | ");

    fputs(-10 < x ? "true" : "false", stdout);

    printf(" | ");

    fputs(-99 <= x ? "true" : "false", stdout);
}