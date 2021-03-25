/*文件

文本文件：四个字节，存放ASCⅡ码值 
 
文件指针：FILE *fp
*/
打开文件 
	if((fp = fopen("f1.txt","w")) == NULL){
		printf("File open error!\n");
		exit(0);
	}
	
关闭文件 
	if(fclose(fp)){			调用失败返回EOF（-1） 
		printf("Can not close the file!\n");
		exit(0);
	}

fgetc	
	int fgetc(FILE *fp)
	while((c = fgetc(fp)) != EOF){
		printf("%c",C);
	}
	
fputc
	int fputc(char ch,FILE *fp)
	while(ch[i] != '\0'){
		fputc(ch[i++],fp);
	}
	
fread
	int fread(char *buffer, int size, int count, FILE *fp)		buffer：存放读/写数据的起始地址。
	if( fread(myarr, sizeof(int), 100, fp) !=100 ){
		exit(0);
	}   从件中读100个整型数,并把它们放到myarr数组中
	
fwrite
	int fwrite (char  *buffer, int size,int count,FILE *fp)
	
fgets
	char * fgets(char *buff,int n,FILE*fp )
	
fputs
	int  fputs(char *str,FILE *fp )
	scanf("%s",st);
	fputs(st,fp); 
	
fscanf
	fscanf(fp,“%d,%f”,&i,&f);
	
fprintf
	fprintf(fp,“%3d,%6.1f”,i,f);
	for(i=0;i<NO;i++){
		fprintf(fp,“%s %d %d %d %5.1f\n”,
    			stud[i].name,stud[i].score[0],
    			stud[i].score[1],stud[i].score[2],
    			stud[i].ave);
	}
  	printf(“\n”);

/*文件的随机操作
	rewind( )函数
	void  rewind(FILE *fp)
	将位置指针移到文件首。
	fseek(  )函数
	int fseek(FILE *fp,long offset,int base)
	从起点开始，将位置指针移动制定的位移量
*/


