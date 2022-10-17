#include <stdio.h>
#include "hello_funs.h"


void say_smthg_to_smn (const char* smthg, const char* smn){
	printf("%s %s!\n", smthg, smn);
}

void say_hello(const char* to_who){
	say_smthg_to_smn("hello", to_who);
}

void happy_new_year(const char* to_who){
	say_smthg_to_smn("happy new year", to_who);
}

void say_hbd(const char* to_who){
	say_smthg_to_smn("happy birthday", to_who);

}