#include <stdio.h>
#include <string.h>

void out_sceen(void);

int main(void)
{
	int type,status=1,get=0;
	FILE *fp;
	typedef struct
	{
		char name[26];
		double max_cruise_speed;
		double wingspan,length;
		char military_civilian;
		char descriptive_phrase[81];
	}plane_information;
	plane_information stu;
	if((fp=fopen("plane.bin","rb"))==NULL)
	{
		printf("Can't find the file which called *plane.bat*.\n");
		return 1;
	}
	printf("(1)The name of the plane\n(2)The max cruise speed\n(3)The wingspan of the plane\n(4)the length of the plane\n(5)the character of the plane\n");
	printf("Please select the type you want to enter. >");
	scanf(" %d",&type);
	if(type==1){
		char name[26];
		printf("\nPlease enter the name.>");
		gets(name);
		gets(name);
		status = fread(&stu,sizeof(plane_information),1,fp);
		while(status>0){
			if (strcmp(stu.name, name)==0)
			{
				printf("\nThe information of this plane is:\nname:%s\nmax cruise speed:%.2lf\nwingspan,lnegth,military/civilian:%.2lf %.2lf %c\n%s\n",
					stu.name,
					stu.max_cruise_speed,
					stu.wingspan,
					stu.length,
					stu.military_civilian,
					stu.descriptive_phrase);
				get = 1;
			}
			status = fread(&stu,sizeof(plane_information),1,fp);
		}
	}
	else if(type==2){
		double max_cruise_speed;
		printf("\nPlease enter the max cruise speed.>");
		scanf(" %lf",&max_cruise_speed);
		status = fread(&stu,sizeof(plane_information),1,fp);
		while(status>0){
			if (max_cruise_speed==stu.max_cruise_speed)
			{
				printf("\nThe information of this plane is:\nname:%s\nmax cruise speed:%.2lf\nwingspan,lnegth,military/civilian:%.2lf %.2lf %c\n%s\n",
					stu.name,
					stu.max_cruise_speed,
					stu.wingspan,
					stu.length,
					stu.military_civilian,
					stu.descriptive_phrase);
				get = 1;
			}
			status = fread(&stu,sizeof(plane_information),1,fp);
		}
	}
	else if(type==3){
		double wingspan;
		printf("\nPlease enter the wingspan.>");
		scanf(" %lf",&wingspan);
		status = fread(&stu,sizeof(plane_information),1,fp);
		while(status>0){
			if (wingspan==stu.wingspan)
			{
				printf("\nThe information of this plane is:\nname:%s\nmax cruise speed:%.2lf\nwingspan,lnegth,military/civilian:%.2lf %.2lf %c\n%s\n",
					stu.name,
					stu.max_cruise_speed,
					stu.wingspan,
					stu.length,
					stu.military_civilian,
					stu.descriptive_phrase);
				get = 1;
			}
			status = fread(&stu,sizeof(plane_information),1,fp);
		}
	}
	else if(type==4){
		double length;
		printf("\nPlease enter the length.>");
		scanf(" %lf",&length);
		status = fread(&stu,sizeof(plane_information),1,fp);
		while(status>0){
			if (length==stu.length)
			{
				printf("\nThe information of this plane is:\nname:%s\nmax cruise speed:%.2lf\nwingspan,lnegth,military/civilian:%.2lf %.2lf %c\n%s\n",
					stu.name,
					stu.max_cruise_speed,
					stu.wingspan,
					stu.length,
					stu.military_civilian,
					stu.descriptive_phrase);
				get = 1;
			}
			status = fread(&stu,sizeof(plane_information),1,fp);
		}
	}
	if(type==5){
		char military_civilian;
		printf("\nPlease enter the name.>");
		scanf(" %c",&military_civilian);
		status = fread(&stu,sizeof(plane_information),1,fp);
		while(status>0){
			if (military_civilian==stu.military_civilian)
			{
				printf("\nThe information of this plane is:\nname:%s\nmax cruise speed:%.2lf\nwingspan,lnegth,military/civilian:%.2lf %.2lf %c\n%s\n",
					stu.name,
					stu.max_cruise_speed,
					stu.wingspan,
					stu.length,
					stu.military_civilian,
					stu.descriptive_phrase);
				get = 1;
			}
			status = fread(&stu,sizeof(plane_information),1,fp);
		}
	}
	if(get!=1){
		printf("\nCan't find the result!");
	}
	fclose(fp);
	return 0;
}
