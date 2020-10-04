#include <stdio.h>
#include <stdlib.h>
int judge(int data)
{
    //请在此填写函数，用户判断data是否是回文，若是回文，返回1，否则返回0
    /*------begin--------*/
    int num = data;
    int res = 0;
    if (num < 0)
    {
        return 0;
    }
    do
    {
        res = res * 10 + num % 10;
        num = num / 10;
    } while (num);
    {
        if (res == data)
        {
            return 1;
        }
    }
    return 0;
    /*------end--------*/
}

int main(void)
{
    int x;
    //请在此书写代码，从键盘读入一个整数放入变量x
    scanf("%d", &x);
    int temp = 0;
    temp = judge(x);
    if (temp == 0)
    {
        printf("false");
    }
    else
    {
        printf("true");
    }
    //在此书写代码，根据调用函数judge的结果，若是1 ，输出true，否则输出false
    system("pause");
    return 1;
}
