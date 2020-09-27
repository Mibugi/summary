#include <stdio.h>
#include <stdlib.h>

void compute(int data[], int n, int target)
{ //在此处填写代码，在data数组中查找是否存在两个元素之和为target，并按要求输出
    /*-----------begin---------------*/
    int i = 0, j = 0, p[2] = {-1, -1};

    for (i = 0; i < n - 1; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (data[i] + data[j] == target)
            {
                p[0] = i;
                p[1] = j;
                printf("%d,%d", p[0], p[1]);
                return; //跳出所有循环
            }
        }
    }

    printf("%d,%d", p[0], p[1]);

    /*-----------end---------------*/
}

int main(void)
{
    int a[] = {-3, 2, 5, 9, 15, 32};
    int x;
    scanf("%d", &x);
    compute(a, 6, x);
    system("pause");
}