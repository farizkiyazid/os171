/*
 * Name: Farizki Yazid
 * NPM: 1506757945
 * Class: c
 * Comment: no comment
 */

#define LOOP 4 //define me!

#include <stdio.h>

void main(){
	int input;
	scanf("[%i]",input);
	int product = 0;
	int i;
	for(i=0; i<=LOOP; i++){
		product+=input;
	}
	printf("[%i] \n", product);
}
