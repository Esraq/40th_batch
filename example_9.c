#include<stdio.h>
int main(){
	
	float cgpa,ielts_score;
	
	printf("Enter cgpa:");
	scanf("%f",&cgpa);
	printf("Enter ielts score:");
	scanf("%f",&ielts_score);
	
	if(cgpa>=3.75 || ielts_score>=7.0){
		
		printf("You will get scholarship");
		
	}
	
	else{
		
		printf("No Scholarship");
	}
	
	
	
	return 0;
}
