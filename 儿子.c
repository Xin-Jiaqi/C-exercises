//连接两个链表
#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
#include <time.h>
#define ERROR  0
#define OK 1
typedef int ElemType;//元素类型名重命名
typedef int Status;
//线性表的单链表存储结构
typedef struct Node
{
    ElemType data;//数据域
    struct Node *next;//指针域
}Node;
typedef  Node *LinkList;//定义LinkList为链表

//头插法：随机产生n个元素的值，建立代表头结点的单链线性表A
Status CreateListHead(LinkList *L, int n)
{
    LinkList p;
    int i;
    srand(time(0));  //初始化随机数种子
    *L=(LinkList)malloc(sizeof(Node));
    (*L)->next=NULL; //先建立一个带头结点的单链表
    for(i=0;i<n;i++)
    {
        p=(LinkList)malloc(sizeof(Node));//生成新结点
        p->data=rand()%100+1;//随机生成100以内的数字
        p->next=(*L)->next;
        (*L)->next=p;
    }
}

//尾插法建立单链线性表B,随机产生m个元素的值
/*Status CreateListHead(LinkList *B, int m)
{
   LinkList p,r;
   int i;
   srand(time(0));//产生初始化随机种子
   *B=(LinkList)malloc(sizeof(Node));
   r=*B;//r为指向尾部的节点
   for(i=0;i<m;i++)
   {
      p=(Node*)malloc(sizeof(Node));//生成新结点
      p->data=rand()%100+1;//生成随机数
      r->next=p;
      r=p;
   }
   r->next=NULL;
}*/

//连接两个链表
Status LinklistMerge(LinkList A,LinkList B)
{
    LinkList p;
    p=A->next;
    while(p->next)//获得尾部指针
    {
        p=p->next;
    }
    p->next=B->next;//让尾部结点指针指向第二个链表头结点
    free(B);//释放头结点

}

//元素输出
void ListOutput(LinkList L)
{
    LinkList p;
    p=L->next;
    while(p!=NULL)
    {
        printf("%d->",p->data);
        p=p->next;
    }

}
void main()
{
    LinkList List1,List2;
    int length;
    CreateListHead(&List1,6);
    CreateListHead(&List2,6);
    ListOutput(List1);
    printf("\n");
    ListOutput(List2);
    LinklistMerge(List1,List2);
    printf("\n");
}
