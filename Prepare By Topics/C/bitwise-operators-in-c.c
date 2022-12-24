#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void calculate_the_maximum(int n, int k) {
	unsigned int a, b;
	int max_and = 0, max_or = 0, max_xor = 0;
	for (int i = 1; i < n; i++) {
		for (int j = i + 1; j <= n; j++) {
			a = i;
			b = j;
			if ((a & b) > max_and && (a & b) < k) {
				max_and = a & b;
			}
			if ((a | b) > max_or && (a | b) < k) {
				max_or = a | b;
			}
			if ((a ^ b) > max_xor && (a ^ b) < k) {
				max_xor = a ^ b;
			}
		}
	}
	printf("%d\n", max_and);
	printf("%d\n", max_or);
	printf("%d", max_xor);
}

int main() {
	int n, k;

	scanf("%d %d", &n, &k);
	calculate_the_maximum(n, k);

	return 0;
}
