#include <stdio.h>
#include <stdlib.h>

int find_pos(int data[], int n, int key)
{ //在数组data中查找给定数据key,n表示数组中数据元素的个数
    /*------------begin-----------------*/
    int p = 0;
    int i = 0;
    for (i = 0; i < n; i++)
    {

        if (data[i] == key)
        {
            return p;
            continue;
        }
        p++;
    }
    if (p >= 5)
    {
        return -1;
    }
    /*------------end-----------------*/
}

int main(void)
{
    int a[] = {99, 23, 5, 189, -1, 66};
    int x;
    scanf("%d", &x);
    //此处填写代码，调用find_pos，在a数组中查找给定数据x的位置，并输出函数返回的数据元素的位置
    /*------------begin-----------------*/
    int p = find_pos(a, 6, x);
    printf("%d", p);
    /*------------end-----------------*/
    system("pause");
    return 1;
}
