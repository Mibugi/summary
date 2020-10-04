#include <stdio.h>
#include <stdlib.h>

int reverse(int data)
{
    //请在此填写代码，实现将参数data的值反转，并返回的功能
    /*---------begin------------*/
    int num[100];
    int a = data % 10;
    int b = data / 10, i = 0; //i记录位数
    int n = 0;
    while (b)
    {
        num[i] = a; //把余数赋值给数组
        a = b % 10;
        b = b / 10;
        i++; //数字的位数
    }
    if (!b)
    {
        num[i] = a;
    }
    for (int j = 0; j < i + 1; j++)
    {
        n = n * 10 + num[j];
        // if (n > INT_MAX || n < INT_MIN)
        // {
        //     return 0;
        // }
    }
    return n;
    /*---------end------------*/
}

//下面的main函数请勿修改
int main(void)
{
    int x;
    scanf("%d", &x);
    printf("%d", reverse(x));
    system("pause");
    return 1;
}
