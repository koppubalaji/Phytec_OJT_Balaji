



#include<stdio.h>


struct date{
	int day;
	int month;
	int year;
};

int isleapyear(int year){
	if(year%4==0 && year%100!=0 || year%400==0)
		return 1;
	else
		return 0;
}

int validdate(struct date date1){
	
	int daysinmonth[]={31,28,31,30,31,30,31,31,30,31,30,31};
	if(date1.year<1)
		return 0;

	if(date1.month<1 || date1.month>12)
		return 0;
	if(date1.month=2){
		if(isleapyear(date1.year))
		{
			if(date1.day<1 || date1.day>29)
				return 0;
		}
		else{
			if(date1.day<1 || date1.day>28)
				return 0;
		}
	}
	else{
		if(date1.day<1 || date1.day>daysinmonth[date1.month-1])
			return 0;
	}

	return 1;
}
int displaydate(struct date date1){

	printf("%02d-%02d-%04d",date1.day,date1.month,date1.year);

}




int main(){




	struct date date1,date2;

	printf("Enter date in dd-mm-yy format : ");
	scanf("%d-%d-%d",&date1.day,&date1.month,&date1.year);
	

	if(!validdate(date1))
		printf("Invalid Date");
	else
		displaydate(date1);


}
