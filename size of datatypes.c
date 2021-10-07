#include <stdio.h>

int main()
{
    int a;
    float b;
    char c;
    double d;
    long e; short f; unsigned int g;
    printf("THE SIZE OF INTEGER IS %ld\n",sizeof(a));
    printf("THE SIZE OF FLOATING POINT IS %ld\n",sizeof(b));
    printf("THE SIZE OF CHARACTER IS %ld\n",sizeof(c));
    printf("THE SIZE OF DOUBLE IS %ld\n",sizeof(d));
    printf("THE SIZE OF LONG IS %ld\n",sizeof(e));
    printf("THE SIZE OF SHORT IS %ld\n",sizeof(f));
    printf("THE SIZE OF UNSIGNED INT IS %ld\n",sizeof(g));

    return 0;
}