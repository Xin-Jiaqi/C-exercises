/*�ļ�

�ı��ļ����ĸ��ֽڣ����ASC����ֵ 
 
�ļ�ָ�룺FILE *fp
*/
���ļ� 
	if((fp = fopen("f1.txt","w")) == NULL){
		printf("File open error!\n");
		exit(0);
	}
	
�ر��ļ� 
	if(fclose(fp)){			����ʧ�ܷ���EOF��-1�� 
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
	int fread(char *buffer, int size, int count, FILE *fp)		buffer����Ŷ�/д���ݵ���ʼ��ַ��
	if( fread(myarr, sizeof(int), 100, fp) !=100 ){
		exit(0);
	}   �Ӽ��ж�100��������,�������Ƿŵ�myarr������
	
fwrite
	int fwrite (char  *buffer, int size,int count,FILE *fp)
	
fgets
	char * fgets(char *buff,int n,FILE*fp )
	
fputs
	int  fputs(char *str,FILE *fp )
	scanf("%s",st);
	fputs(st,fp); 
	
fscanf
	fscanf(fp,��%d,%f��,&i,&f);
	
fprintf
	fprintf(fp,��%3d,%6.1f��,i,f);
	for(i=0;i<NO;i++){
		fprintf(fp,��%s %d %d %d %5.1f\n��,
    			stud[i].name,stud[i].score[0],
    			stud[i].score[1],stud[i].score[2],
    			stud[i].ave);
	}
  	printf(��\n��);

/*�ļ����������
	rewind( )����
	void  rewind(FILE *fp)
	��λ��ָ���Ƶ��ļ��ס�
	fseek(  )����
	int fseek(FILE *fp,long offset,int base)
	����㿪ʼ����λ��ָ���ƶ��ƶ���λ����
*/


