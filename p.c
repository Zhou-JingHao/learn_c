#include <stdio.h>

int main()
{
    int *p;
    int a=10;

    p=&a;

    printf("%p\n",p);
    printf("%d\n",*p);
    printf("%p\n",&a);
    printf("%d\n",a);
    system("pause");
}