#include<stdio.h>

void main(){
	float salary,HRA,DA,GS;
	printf("enter basic salary : ");
	scanf("%f", &salary);
	if(salary>=10000&&salary<20000){
		GS = salary + 0.2*(salary) + 0.8*(salary);
		printf("the gross salary is : %f",GS);
	}
	else if(salary>=20000&&salary<30000){
	    GS = salary + 0.25*(salary) + 0.9*(salary);
		printf("the gross salary is : %f",GS);	
	}
	else if(salary>=30000){
	    GS = salary + 0.3*(salary) + 0.95*(salary);
		printf("the gross salary is : %f",GS);	
	}
}
