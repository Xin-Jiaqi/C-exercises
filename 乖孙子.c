#include <stdio.h>
#include <stdlib.h>
#include <Input.h>
#include <List_Operation.h>
#define TIMES_MAX 10
#define Num_columns 2
#define _Not_yet_Printf 0
#define _Have_Printf 1
extern int Variate;
typedef struct priority_element
{
    int Counter_Variate_Priority;
    int Variate_Priority;
}Priority_Element;
void Is_Label_1(LNode *Ultimate_List,Minimum *head_node_Minimum,LNode *head_ESSENT_PRIME);
void Least_Cover(LNode *Ultimate_List,Minimum *head_node_Minimum,LNode *head_ESSENT_PRIME);
void Print_Variate(LNode *Ultimate_List);
void Creat_Priority_Sheet(Priority_Element Priority_Sheet[]);
void Set_Priority_Mark(LNode *Ultimate_List,Priority_Element Priority_Sheet[]);
void Last_Operation(LNode *Ultimate_List);
int num_Essent_Prime=0;//���ʱ�Դ�����
int num_Prime=0;//�Ǳ��ʱ�Դ�����
int main()
{
    int times,i,n;
    int Num_min[TIMES_MAX],Num_Irelev[TIMES_MAX];
    LNode *copy_head_LNode;
    LNode *copy_head_ESSENT_PRIME;
    LNode *head_LNode[TIMES_MAX];
    Minimum *head_Mini[TIMES_MAX];
    //�������ȼ���
    Priority_Element   Priority_Sheet[Num_Bits];
    //Ϊ��С���һ��ͷ���
    Minimum *head_node_Minimum;
    head_node_Minimum=(Minimum*)malloc(sizeof(Minimum));
    //��ָ���ʼ��
    int column=1;
    LNode *Columns_LNode[Num_columns];
    Columns_LNode[column]=(LNode*)malloc(sizeof(LNode));
    Columns_LNode[column]->next=NULL;
    Columns_LNode[column]->data=NO_DATA;
    Columns_LNode[column]->Mark=NO_MARK;
    Columns_LNode[!column]=(LNode*)malloc(sizeof(LNode));
    Columns_LNode[!column]->next=NULL;
    Columns_LNode[!column]->data=NO_DATA;
    Columns_LNode[!column]->Mark=NO_MARK;
    //���ʱ�Ը�г�ʼ��
    LNode *head_ESSENT_PRIME;
    head_ESSENT_PRIME=(LNode*)malloc(sizeof(LNode));
    head_ESSENT_PRIME->next=NULL;
    head_ESSENT_PRIME->data=NO_DATA;
    head_ESSENT_PRIME->Mark=NO_MARK;
    //���������ʼ��
    LNode *Ultimate_List;
    Ultimate_List=(LNode*)malloc(sizeof(LNode));
    Ultimate_List->next=NULL;
    Ultimate_List->data=NO_DATA;
    Ultimate_List->Mark=NO_MARK;
    Ultimate_List->Bits[0]=-1;
    //ָ�������ʼ��
    for(i=0;i<TIMES_MAX;i++) head_LNode[i]=NULL;
    for(i=0;i<TIMES_MAX;i++) head_Mini[i]=NULL;
    //printf("�������뼸�Σ�");
    scanf("%d",&times);
    i=0;
    for(i=0;i<times;i++)
    {
        //printf("��������С��������޹��������");
        scanf("%d %d",&Num_min[i],&Num_Irelev[i]);
       		Receive(&head_LNode[i],&head_Mini[i],Num_min[i],Num_Irelev[i]);
        Num_Variate(head_LNode[i]);
        Reslove_LNode(head_LNode[i]);
        Reslove_Mini(head_Mini[i]);
        //_Printf_Data(head_LNode[i]);
        //_Printf_Data_Mini(head_Mini[i]);
    }
    //���뺯��֮�����column�������µı�Դ�Ȼ�����ǲ���head_LNode�еı��ʱ�Դ�
    //���������һ���µ�����ѭ�����µı�Դ�кϳ���һ����Դ��,ѭ����������������һ����Ը��Ϊ��
    printf("������ 2018210135");
    for(i=0;i<times;i++)
    {
        Num_Variate(head_LNode[i]);
        //���ֳ�ʼ��
        if(Num_min[i]==0)
        {
            printf("\n");
            printf("0");
            continue;
        }
        else if(Num_min[i]+Num_Irelev[i]==int_power(2,Variate))
        {
            printf("\n");
            printf("1");
            continue;
        }
        else if(Num_min[i]==1&&Num_Irelev[i]==0)
        {
            printf("\n");
            Print_Variate(head_LNode[i]);
        }
        else
    {
            Columns_LNode[column]->next=NULL;
        Columns_LNode[column]->data=NO_DATA;
        Columns_LNode[column]->Mark=NO_MARK;
        Columns_LNode[!column]->next=NULL;
        Columns_LNode[!column]->data=NO_DATA;
        Columns_LNode[!column]->Mark=NO_MARK;
        head_ESSENT_PRIME->next=NULL;
        head_ESSENT_PRIME->data=NO_DATA;
        head_ESSENT_PRIME->Mark=NO_MARK;
        Ultimate_List->next=NULL;
        Ultimate_List->data=NO_DATA;
        Ultimate_List->Mark=NO_MARK;
        Ultimate_List->Bits[0]=-1;

        num_Essent_Prime=0;//���ʱ�Դ�������Ϊ��
        num_Prime=0;//�Ǳ��ʱ�Դ�������Ϊ��
        Compare_Func(head_LNode[i],Columns_LNode[!column]);
        copy_head_LNode=head_LNode[i];
        copy_head_ESSENT_PRIME=head_ESSENT_PRIME;
        while(copy_head_LNode)
        {
            if(copy_head_LNode->Mark==PRIME)//�Ǳ�Դ��
            {
                if(head_ESSENT_PRIME->Mark==NO_MARK)//�ж�ͷ����Ƿ񱻱��
                {
                    for(n=0;n<Variate;n++)
                    {
                            head_ESSENT_PRIME->Bits[n]=copy_head_LNode->Bits[n];
                            head_ESSENT_PRIME->Mark=PRIME;
                    }
                }
                else
                {
                    copy_head_ESSENT_PRIME=creatnode_LNode(head_ESSENT_PRIME);//�����µĽڵ�
                    for(n=0;n<Variate;n++)
                    {
                            copy_head_ESSENT_PRIME->Bits[n]=copy_head_LNode->Bits[n];
                    }

                }
            }
            copy_head_LNode=copy_head_LNode->next;
        }
        if(Columns_LNode[!column]->Mark!=NO_MARK)//break;//�˳�ѭ������
        {
            for(;;)
            {

                    Compare_Func(Columns_LNode[!column],Columns_LNode[column]);
                    copy_head_LNode=Columns_LNode[!column];
                    copy_head_ESSENT_PRIME=head_ESSENT_PRIME;
                while(copy_head_LNode)
                {
                    if(copy_head_LNode->Mark==PRIME)//�Ǳ��ʱ�Դ��
                    {
                        if(head_ESSENT_PRIME->Mark==NO_MARK)//�ж�ͷ����Ƿ񱻱��
                        {
                            for(n=0;n<Variate;n++)
                            {
                                    head_ESSENT_PRIME->Bits[n]=copy_head_LNode->Bits[n];
                                    head_ESSENT_PRIME->Mark=PRIME;
                            }
                        }
                        else
                        {
                            copy_head_ESSENT_PRIME=creatnode_LNode(head_ESSENT_PRIME);//�����µĽڵ�
                            for(n=0;n<Variate;n++)
                            {
                                    copy_head_ESSENT_PRIME->Bits[n]=copy_head_LNode->Bits[n];
                            }

                        }
                    }
                    copy_head_LNode=copy_head_LNode->next;
                }
                clearlist (Columns_LNode[!column]);
            if(Columns_LNode[column]->Mark==NO_MARK)break;//�˳�ѭ������
            column=!column;

            }
        }

        Delete_Same_node(head_ESSENT_PRIME);
        clear_Label_Sequ(head_ESSENT_PRIME,head_Mini[i]);
        LabeL_Min_Essent(head_ESSENT_PRIME,head_Mini[i]);
        //ѭ���ж��ĸ���С��ֻ�������һ�Σ�ѭ����������ı��ʱ�Դ��Ƶ�����������
        //ɾ���˱��ʱ�Դ����������������С��,�Լ����˱��ʱ�Ը��Group_Sequ��λ0
        //���±���µı��ʱ�Դ�����С��
        //�жϰ��������С��ı��ʱ�Դ�������߰�����һ���࣬ȡ��һ�������Ƶ����������
        //ɾ���˱��ʱ�Դ����������������С��,��ɾ����С���ʱ��Ҫע��ͷ����β�ڵ��ɾ��,
        //ͷ�����ѭ���������ԣ�β�ڵ�����һָ��Ϊ���ж�
        //�Լ����˱��ʱ�Ը��Group_Sequ��λ0
        //ѭ����������������С���б�Ϊ�գ�

        //Ϊ��С���һ��ͷ��㣬��ʼ��
            head_node_Minimum->data=-1;
            for(n=0;n<Variate;n++)
            {head_node_Minimum->Bits[n]=-1;}
            head_node_Minimum->Num_Label=0;
            head_node_Minimum->next=NULL;
            head_node_Minimum->next=head_Mini[i];
            Is_Label_1(Ultimate_List,head_node_Minimum,head_ESSENT_PRIME);//�Ա��ʱ�Դ��Ĵ���
            Least_Cover(Ultimate_List,head_node_Minimum,head_ESSENT_PRIME);//����С����
        //дһ���������
        printf("\n");
        Creat_Priority_Sheet(Priority_Sheet);
        Set_Priority_Mark(Ultimate_List,Priority_Sheet);
        Last_Operation(Ultimate_List);
        printf("\n");
        //�������
        clearlist(head_LNode[i]);
        clearlist(Columns_LNode[!column] );
        clearlist(Columns_LNode[column]);
        clearlist(head_ESSENT_PRIME);
        clearlist(Ultimate_List);
    }

  }
    return 0;
}
//ѭ���ж��ĸ���С��ֻ�������һ�Σ�ѭ����������ı��ʱ�Դ��Ƶ�����������
//ɾ���˱��ʱ�Դ����������������С��,�Լ����˱��ʱ�Ը��Group_Sequ��λ0
void Is_Label_1(LNode *Ultimate_List,Minimum *head_node_Minimum,LNode *head_ESSENT_PRIME)
{
      LNode *copy_Ultimate_List=Ultimate_List;
      Minimum *copy_head_node_Minimum=head_node_Minimum;
      Minimum *copy_head_node_Minimum_2=head_node_Minimum;
      LNode *copy_head_ESSENT_PRIME=head_ESSENT_PRIME;
      int i;
      while(copy_head_node_Minimum)
      {
          if(copy_head_node_Minimum->Num_Label==1)//��С��ֻ�������һ��
          {
              num_Essent_Prime++;
              while(copy_head_ESSENT_PRIME)//�ж���һ����Դ�������ֻ�����һ�ε���
            {
                      if(Is_Include(copy_head_ESSENT_PRIME,copy_head_node_Minimum))
                  {
                      //���˱��ʱ�Դ��Ƶ���������
                      if(Ultimate_List->Bits[0]==-1)
                      {
                          for(i=0;i<Variate;i++)
                          {
                              Ultimate_List->Bits[i]=copy_head_ESSENT_PRIME->Bits[i];

                          }
                      }
                      else
                      {
                          copy_Ultimate_List=creatnode_LNode(Ultimate_List);
                          for(i=0;i<Variate;i++)
                          {
                              copy_Ultimate_List->Bits[i]=copy_head_ESSENT_PRIME->Bits[i];

                          }
                      }
                      //��ͷ��ʼ�жϴ˱��ʱ�Դ�������Щ��С�ɾ��;
                      while(copy_head_node_Minimum_2)
                      {
                          if(!copy_head_node_Minimum_2->next)
                            break;
                          if(Is_Include(copy_head_ESSENT_PRIME,copy_head_node_Minimum_2->next))
                          {
                              Delete_Minimum(copy_head_node_Minimum_2);
                          }
                          else
                          {
                              copy_head_node_Minimum_2=copy_head_node_Minimum_2->next;
                          }
                      }

                        copy_head_node_Minimum_2=head_node_Minimum;
                        copy_head_ESSENT_PRIME=head_ESSENT_PRIME;
                        break;

                  }
              else{copy_head_ESSENT_PRIME=copy_head_ESSENT_PRIME->next;}
            }
            copy_head_node_Minimum=head_node_Minimum->next;
          }
          else{copy_head_node_Minimum=copy_head_node_Minimum->next;}
      }

}
//���±���µı��ʱ�Դ�����С��
//�жϰ��������С��ı��ʱ�Դ�������߰�����һ���࣬ȡ��һ�������Ƶ����������
//ɾ���˱��ʱ�Դ����������������С��,��ɾ����С���ʱ��Ҫע��ͷ����β�ڵ��ɾ��,
//ͷ�����ѭ���������ԣ�β�ڵ�����һָ��Ϊ���ж�
//�Լ����˱��ʱ�Ը��Group_Sequ��λ0
//ѭ����������������С���б�Ϊ�գ�

//Ѱ����С����
void Least_Cover(LNode *Ultimate_List,Minimum *head_node_Minimum,LNode *head_ESSENT_PRIME)
{
    LNode *copy_Ultimate_List=Ultimate_List;
    Minimum *copy_head_node_Minimum=head_node_Minimum;
    LNode *copy_head_ESSENT_PRIME=head_ESSENT_PRIME;
    int i;
    LNode *Max_Group_Sequ_ESSENT_PRIME=head_ESSENT_PRIME;
    while(head_node_Minimum->next)//��С�������л�����С��
    {
        clear_Label_Sequ(head_ESSENT_PRIME,head_node_Minimum);//������
        LabeL_Min_Essent(head_ESSENT_PRIME,head_node_Minimum);//���±��
        copy_Ultimate_List=Ultimate_List;
        copy_head_node_Minimum=head_node_Minimum;
        copy_head_ESSENT_PRIME=head_ESSENT_PRIME;
         //Ѱ�Ұ��������С��ı��ʱ�Դ��
        while(copy_head_ESSENT_PRIME)
        {
            if( (copy_head_ESSENT_PRIME->Group_Sequ) > (Max_Group_Sequ_ESSENT_PRIME->Group_Sequ) )
            {
                Max_Group_Sequ_ESSENT_PRIME=copy_head_ESSENT_PRIME;
            }
            copy_head_ESSENT_PRIME=copy_head_ESSENT_PRIME->next;
        }
        //���˱��ʱ�Դ��Ƶ���������
      if(Ultimate_List->Bits[0]==-1)
      {
          for(i=0;i<Variate;i++)
          {
              Ultimate_List->Bits[i]=Max_Group_Sequ_ESSENT_PRIME->Bits[i];

          }
          num_Prime++;
      }
      else
      {
          copy_Ultimate_List=creatnode_LNode(Ultimate_List);
          for(i=0;i<Variate;i++)
          {
              copy_Ultimate_List->Bits[i]=Max_Group_Sequ_ESSENT_PRIME->Bits[i];

          }
          num_Prime++;
      }
            while(copy_head_node_Minimum->next)

        {

                if(Is_Include(Max_Group_Sequ_ESSENT_PRIME,copy_head_node_Minimum->next))
              {

                  Delete_Minimum(copy_head_node_Minimum);
                copy_head_node_Minimum=head_node_Minimum;

             }
             else
                {
                  copy_head_node_Minimum=copy_head_node_Minimum->next;
                }
        }
    }
}
//��ӡABCD
void Print_Variate(LNode *Ultimate_List)
{
    LNode *copy_Ultimate_List=Ultimate_List;
    char a='A';
    char copy_a=a;
    int copy_Variate=Variate;
        while(copy_Variate)
        {
            if(copy_Ultimate_List->Bits[copy_Variate-1]==NONE)
            {
                copy_Variate--;
                copy_a++;
            }
            else if(copy_Ultimate_List->Bits[copy_Variate-1]==1)
            {
                copy_Variate--;
                printf("%c",copy_a);
                copy_a++;
            }
            else if(copy_Ultimate_List->Bits[copy_Variate-1]==0)
            {
                copy_Variate--;
                printf("%c",copy_a);
                printf("\'");
                copy_a++;
            }
        }

}
//��ɶ����˳��Ŀ���
//��ÿһ������λ����һ�����ȼ������ȼ�������
//����λ             ���ȼ�
//NONE                 0
//��һλ������         1
//��һλ������         2
//֮��ÿһλ������    ǰ�����б���λ���������ȼ�֮��+1
//֮��ÿһλ������    ��һλ���������ȼ�+1
void Creat_Priority_Sheet(Priority_Element Priority_Sheet[])
{
   //���10����
    int i,n,sum;
    Priority_Sheet[0].Counter_Variate_Priority=1;
    Priority_Sheet[0].Variate_Priority=2;
    for(i=1;i<Num_Bits;i++)
    {
        n=0;
        sum=0;
        for(;n<i;n++)
        {
            sum+=Priority_Sheet[n].Variate_Priority;
        }
        Priority_Sheet[i].Counter_Variate_Priority=sum+1;
        Priority_Sheet[i].Variate_Priority=2*Priority_Sheet[i].Counter_Variate_Priority;//A>A'BCDE....
   }


}
//int data;//������������˵�������ȼ���С;
//char Bits[Num_Bits];
//char Group_Sequ;
//char Mark;//_Not_yet_Printf ��δ��ӡ���   _Have_Printf�Ѿ������
//Ϊ�������������ȼ��������־//
void Set_Priority_Mark(LNode *Ultimate_List,Priority_Element Priority_Sheet[])
{
    LNode *copy_Ultimate_List=Ultimate_List;
    int i;
    while(copy_Ultimate_List)
   {
       copy_Ultimate_List->data=0;
       for(i=0;i<Variate;i++)
        {
            if(copy_Ultimate_List->Bits[i]==NONE)
            {
                (copy_Ultimate_List->data)+=0;
            }
            else if(copy_Ultimate_List->Bits[i]==1)
            {
                (copy_Ultimate_List->data)+=Priority_Sheet[i].Variate_Priority;
            }
            else if(copy_Ultimate_List->Bits[i]==0)
            {
                (copy_Ultimate_List->data)+=Priority_Sheet[i].Counter_Variate_Priority;
            }
        }
        copy_Ultimate_List->Mark=_Not_yet_Printf;
        copy_Ultimate_List=copy_Ultimate_List->next;
   }


}
//���һ�������ж��������Ƿ������δ���������������������ȼ�����һ�
//ѭ������������num_Essent_Prime���ʱ�Դ��������ʱ�Դ�������ϣ�Ȼ���Ǳ�Դ��������ȫ���������
void Last_Operation(LNode *Ultimate_List)
{
    LNode *copy_Ultimate_List=Ultimate_List;
    LNode *copy_Ultimate_List_2=Ultimate_List;
    LNode *copy_Ultimate_List_3=Ultimate_List;
    LNode *Max_Priority=Ultimate_List;
    int i,n;
    int copy_num_Prime=0;
    for(i=1;i<=num_Essent_Prime;i++)
    {
        for(n=1;n<=num_Essent_Prime;n++)//Ѱ��������ȼ�
        {
            if(copy_Ultimate_List->Mark==_Not_yet_Printf)
                {
                        if(  (copy_Ultimate_List->data) >(Max_Priority->data)  )
                    {
                        Max_Priority=copy_Ultimate_List;
                    }

                }
                copy_Ultimate_List=copy_Ultimate_List->next;

        }
        Max_Priority->Mark=_Have_Printf;
        Print_Variate(Max_Priority);
        if( (copy_Ultimate_List!=NULL )||(i!=num_Essent_Prime) )
        printf("+");
        //ΪMax_Priority��������һ��û�б���������µĳ�ʼ��
        copy_Ultimate_List=Ultimate_List;
        for(n=1;n<=num_Essent_Prime;n++)
        {
            if(copy_Ultimate_List->Mark==_Not_yet_Printf)
            {
                Max_Priority=copy_Ultimate_List;
                break;
            }
            else{copy_Ultimate_List=copy_Ultimate_List->next;}
        }
        copy_Ultimate_List=Ultimate_List;//����Ѱ��������ȼ�


    }//��ɶԱ��ʱ�Դ������
    for(n=1;n<=num_Essent_Prime;n++)
    {
        copy_Ultimate_List_2=copy_Ultimate_List_2->next;//��¼�Ǳ��ʱ�Դ��ĵ�һ��
    }
    if(copy_Ultimate_List_2!=NULL)
    {
        copy_Ultimate_List_3=copy_Ultimate_List_2;
        Max_Priority=copy_Ultimate_List_3;
    for(;;)
    {
        while(copy_Ultimate_List_3)//Ѱ��������ȼ�
        {
            if(copy_Ultimate_List_3->Mark==_Not_yet_Printf)
                {
                        if(  (copy_Ultimate_List_3->data) >(Max_Priority->data)  )
                    {
                        Max_Priority=copy_Ultimate_List_3;
                    }
                }
                copy_Ultimate_List_3=copy_Ultimate_List_3->next;

        }
        Max_Priority->Mark=_Have_Printf;
        copy_num_Prime++;
        Print_Variate(Max_Priority);
        if(copy_num_Prime<num_Prime)
        printf("+");
        //ΪMax_Priority��������һ��û�б���������µĳ�ʼ��
        copy_Ultimate_List_3=copy_Ultimate_List_2;
        while(copy_Ultimate_List_3)
        {
            if(copy_Ultimate_List_3->Mark==_Not_yet_Printf)
            {
                Max_Priority=copy_Ultimate_List_3;
                break;
            }
            else{copy_Ultimate_List_3=copy_Ultimate_List_3->next;}
        }
        if(Max_Priority->Mark==_Have_Printf)break;
        copy_Ultimate_List_3=copy_Ultimate_List_2;//����Ѱ��������ȼ�
      }
    }
}

��List_Operation.c��
#include <List_Operation.h>
#include <stdlib.h>
#include <stdio.h>
extern int Variate;
status initlist_Lnode(LNode **l, Minimum **p)
{
    *l=(LNode*)malloc(sizeof(LNode));
    *p=(Minimum*)malloc(sizeof(Minimum));
    if(!(*p) ) return ERROR;
    if(!(*l) ) return ERROR;
    (*l)->data=NO_DATA;
    (*l)->next=NULL;
    (*l)->Mark=NO_MARK;
    (*p)->data=NO_DATA;
    (*p)->next=NULL;
    (*p)->Num_Label=0;
    return OK;

}
status clearlist (LNode *l)
{
    LNode *p=l->next,*q;
    while(p)
    {
        q=p->next;
        free(p);
        p=q;
    }
    l->next = NULL;
    l->Mark=NO_MARK;
    return OK;
}
LNode* creatnode_LNode(LNode *l)
{
    LNode *copy_l;
    copy_l=l;
    while(copy_l->next)
    {
        copy_l=copy_l->next;
    }
    copy_l->next=(LNode*)malloc(sizeof(LNode));
    copy_l=copy_l->next;
    copy_l->Mark=NO_MARK;
    copy_l->next=NULL;
    return copy_l;
}
Minimum* creatnode_Minimum(Minimum *l)
{
    Minimum *copy_l;
    copy_l=l;
    while(copy_l->next)
    {
        copy_l=copy_l->next;
    }
    copy_l->next=(Minimum*)malloc(sizeof(Minimum));
    copy_l=copy_l->next;
    copy_l->next=NULL;
    copy_l->Num_Label=0;
    return copy_l;
}
void Delete_LNode(LNode *p)
{
    LNode *copy_p=p->next->next;
    free(p->next);
    p->next=copy_p;

}
void Delete_Minimum(Minimum *p)
{
    Minimum *copy_p=p->next->next;
    free(p->next);
    p->next=copy_p;

}
void _Printf_Data(LNode *l)
{
    LNode *copy_l=l;
    while(copy_l)
    {
        printf("%d",copy_l->data);
        copy_l=copy_l->next;
    }
}
void _Printf_Data_Mini(Minimum *l)
{
    Minimum *copy_l=l;
    while(copy_l)
    {
        printf("%d",copy_l->data);
        copy_l=copy_l->next;
    }
}
void _Printf_Bits(LNode *l)
{
    LNode *copy_l=l;
    int i;
    while(copy_l)
    {
        printf("     ");
        for(i=0;i<Variate;i++)
        {
            printf("%d",copy_l->Bits[i]);
        }
        printf("     ");
        copy_l=copy_l->next;
    }
}
//�ȽϺ������������һ���ڵ㿪ʼ���������Ϊ0�Ľڵ��ͷ��ʼ�����Ƿ��нڵ����Ϊ1��
//�����ж��Ƿ�Ϊ������������Ϊ�Ǳ�Դ�������ͬ��λ�ñ��Ϊ NONE
//�ж����ڷ��������ö��������飬���ֻ��һλ��ͬ����λNONE�����Ƶ�һ���µĽڵ�;
void Compare_Func(LNode *be_compare,LNode *Columns_LNode)
{
    int i=0;
    LNode *copy_be_1=be_compare;
    LNode *copy_be_2=be_compare;
    LNode *copy_be_3=be_compare;
    for(i=0;i<Variate;i++)
    {
        while(copy_be_1)
        {
            if(copy_be_1->Group_Sequ==i)//�ҵ��˵�һ�����Ϊi�Ľڵ�
            {
                copy_be_2=copy_be_1;//��ֵ
                while(copy_be_3)//��ͷ��ʼ�������Ϊi+1�Ľڵ�
                {
                   if(  (copy_be_3->Group_Sequ) ==(copy_be_2->Group_Sequ+1) )

                   {    //�Ƚϼ�¼
                        Compare_record(copy_be_2,copy_be_3,Columns_LNode,i);
                   }
                   copy_be_3=copy_be_3->next;
                }
                copy_be_3=be_compare;//��copy_be_3��λͷ���
            }
            copy_be_1=copy_be_1->next;//����һ�����Ϊi�Ľڵ�
        }
        copy_be_1=be_compare;//��copy_be_1��λͷ���
    }

}
void Compare_record(LNode *copy_be_2,LNode *copy_be_3,LNode *Columns_LNode,int group_num)
{
    int i,posion,close=0;
    LNode *p=Columns_LNode;
    for(i=0;i<Variate;i++)
    {
        if(copy_be_2->Bits[i]!=copy_be_3->Bits[i])
            {posion=i;close++;}
    }
    if(close==1)
    {
        if(p->Mark==NO_MARK)
        {
                  for(i=0;i<Variate;i++)
           {
               p->Bits[i]=copy_be_2->Bits[i];
           }
           p->Bits[posion]=NONE;
           p->Mark=PRIME;
           p->Group_Sequ=group_num;
        }
       else
       {
            p=creatnode_LNode(Columns_LNode);
           for(i=0;i<Variate;i++)
           {
               p->Bits[i]=copy_be_2->Bits[i];
           }
           p->Bits[posion]=NONE;
           p->Mark=PRIME;
           p->Group_Sequ=group_num;
       }
        copy_be_2->Mark=NO_PRIME;
        copy_be_3->Mark=NO_PRIME;
    }

}
void Delete_Same_node(LNode *p)
{
    LNode *copy_p_1=p,*copy_p_2=p;
    while(copy_p_1)
    {
        copy_p_2=copy_p_1;
        while(copy_p_2->next)
        {

            if(Is_Same(copy_p_1,copy_p_2->next) )
            {
                Delete_LNode(copy_p_2);
            }
            else{copy_p_2=copy_p_2->next;}
        }
        copy_p_1=copy_p_1->next;
    }

}
int Is_Same(LNode *p2,LNode *p1)
{
    int i;
    for(i=0;i<Variate;i++)
    {
        if(p1->Bits[i]!=p2->Bits[i])
        {
            return 0;
        }
    }
    return 1;

}
void LabeL_Min_Essent(LNode *head_ESSENT_PRIME,Minimum *head_Mini)
{
    LNode *copy_head_ESSENT_PRIME=head_ESSENT_PRIME;
    Minimum *copy_head_Mini=head_Mini;
    while(copy_head_ESSENT_PRIME)
    {
        copy_head_Mini=head_Mini;
        while(copy_head_Mini)
        {
            if(Is_Include(copy_head_ESSENT_PRIME,copy_head_Mini))
            {
                copy_head_ESSENT_PRIME->Group_Sequ++;//���ʱ�Դ�������С���һ
                copy_head_Mini->Num_Label++;//��С���ǵĴ�����һ
            }
            copy_head_Mini=copy_head_Mini->next;
        }
        copy_head_ESSENT_PRIME=copy_head_ESSENT_PRIME->next;
    }

}
int Is_Include(LNode *copy_head_ESSENT_PRIME,Minimum *copy_head_Mini)
{
    int i;
    for(i=0;i<Variate;i++)
    {
        if(copy_head_ESSENT_PRIME->Bits[i]!=NONE)
        {
            if(copy_head_ESSENT_PRIME->Bits[i]!=copy_head_Mini->Bits[i])
            {
                return 0;
            }
        }
    }

    return 1;
}
void clear_Label_Sequ(LNode *head_ESSENT_PRIME,Minimum *head_Mini)
{
    LNode *copy_head_ESSENT_PRIME=head_ESSENT_PRIME;
    Minimum *copy_head_Mini=head_Mini;
    while(copy_head_ESSENT_PRIME)
    {
        copy_head_ESSENT_PRIME->Group_Sequ=0;
        copy_head_ESSENT_PRIME=copy_head_ESSENT_PRIME->next;
    }
    while(copy_head_Mini)
    {
        copy_head_Mini->Num_Label=0;
        copy_head_Mini=copy_head_Mini->next;
    }

}
 ��List_Operation.h��

typedef char status;
#define Num_Bits 10
#define FALSE 0
#define TRUE 1
#define OK 1
#define ERROR 0
#define INFEASIBLE -1
#define OVERFLOW -2
//��С�� �޹ؽڵ�����
#define NONE 2
//���
#define NO_PRIME 0//�Ǳ�Դ��
#define PRIME 1//��Դ��
#define NO_MARK -1
#define NO_DATA -1
#ifndef LIST_OPRATION_H
#define LIST_OPRATION_H
typedef struct Lnode
{
    int data;
    char Bits[Num_Bits];
    char Group_Sequ;//���ڱ��ʱ�Դ����˵���ǰ�������С�����
    char Mark;
    struct Lnode *next;
}LNode;
//��С������
typedef struct MInimum
{
    int data;
    char Bits[Num_Bits];
    char Num_Label;
    struct MInimum *next;
}Minimum;
#endif // LIST_OPRATION_H

//��ʼ��
status initlist_Lnode(LNode **l,Minimum **p);
status clearlist (LNode *l);
LNode *creatnode_LNode(LNode *l);
Minimum *creatnode_Minimum(Minimum *l);
void _Printf_Data(LNode *l);
void _Printf_Bits(LNode *l);
void _Printf_Data_Mini(Minimum *l);
//�ȽϺ������������һ���ڵ㿪ʼ���������Ϊ0�Ľڵ��ͷ��ʼ�����Ƿ��нڵ����Ϊ1��
//�����ж��Ƿ�Ϊ������������Ϊ�Ǳ�Դ�������ͬ��λ�ñ��Ϊ NONE
//�ж����ڷ��������ö��������飬���ֻ��һλ��ͬ����λNONE�����Ƶ�һ���µĽڵ�;
void Compare_Func(LNode *be_compare,LNode *Columns_LNode);
void Compare_record(LNode *copy_be_2,LNode *copy_be_3,LNode *Columns_LNode,int group_num);
void Delete_LNode(LNode *p);
void Delete_Same_node(LNode *p);
int Is_Same(LNode *p2,LNode *p1);
void LabeL_Min_Essent(LNode *d_ESSENT_PRIME,Minimum *head_Mini);
int Is_Include(LNode *copy_head_ESSENT_PRIME,Minimum *copy_head_Mini);
void clear_Label_Sequ(LNode *head_ESSENT_PRIME,Minimum *head_Mini);
void Delete_Minimum(Minimum *p);

 ��Input.c��

#include <List_Operation.h>
#include <Input.h>
#include <stdio.h>
int Variate;
int int_power(int x,int n)
{
    int i,x_n=1;
    if(n==0) return 1;
    for(i=1;i<=n;i++)
    {
        x_n*=x;
    }
    return x_n;
}
//�жϱ����ĸ���
void Num_Variate(LNode *p)
{
    int max=0,i,x=2;
    LNode *copy_p;
    copy_p=p;
    while(copy_p)
    {
        if(copy_p->data>max)
        {
            max=copy_p->data;
        }
        copy_p=copy_p->next;
    }
    for(i=0;max>int_power(x,i);i++);
    Variate = i;
}
//�ѱ�������������λ��������
void Reslove_LNode(LNode *p)
{
    int i,x=2,Num_1=0;
    LNode *copy_p=p;
    while(copy_p)
    {   for(i=0;i<Variate;i++)
        {
            if(int_power(x,i)&(copy_p->data) )
            {
                copy_p->Bits[i]=1;
                Num_1++;
            }
            else{copy_p->Bits[i]=0;}
        }
        copy_p->Group_Sequ=Num_1;
        Num_1=0;
        copy_p=copy_p->next;
    }
}
void Reslove_Mini(Minimum *p)
{
    int i,x=2;
    Minimum *copy_p=p;
    while(copy_p)
    {   for(i=0;i<Variate;i++)
        {
            if(int_power(x,i)&(copy_p->data) )
            {
                copy_p->Bits[i]=1;
            }
            else{copy_p->Bits[i]=0;}
        }
        copy_p->Num_Label=0;
        copy_p=copy_p->next;
    }
}
//�û�������С���ֵ
void Receive(LNode **head_LNode,Minimum **head_Mini,int Num_min,int Num_Irelev)
{
     int i;
     initlist_Lnode(head_LNode,head_Mini);
     LNode *cur_LNode;
     Minimum  *cur_Minimum;
     (*head_LNode)->data=-1;
     for(i=1;i<=Num_min;i++)
     {
         if((*head_LNode)->data==-1)
         {
             scanf("%d",&((*head_LNode)->data)) ;
             (*head_Mini)->data=(*head_LNode)->data;
             (*head_LNode)->Mark=PRIME;
             continue;
         }
         else
         {
         cur_LNode=creatnode_LNode(*head_LNode);
         cur_Minimum=creatnode_Minimum(*head_Mini);
         scanf("%d",&(cur_LNode->data));
         cur_Minimum->data=cur_LNode->data;
         cur_LNode->Mark=PRIME;
         }


     }
     for(i=1;i<=Num_Irelev;i++)
    {
            cur_LNode=creatnode_LNode(*head_LNode);
            scanf("%d",&(cur_LNode->data));
            cur_LNode->Mark=PRIME;
    }
}
��Input.h��
#include <List_Operation.h>
int int_power(int x,int n);
void Num_Variate(LNode *p);
void Reslove_LNode(LNode *p);
void Reslove_Mini(Minimum *p);
void Receive(LNode **head_LNode,Minimum **head_Mini,int Num_min,int Num_Irelev);
