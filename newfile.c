#include <stdio.h>

void conflict()
{
    printf("This func will cause conflict by ID2");
}

int main()
{
    printf("This is test file\n");
    printf("Make Conflict - ID2");

    return 0;
}
