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
 
 int main(void)
{
    struct node *pllist = mycreateList();
    int num;
    int data;
    int i; 
    scanf("%d", &num);
    for (i=0;i<num;i++)
    {
        scanf("%d",&data);
        myinsertTail(pllist,data);
    }
    reverseList_link(pllist);
    myprintList(pllist);
}


