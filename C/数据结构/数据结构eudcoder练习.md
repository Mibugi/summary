## 数据结构eudcoder练习

### 一、数组能力自测

#### 第一关：查找特定的数据元素-顺序查找

**任务描述**

编写一个程序，能在数组中查找某个特定的数据元素。

```c
#include <stdio.h>

int find_pos(int data[] ,int n, int key)
{//在数组data中查找给定数据key,n表示数组中数据元素的个数
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
int a[]={99,23,5,189,-1,66};
int x;
scanf("%d",&x);
//此处填写代码，调用find_pos，在a数组中查找给定数据x的位置，并输出函数返回的数据元素的位置
  /*------------begin-----------------*/
 int p = find_pos(a, 6, x);
    printf("%d", p);
 /*------------end-----------------*/   
    
return 1;
}
```

#### 

#### 第二关：查找-进阶(二分查找）

**任务描述**

编写一个程序，能在数组中查找某个特定的数据元素。 

与第一关不同的是，数组中的元素是从小到大有序存放的。

```c
#include <stdio.h>

int find_pos(int data[] ,int n, int key)
{//在数组data中查找给定数据key，n是数组中数据元素的个数，返回值是数据元素比较的次数.
    
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
int a[]={-1,15,66,99,122,189};
int x;
scanf("%d",&x);
//此处填写代码，调用find_pos，在a数组中查找给定数据x的位置，并输出函数返回值
  /*------------begin-----------------*/
   int t = find_pos(a, 6, x);
    printf("%d", t);
 /*------------end-----------------*/   
    
return 1;
}
```



#### 第三关：数组应用进阶

**任务描述**

问题描述：给定一个整数数组 nums 和一个目标值 target，请你在该数组中找出和为目标值的那 两个 整数，并返回他们的数组下标。

 你可以假设每种输入只会对应一个答案。但是，你不能重复利用这个数组中同样的元素。

```c
#include <stdio.h>
void compute(int data[],int n, int target)
{//在此处填写代码，在data数组中查找是否存在两个元素之和为target，并按要求输出
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
                return;
            }
        }
    }

    printf("%d,%d", p[0], p[1]);
 /*-----------end---------------*/ 

}

int main(void)
{
    int a[]={-3,2,5,9,15,32};
    int x ;
    scanf("%d",&x);
    compute(a,6,x);
}
```

