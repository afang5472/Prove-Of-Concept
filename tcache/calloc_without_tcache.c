#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//author : afang
//comment: what a nice day, isn't it?!

int main(){

	char *temp1 = calloc(1,100);
	char *temp2 = calloc(1,100);
	free(temp1);
	char *temp3 = calloc(1,100);
	getchar();
	return 0;
}

