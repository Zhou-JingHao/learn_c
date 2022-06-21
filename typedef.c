#include <stdio.h>

typedef int atype;
typedef char btype;

int main ()
{
    atype a;
    btype b;
    printf("%d\n",sizeof(a));
    printf("%d\n",sizeof(b));
    system("pause");
}