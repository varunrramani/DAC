#include <stdio.h>
#include <string.h>
 

int stringLength(char *word) {
	int length = 0;
	//printf("\nWord is : %s", word);
	while (*word != '\0') {
		length++;
		*word++;
	}
	//printf("\n%d", length);
	return length;
}

bool check(char word[], int index)
{
    int len = stringLength(word) - (index + 1);
    if (word[index] == word[len])
    {
        if (index + 1 == len || index == len)
        {
            //printf("The entered word is a palindrome\n");
		return true;
        }
        check(word, index + 1);
    }
    else
    {
        //printf("The entered word is not a palindrome\n");
	return false;
    }
}

int main() {
	char sentence[256];
	char palindromeList[100][100];
	printf("Enter sentence\n");
	//fgets(sentence, 60, NULL);
	scanf("%[^\n]s", sentence);
	int i = 0;
	int j = 0;
	int l = 0;
	while(sentence[i] != '\0') {
		if (sentence[i] != ' ') {
			palindromeList[j][l] = sentence[i];
			l++;	
		} else {
			l = 0;
			j++;		
		}
		i++;
	}
	//printf("%s\n", palindromeList[0]);
	//printf("%d\n", j);
	for (int k = 0; k <= j; k++) {
		//printf("\n%s", palindromeList[k]);
		bool isPalidrome = check(palindromeList[k], 0);
		if (isPalidrome) {
			printf("%s \n", palindromeList[k]);
		}
	}

	return 0;
}