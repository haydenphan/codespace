#include <stdio.h>

int population (int a, int b) {
	int year = 0;
	int s = a;
	if (a==b) {
		return 0;
	}
	while (a<b) {
		a = a * 13/12;
		year++;
	}
	return year;
}

int main()
{
    int n,m;
    do {
    	printf ("Start size: ");
    	scanf ("%d", &n);
    } while (n<1);

    do {
    	printf ("End size: ");
    	scanf ("%d", &m);
	} while (m<1 || m<=n);

	int kq = population (n,m);
    printf ("Years: %d", kq);
    return 0;
}

