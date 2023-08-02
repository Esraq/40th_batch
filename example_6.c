#include<stdio.h>
int main(){
	
	
   double a,b,add,substract,mul,div;
   
   printf("Enter the value of a:");
   scanf("%lf",&a);
   printf("Enter the value of b:");
   scanf("%lf",&b);
   
   
   
   
   add=a+b;	
   substract=a-b;
   mul=a*b;
   div=a/b;
   
   printf("Add=%.2lf\n",add);
   printf("Substract=%.2lf\n",substract);
   printf("Multipication=%.2lf\n",mul);
   printf("Division=%.2lf\n",div);
	
	
	return 0;
}
