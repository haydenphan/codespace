#include <stdio.h>

int main() {
    char s[26];
    int i;
    char j = 'a';
    for (i=0; i<26; i++) {
			s[i] = j;
            printf ("%c ", s[i]);
            j++;
	}
    printf ("\n");
    return 0;
}