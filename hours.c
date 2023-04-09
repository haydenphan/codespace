#include <stdio.h>
#include <string.h>
#include <ctype.h>

const int point[] = {1,3,3,2,1,4,2,4,1,8,5,1,3,1,1,3,10,1,1,1,1,4,4,8,4,10};

int total (char* a, int n) {
	int i, sum=0;
	for (i=0; i<n; i++) {
		int letter = toupper(a[i]);
		if (!isalpha(letter)) {
			continue;
		}
		sum += point [letter - 'A'];
	}
	return sum;
}

int compare (int a, int b) {
	if (a>b) {
		return 1;
	} else if (a<b) {
		return 0;
	} else {
		return -1;
	}
}

void print (int x) {
	if (x==1) {
		printf ("Player 1 wins!");
	} else if (x==0) {
		printf ("Player 2 wins!");
	} else {
		printf ("Tie!");
	}
}

int main() {
	char player1 [100];
	char player2 [100];
	printf ("Player 1: ");
	scanf ("%s", player1);
	int n = strlen (player1);
	printf ("Player 2: ");
	scanf ("%s", player2);
	int m = strlen (player2);
	int kq = compare (total(&player1, n), total(&player2, m));
	print (kq);
	return 0;
}