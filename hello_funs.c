#include <stdio.h>
#include "hello_funs.h"

void say_hello(const char* to_who){
	printf("hello %s!\n",to_who);
}

void say_hbd(const char* to_who){
	printf("Happy birthday %s!\n",to_who);
}