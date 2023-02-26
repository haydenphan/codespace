#include <stdio.h>

int main() {
	int start, end;
	int year=0;
	printf ("Nhap so llamas ban dau: ");
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