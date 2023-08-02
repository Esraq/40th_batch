#include<stdio.h>
int main(){
	
	
   float a,b,add,substract,mul,div;
   
   printf("Enter the value of a:");
   scanf("%f",&a);
   printf("Enter the value of b:");
   scanf("%f",&b);
   
   
   
   
   add=a+b;	
   substract=a-b;
   mul=a*b;
   div=a/b;
   
   printf("Add=%.2f\n",add);
   printf("Substract=%.2f\n",substract);
   printf("Multipication=%.2f\n",mul);
   printf("Division=%.2f\n",div);
	
	
	return 0;
}
