#include <stdio.h>

#define atype int
#define btype char

int main()
{
    atype a;
    btype b;
    printf("%d\n",sizeof(a));
    printf("%d\n",sizeof(b));
    system("pause");
}