#include <stdio.h>
#include <stdlib.h>
//��һ�ش���

struct node
{//�˴���д���룬�������������ͣ�����һ������������ݵ� ��Ա����һ��ָ����һ�����ĳ�Ա
    int data;
    struct node *next;
};

struct node *mycreateList()
{//�˴���д���룬����һ��ֻ��һ��ͷ���Ŀ�����ͷ�ڵ��������ֵΪ0��������ͷ���ĵ�ַ����
    struct node *List;
    List = (struct node *)malloc(sizeof(struct node));
    List->data = 0;
    List->next = NULL;
    return List;

}


//�ڶ��ش���

void myinsertHead(struct node * head, int insData )
{
	/*�ڴ˴��������ʵ����headΪ��ͷd �����ͷ������Ԫ��insData�Ĺ���*/
	//begin
  struct node *q = NULL; //���������Ľڵ�
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
	/*�ڴ˴����������headΪ��ͷ�ĵ������β��������Ԫ��insData*/
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
     /*�ڴ˴�����������headΪ��ͷ�����е����ݣ�ÿ���һ�����ݻ�һ��*/
	//begin
	
	struct node *p;
    p = L->next; //ָ��pָ��ͷ������һ�����
    while (p != NULL)
    {
        printf("%d\n", p->data);
        p = p->next;
    }
	//end 
    
}

//�����ش���
 void reverseList_link( struct node *L)
 {
    //���ڴ˴�������룬ʵ���������ù��� 
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


