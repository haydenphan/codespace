#include <stdio.h>

int main() {
    int n;
	char s[n];
	int i;
	for (i=0 ; i<26; i++) {
		n = i;
        int j;
		for (j='a'; j<'z'; j++) {
			s[n] = s[j];
		}
	}
	printf ("%c ", s[n]);
}