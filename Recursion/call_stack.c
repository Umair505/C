#include<stdio.h>
void world()
{
    printf("World\n");
}
void hello()
{
    printf("Hello\n");
    world();
}
int main()
{
    hello();
    printf("End\n");
    return 0;
}