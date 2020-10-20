#include<stdio.h>
void fun(int);

int main()
{
    int a=3;
    fun(a);
    return 0;
}
void fun(int n)
{
    if(n > 0)
    {
        fun(--n);
        printf("%d,", n);
        fun(--n);
    }
}

