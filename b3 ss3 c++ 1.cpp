#include <stdio.h>
int main (){
	float mark_math,mark_literature,mark_english;
	printf ("nhap diem cac mon vao ");
	scanf ("%f %f %f", &mark_math, &mark_literature, &mark_english);
	printf ("\nmarkmath=%.2f, marliterature=%.2f, english=%.2f,avemark=%.2f", mark_math, mark_literature, mark_english, (mark_math+mark_english+mark_literature)/3);
}	 
	
