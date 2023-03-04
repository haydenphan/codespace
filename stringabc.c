#include <stdio.h>

int main() {
    int i;
	char s[26];
    char j;
    for (j='a'; j<='z'; j++) {
        for (i=0; i<26; i++) {
			s[i] = j;
	    }
    }
	printf ("%s ", s);
    return 0;
}