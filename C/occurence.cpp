#include<stdio.h>
#include<string.h>

int stringLength(char *word) {
	int length = 0;
	printf("\nWord is : %s", word);
	while (*word != '\0') {
		length++;
		*word++;
	}
	printf("\n%d", length);
	return length;
}

int main() {
	printf("Enter sentence\n");	
	char sentence[100];
	
	scanf("%s", sentence);

	char word[100];
	printf("Enter word to be found\n");
	scanf("%s", word);
	int a = stringLength(sentence); 
	int b = stringLength(word);
	int count = 0;

	for( int i=0; i < a; i++ ) {
		if( word[0] == sentence[i] ) {
			for( int j = 1; j < b; j++ ) {
				if( word[j] == sentence[i+j] ) {
					if( j == b - 1 ) {
						count++;
					}
				} else {
					break;
				}
			}
		}
	}
	printf("\nCount is : %d\n", count);
	return 0;
}