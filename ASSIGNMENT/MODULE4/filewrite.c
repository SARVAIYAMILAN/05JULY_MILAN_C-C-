#include<stdio.h>
int main(){
	FILE *fptr;
	char str[100];
	fptr = fopen("C:/Users/APURVA/Documents/hello.txt","r");
	fscanf(fptr,"%s",&str);
	printf(str);
}
