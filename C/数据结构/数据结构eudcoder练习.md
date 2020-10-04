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



### 二、循环程序设计能力自测

#### 第一关：整数反转

**任务描述**

给出一个有符号整数，你需要将这个整数中每位上的数字进行反转。

```c
#include <stdio.h>
 

int reverse(int data)
{
//请在此填写代码，实现将参数data的值反转，并返回的功能
/*---------begin------------*/
int num[100];
    int a = data % 10;
    int b = data / 10, i = 0;
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
    }
    return n;
/*---------end------------*/

}

//下面的main函数请勿修改
int main(void)
{
  int  x ;
 scanf("%d",&x);
 printf("%d",reverse(x));
 return 1;
}

```



#### 第二关：回文数判断

**任务描述**

本关任务：判断一个整数是否是回文数。回文数是指正序（从左向右）和倒序（从右向左）读都是一样的整数。

是则打印 true ，不是则打印 false 。

```c
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

```





#### 第三关：斐波那契数列

**任务描述**

问题描述：输出斐波那契数列的前n项，n由键盘输入，你只能使用有限个中间变量，不能使用数组。

计算并输出数组的平均值和最大值。

```c
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

```



### 三、链表应用能力自测

完成创建一个带表头的空链表的操作。

编写一个能向表尾插入结点的函数；

编写一个能在表头插入结点的函数；

编写一个能遍历链表并输出链表各结点数据元素的函数;

完成算法，能实现将链表中的数据元素逆置。

```c
#include <stdio.h>
#include <stdlib.h>
//第一关代码

struct node
{//此处填写代码，定义链表结点类型，包含一个存放整型数据的 成员，和一个指向下一个结点的成员
    int data;
    struct node *next;
};

struct node *mycreateList()
{//此处填写代码，创建一个只有一个头结点的空链表，头节点的数据域赋值为0，并将表头结点的地址返回
    struct node *List;
    List = (struct node *)malloc(sizeof(struct node));
    List->data = 0;
    List->next = NULL;
    return List;

}


//第二关代码

void myinsertHead(struct node * head, int insData )
{
	/*在此处完成任务，实现在head为表头d 链表的头插数据元素insData的功能*/
	//begin
  struct node *q = NULL; //定义新生的节点
    q = (struct node *)malloc(sizeof(struct node));
    if (q == NULL)
    {
        printf("add node malloc failure\n");
    }
    q->data = insData;
    if (head == NULL)
    {
        head = q;
    }
    else
    {
        q->next = head;
        head = q;
    }
	//end 
}

void myinsertTail(struct node *  head , int insData )
{
	/*在此处完成任务，在head为表头的单链表表尾插入数据元素insData*/
	//begin
   
	struct node *p, *q;
    p = head;
    q = (struct node *)malloc(sizeof(struct node));
    q->data = insData;
    while (p->next != NULL)
    {
        p = p->next;  
    }
    p->next = q;
    q->next = NULL;
	//end 	
}

void myprintList(struct node *L)
{
     /*在此处完成任务，输出head为表头链表中的数据，每输出一个数据换一行*/
	//begin
	
	struct node *p;
    p = L->next; //指针p指向头结点的下一个结点
    while (p != NULL)
    {
        printf("%d\n", p->data);
        p = p->next;
    }
	//end 
    
}

//第三关代码
 void reverseList_link( struct node *L)
 {
    //请在此处填入代码，实现链表逆置功能 
 	//begin
 	if(L->next == NULL || L->next->next == NULL)
    {
        return;
    } 
 	struct node *p,*q;
 	p=L->next;
 	L->next=NULL;
 	while(p!=NULL)
 	{
 		q=p;
 		p=q->next;
 		q->next=L->next;
 		L->next=q;
	}
 	 
	//end 
 }



```

