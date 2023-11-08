#include <stdio.h>
int main (){
	int n1,n2,n3,max,min;
	printf ("nhap cac so vao");
	scanf ("%d%d%d",&n1,&n2,&n3);
	max=n1;
	min=n1;
	max= max>n2? max:n2;
	max= max>n3? max:n3;
	min= min<n2? min:n2;
	min= min<n3? min:n3;
	printf ("so lon nhat=%d",max);
	printf ("\nso nho nhat=%d",min);
}
	
	
	
	
	






	
	
	

