#include <stdio.h>
#include <stdlib.h>

int x;

void teste() {
	x = 4;
	printf("%d\n", x);
}

int main() {
	x = 3;
	teste();
	printf("%d\n", x);
	return 0;
}
