#include <stdio.h>

int main() {
	int x;
	scanf("%d", &x);

	int r = 1;

	while (1) {
		if (r * (r + 1) / 2 >= x) break;
		++r;
	}

	int s = (r - 1) * r / 2;
	int i = x - s;
	int j = r + 1 - i;

	if (r % 2)
		printf("%d/%d\n", j, i);
	else
		printf("%d/%d\n", i, j);

	return 0;
}
