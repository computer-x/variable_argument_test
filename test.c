#include <stdio.h>
#include <stdarg.h>

/*
int simple_va_fun(int start, ...)
{
    va_list arg_ptr;
    int nArgValue = start;
    int nArgCount = 0;

    va_start(arg_ptr, start);
    do {
        ++nArgCount;
	printf("%dth arg: %d\n", nArgCount, nArgValue);
	nArgValue = va_arg(arg_ptr, int);
    } while(nArgValue != -1);

    return 0;
}
*/

int simple_va_fun(int start, ...)
{
    va_list arg_ptr;
    int nArgValue = start;
    int nArgCount = 0;

    va_start(arg_ptr, start);

    //while(nArgValue != -1) {
    while(nArgValue > 0) {
        ++nArgCount;
	printf("%dth arg: %d\n", nArgCount, nArgValue);
	nArgValue = va_arg(arg_ptr, int);
    }
    //++nArgCount;
    //printf("%dth arg: %d\n", nArgCount, nArgValue);

    return 0;
}
int main(int argc, char*argv[])
{
    simple_va_fun(100, -1);
    printf("\n");
    simple_va_fun(100, 200, -1);
    printf("\n");
    simple_va_fun(10, 20, 30);
    for (int i = 0; i < 20; ++i)
    {
        printf("run time %d:\n", i);
	simple_va_fun(93, 94, 84);
    }

    return 0;
}
