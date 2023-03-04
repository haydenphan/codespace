#include <stdio.h>

int main() {
	int n;
	char s[n];
	char i;
	for (i=0 ; i<26; i++) {
		n = i;
		for (s[i]='a'; s[i]<s[n]; s[i]++) {
			s[n] = s[i];
		}
	}
	printf ("%c ", s[n]);
}