#include <stdio.h>

int main() {
    int i;
	char s[26];
    char j = 'a';
    for (i=0; i<26; i++) {
			s[i] = j;
            printf ("%c ", s[i]);
            j++;
	    }
    }
    return 0;
}