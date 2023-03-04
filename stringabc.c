#include <stdio.h>

int main() {
    int i;
	char s[];
    char j;
    for (i=0; i<=26; i++) {
        for (j='a'; j<='z'; j++) {
			s[i] = j;
	    }
    }
	printf ("%s ", s);
}