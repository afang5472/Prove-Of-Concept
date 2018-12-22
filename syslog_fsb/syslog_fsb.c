#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<syslog.h>
//author : afang
//comment: what a nice day, isn't it?!

int main(){

	syslog(3, "hello, fsb: %p%p%p%p%p\n");
	return 0;
}

