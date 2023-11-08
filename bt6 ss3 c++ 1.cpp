#include <stdio.h>
int main (){
	int year,tuoi;
	const int current_year = 2023;
	printf ("nhap vao nam sinh ");
	scanf("%d",&year);
	printf ("tuoi hien tai cua ban la %d \n",current_year-year);
	tuoi=current_year-year;
	int i;
	i= tuoi%2==0 ? printf ("chãn"):printf ("le");
}
	


