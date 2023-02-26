#include <stdio.h>

int main() {
	unsigned int start, end;
	unsigned int year=0;
	printf ("Start: ");
	scanf ("%d", &start);
	printf ("Goal number: ");
	do {
		scanf ("%d", &end);
	} while (end<start);
	int i;
	while (end>start) {
		start += (start/12);
		year++;
	}
	printf ("%d", year);
}