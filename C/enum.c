

//Enumeration in C is a user defined datatype which assigns name to integral constants.




#include<stdio.h>

enum week{Mon=1, Tue, Wed, Thur, Fri, Sat, Sun};
//enum days{day1,day2,Wed};

//In the scope the different enums doesnt contain same enum constants
int main()
{
	enum week day;
	day = Wed;
	printf("%d",day);
	return 0;
} 

