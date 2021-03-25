//结构体初始化 
	struct student
	{char name[20];   
	float s[3];   
	float ave;
	}stu[3]={“li”, 70,80,90,0, “wang”,83,94,75,0, 
             “zhang”,92,86,89,0};

//结构体指针
	 struct Data{
	 	int a,b,c;
	 };
	 struct Data *p;
	 struct Data A = {1,2,3};
	 int x;
	 p = &A;
	 x = p->a;//取p所指向结构体中的a赋值给x
	
//函数内使用结构体指针
	void f(strct tree *t){
		t->x=10;
		strcpy(t->s,"tcomputer");
	}
	
	
	 
