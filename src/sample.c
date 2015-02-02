/*
 ============================================================================
 Name        : sample.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#include "../headers/mod_main.h"


int main(int argc, char *argv[]) {
	int coef = 10;
	int a = 2;
	int b = 2;
	int result = 0;

	int c;
	//char *cvalue = NULL;

	// set init args
	/* printf("argc = %d\n", argc);
	 * for(int i=1; i < argc; i++) {
		printf("argv[%d] = %s\n", i, argv[i]);
	}*/

	while ((c = getopt (argc, argv, "a:b:c:")) != -1) {
		switch (c) {
	      case 'a':
	        a = atoi(optarg);
	        printf("a = %d\n", a);
	        break;
	      case 'b':
	        b = atoi(optarg);
	        printf("b = %d\n", b);
	        break;
	      case 'c':
	    	coef = atoi(optarg);
	        printf("coef = %d\n", coef);
	        break;
	      default:
	    	printf("\nInvalid option received");
		}
	}


	result = MainModule(coef,a,b);

	printf("Result is %d", result);

	return EXIT_SUCCESS;
}
