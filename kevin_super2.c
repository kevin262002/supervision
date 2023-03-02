#include<stdio.h>
#include<string.h>

int main(){
	
	FILE *p;
	
	char a;
	
	p = fopen("Demo.txt","r");
	
	if(p == NULL){
		
		printf("Error");
	}
	else{
		
		while(a!=EOF){
			
			a=fgetc(p);
			printf("%c",a);
		}
		fclose(p);
		}
		
}
