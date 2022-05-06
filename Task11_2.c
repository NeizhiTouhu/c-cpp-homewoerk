#include <stdio.h>
#include <string.h>

 int main(void)
 {
	 int type=-1;
	char file_name[1000];
	FILE *f_inp;
	FILE *f_outp;
	char temp;
	
	printf("Please enter:\n1) for text file.\n2) for binary file.\n>");
	scanf(" %d",&type);
	if(type==1){
		printf("Please enter the file name(XXXXXX.XXX).>");
		scanf("%s",&file_name);
		if((f_inp=fopen(file_name,"r"))==NULL)
		{
			printf("Can't find the file which called *%s*.\n",file_name);
			return 1;
		}
		printf("Please enter the file name of copy(XXXXXX.XXX).>");
		scanf("%s",&file_name);
		f_outp=fopen(file_name,"w");
		while ((temp=fgetc(f_inp))!=EOF)
		{
			fputc(temp,f_outp);
		}
		fclose(f_inp);
		fclose(f_outp);
		return 0;
	}
	else if(type==2){
		printf("Please enter the file name(XXXXXX.XXX).>");
		scanf("%s",&file_name);
		if((f_inp=fopen(file_name,"rb"))==NULL)
		{
			printf("Can't find the file which called *%s*.\n",file_name);
			return 1;
		}
		printf("Please enter the file name of copy(XXXXXX.XXX).>");
		scanf("%s",&file_name);
		f_outp=fopen(file_name,"wb");
		while ((temp=fgetc(f_inp))!=EOF)
		{
			fputc(temp,f_outp);
		}
		fclose(f_inp);
		fclose(f_outp);
		return 0;
	}
	else
		printf("Please enter the right number!");
 }
