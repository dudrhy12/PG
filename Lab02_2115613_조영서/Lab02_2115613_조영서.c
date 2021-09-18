#include <stdio.h>

void strmul(char to[], char from[],int k);
void strsum(char to[], char from1[], char from2[]);

main() {
	char s[100], t[100], u[100];

	strmul(t, "abc", 2);
	strmul(u, "DE", 3);
	strsum(s, t, u);
	printf("Ãâ·Â: %s\n", s);

	return 0;
}

void strmul(char to[], char from[], int k) {
	int i, j, n;

	j = 0;
	for (n = 1; n <= k; n = n + 1) {
		i = 0;
		while ((to[j] = from[i]) != '\0') {
			++i;
			++j;
		}
	}
}

void strsum(char to[], char from1[], char from2[]) {
	int i, j;
	i = 0;
	while ((to[i] = from1[i]) != '\0') {
		++i;
	}
	j = 0;
	while ((to[i] = from2[j]) != '\0') {
		i++;
		j++;
	}
}
