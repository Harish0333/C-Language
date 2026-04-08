#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a = 3;
    int b = ++a + a++ + --a;// 5+ 3+4
    printf("Value of b is %d", b);
	return 0;
}
