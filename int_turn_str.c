#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a=12345;
    char b[32];
    itoa(a,b,10);
    printf("%s\n",b);
    printf("%d\n",sizeof(a));
    printf("%d\n",sizeof(b));
    system("pause");
}