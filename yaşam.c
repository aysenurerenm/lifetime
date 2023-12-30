#include<stdio.h>
#include<stdlib.h>
struct date{
	int day,month,year;
};
int invalid(struct date,struct date);
int main(){
	struct date now;
	struct date birth;
	do{
		printf("todays date:");scanf("%d %d %d",&now.day,&now.month,&now.year);
	    printf("birth date:");scanf("%d %d %d",&birth.day,&birth.month,&birth.year);
	} while (!invalid(now,birth));

	if(birth.day>now.day){
		now.day+=30;
		now.month--;
	}
	if(birth.month>now.month){
		now.year--;
		now.month+=12;
	}
	if(birth.year>now.year){
		printf("this is imposible did'nt you born yet?!\n");
		exit(0);
	}
	printf("you are lived %d day %d month and %d year",now.day-birth.day,now.month-birth.month,now.year-birth.year);


	
}
int invalid(struct date now, struct date birth){
	if(now.month>12||now.day>31||birth.month>12||birth.day>31){
		printf("a month has most 31 day and a year has 12 month please enter correct date\n");
		return 0;}
	else
	return 1;
	}

