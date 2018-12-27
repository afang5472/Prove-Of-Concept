#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<unistd.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<fcntl.h>

//author : afang
//comment: what a nice day, isn't it?!
//functionality:
//cat</bin/sh

int main(){

	char *argvlist[2];
	argvlist[0] = "cat";
	argvlist[1] = 0;
	if(fork() == 0){
		close(0);
		open("/bin/sh", O_RDONLY);
		execve("/bin/cat", argvlist, NULL);
	}
	return 0;
}
