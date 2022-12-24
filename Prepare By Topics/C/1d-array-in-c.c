#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	int n, *a, result = 0;
	scanf("%d", &n);
	a = (int*) malloc(n * sizeof(int));
	for (int i = 0; i < n; i++) {
		scanf("%d", a + i);
	}
	for (int i = 0; i < n; i++) {
		result += *(a + i);
	}
	printf("%d", result);
	return 0;
}
