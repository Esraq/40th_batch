#include<stdio.h>
int main(){
	
	int a,b,c;
	
	printf("Enter the value of a:");
    scanf("%d",&a);
    printf("Enter the value of b:");
    scanf("%d",&b);
    printf("Enter the value of c:");
    scanf("%d",&c);
    
    
    if(a>b && a>c){
    	
    	printf("a is bigger");
	}
	else if(b>a && b>c && b>d){
		
		printf("b is bigger");
	}
	
	else{
		
		printf("c is bigger");
		
	}
	return 0;
}
