/*
220614

sizeof的应用
显示类型长度
以字节为单位
*/
#include <stdio.h>

int main()
{
    int a=10;
    int arr[]={1,2,3,4,5,6,7,8,9};
    printf("%d\n",sizeof(a));   //显示变量
    printf("%d\n",sizeof(int)); //显示类型
    printf("%d\n",sizeof(arr)); //显示数组
    printf("%d\n",sizeof(arr)/sizeof(arr[0])); //计算数组长度
    system("pause");
}