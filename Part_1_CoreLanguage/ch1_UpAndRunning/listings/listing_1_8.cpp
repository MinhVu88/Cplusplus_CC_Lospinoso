#include <cstdio>

int step_function(int x) {
    int result = 0;

    if(x < 0) result = -1;
    else if(x > 0) result = 1; 

    return result;
}

int main() {
    printf("Value #1: %d | Value #2: %d | Value #3: %d", step_function(7), step_function(0), step_function(-3));

    return 0;
}