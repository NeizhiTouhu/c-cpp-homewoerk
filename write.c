#include <stdio.h>
#include <string.h>

int main(void)
{
	int type,status=1;
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
	
	
	if((fp=fopen("plane.bin","wb"))==NULL)
	{
		printf("Can't find the file which called *plane.bat*.\n");
		return 1;
	}
	

		strcpy(stu.name, "SR-71 Blackbird");
		stu.max_cruise_speed=3500;
		stu.wingspan=16.95;
		stu.length=32.74;
		stu.military_civilian='M';
		strcpy(stu.descriptive_phrase, "high-speed strategic reconnaissance");
		fwrite(&stu,sizeof(plane_information),1,fp);
		printf("\n");

		
		strcpy(stu.name, "EF-111A Raven");
		stu.max_cruise_speed=2280;
		stu.wingspan=19.21;
		stu.length=23.16;
		stu.military_civilian='M';
		strcpy(stu.descriptive_phrase, "electronic warfare");
		fwrite(&stu,sizeof(plane_information),1,fp);
		printf("\n");
		
		strcpy(stu.name, "Concorde");
		stu.max_cruise_speed=2140;
		stu.wingspan=25.61;
		stu.length=62.2;
		stu.military_civilian='C';
		strcpy(stu.descriptive_phrase, "supersonic airliner");
		fwrite(&stu,sizeof(plane_information),1,fp);
		printf("\n");
		
	fclose(fp);
	
	return 0;
}
