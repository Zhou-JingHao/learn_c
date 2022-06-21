//220618
//三目操作符


#include <stdio.h>

int main()
{
    int a=10;
    int b=20;
    int max;
    int max2;
    max=(a>b?a:b);  //条件  ？  为真的输出  ：  为假的输出

    //等同于
    if(a>b)
        max2=a;
    else
        max2=b;

    printf("%d\n",max);
    printf("%d\n",max2);
    system("pause");
}