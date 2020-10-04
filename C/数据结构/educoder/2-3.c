#include <stdio.h>
#include <stdlib.h>
void fib(int n)
{
    //此处输入代码，能输出n项斐波那契数列，两个数之间有一个空格，最后一个数后面不需要空格
    /*-----begin---------*/
    int i;
    int a, b, c;
    for (i = 0; i < n; i++)
    {
        if (i > 1)
        {
            c = a + b;
            printf("%d ", c);
            a = b;
            b = c;
        }
        else
        {
            a = 1;
            b = 1;
            printf("1 ");
        }
    }
    /*-----end---------*/
}

int main(void)
{
    int i;
    scanf("%d", &i);
    fib(i);
    system("pause");
    return 1;
}
