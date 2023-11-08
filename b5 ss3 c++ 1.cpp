#include <stdio.h>

int main (){
	int inputNumber,unit,dozen,hundred,thousand;
	printf ("nhap vao 1 so ");
	scanf("%d",&inputNumber);
	unit = inputNumber%10;
	dozen=(inputNumber/10)%10;
	hundred=(inputNumber/100)%10;
	thousand=inputNumber/1000;
	printf ("\ntong cac so %d",unit+dozen+hundred+thousand);
	printf ("\n day so dao nguoc %d",unit*1000 +dozen*100+ hundred*10 +thousand);
}
