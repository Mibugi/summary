#include <stdio.h>
#include <stdlib.h>

int find_pos(int data[], int n, int key)
{ //在数组data中查找给定数据key，n是数组中数据元素的个数，返回值是数据元素比较的次数.

    /*------------begin-----------------*/
    int times = 0;
    int mid = 0;
    int start = 0;
    int end = n - 1;
    if (data[start] > key)
    {
        return 0;
    }
    if (data[end] < key)
    {
        return 0;
    }
    while (start <= end)
    {
        times++;
        mid = (start + end) / 2;
        if (data[mid] == key)
        {
            break;
        }
        else if (data[mid] > key)
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }
    return times;
    /*------------end-----------------*/
}

int main(void)
{
    int a[] = {-1, 15, 66, 99, 122, 189};
    int x;
    scanf("%d", &x);
    //此处填写代码，调用find_pos，在a数组中查找给定数据x的位置，并输出函数返回值
    /*------------begin-----------------*/
    int t = find_pos(a, 6, x);
    printf("%d", t);
    /*------------end-----------------*/
    system("pause");
    return 1;
}
