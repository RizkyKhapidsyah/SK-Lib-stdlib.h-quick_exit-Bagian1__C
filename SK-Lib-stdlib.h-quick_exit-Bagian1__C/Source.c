#pragma warning(disable:4996)

#include <stdio.h>      
#include <stdlib.h>     
#include <conio.h>

/*
	Source by CPlusPlus (https://www.cplusplus.com)
	Modified For Learn by RK
	I.D.E : VS2022
*/

void fnQExit(void) {
	puts("Quick exit function.");
}

int main() {
	at_quick_exit(fnQExit);
	puts("Main function: Beginning");
	quick_exit(EXIT_SUCCESS);
	puts("Main function: End");  //tidak pernah dieksekusi
	_getch();
	return 0;
}