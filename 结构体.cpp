//�ṹ���ʼ�� 
	struct student
	{char name[20];   
	float s[3];   
	float ave;
	}stu[3]={��li��, 70,80,90,0, ��wang��,83,94,75,0, 
             ��zhang��,92,86,89,0};

//�ṹ��ָ��
	 struct Data{
	 	int a,b,c;
	 };
	 struct Data *p;
	 struct Data A = {1,2,3};
	 int x;
	 p = &A;
	 x = p->a;//ȡp��ָ��ṹ���е�a��ֵ��x
	
//������ʹ�ýṹ��ָ��
	void f(strct tree *t){
		t->x=10;
		strcpy(t->s,"tcomputer");
	}
	
	
	 
