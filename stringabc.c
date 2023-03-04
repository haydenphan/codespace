#include <stdio.h>

int main() {
    int n, i;
	char s[n];
    char j;
    for (i=0; i<=n; i++) {
        n = i;
        for (j='a'; j<='z'; j++) {
			s[n] = j;
	    }
    }
	printf ("%s ", s);
}