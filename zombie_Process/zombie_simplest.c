#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<unistd.h>

//author : afang
//comment: what a nice day, isn't it?!
//compile: gcc -o ./zombie_simplest ./zombie_simplest.c

int main(){

	pid_t pid = fork();
	if(pid < 0){
		perror("Create process failed.\n");
	}else if(pid == 0){
		//let child exit before parent.
		printf("Child running and exit now.\n");
		exit(0);
	}else{
		//parent do not call wait.
		printf("Parent is in looping sleep.\n");
		while(1){
		sleep(5);
		}	
	}
	return 0;
}

