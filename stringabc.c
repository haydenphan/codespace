#include <stdio.h>

int main() {
    int i;
	char s[26];
    char j;
    for (i=0; i<26; i++) {
        for (j='a'; j<='z'; j++) {
			s[i] = j;
	    }
    }
    s[25] = '\0';
	printf ("%s ", s);
    return 0;
}