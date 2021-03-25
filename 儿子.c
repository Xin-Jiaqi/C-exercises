//������������
#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
#include <time.h>
#define ERROR  0
#define OK 1
typedef int ElemType;//Ԫ��������������
typedef int Status;
//���Ա�ĵ�����洢�ṹ
typedef struct Node
{
    ElemType data;//������
    struct Node *next;//ָ����
}Node;
typedef  Node *LinkList;//����LinkListΪ����

//ͷ�巨���������n��Ԫ�ص�ֵ����������ͷ���ĵ������Ա�A
Status CreateListHead(LinkList *L, int n)
{
    LinkList p;
    int i;
    srand(time(0));  //��ʼ�����������
    *L=(LinkList)malloc(sizeof(Node));
    (*L)->next=NULL; //�Ƚ���һ����ͷ���ĵ�����
    for(i=0;i<n;i++)
    {
        p=(LinkList)malloc(sizeof(Node));//�����½��
        p->data=rand()%100+1;//�������100���ڵ�����
        p->next=(*L)->next;
        (*L)->next=p;
    }
}

//β�巨�����������Ա�B,�������m��Ԫ�ص�ֵ
/*Status CreateListHead(LinkList *B, int m)
{
   LinkList p,r;
   int i;
   srand(time(0));//������ʼ���������
   *B=(LinkList)malloc(sizeof(Node));
   r=*B;//rΪָ��β���Ľڵ�
   for(i=0;i<m;i++)
   {
      p=(Node*)malloc(sizeof(Node));//�����½��
      p->data=rand()%100+1;//���������
      r->next=p;
      r=p;
   }
   r->next=NULL;
}*/

//������������
Status LinklistMerge(LinkList A,LinkList B)
{
    LinkList p;
    p=A->next;
    while(p->next)//���β��ָ��
    {
        p=p->next;
    }
    p->next=B->next;//��β�����ָ��ָ��ڶ�������ͷ���
    free(B);//�ͷ�ͷ���

}

//Ԫ�����
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
