#include <stdio.h>

void swap(int a, int b) {
	int temp = a;
	int a = b;
	int b = temp;
}

int main() {
	int a = 5;
	int b = 10;

	printf("a=%d, b=%d\n", a, b);

	swap(a, b);

	printf("a=%d, b=%d\n", a, b);

	return 0;
}
