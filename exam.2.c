#include <stdio.h>
#include <ctype.h>
#include <string.h>

void countConsonants(char *sentence) 
{
    int counts[26] = {0};
    for (int i = 0; sentence[i]; i++) 
	{
        char ch = tolower(sentence[i]);
        if (isalpha(ch) && !(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')) 
		{
            counts[ch - 'a']++;
        }
    }

    printf("Consonant counts:\n");
    for (int i = 0; i < 26; i++) 
	{
        if (counts[i] > 0)
            printf("%c: %d\n", i + 'a', counts[i]);
    }
}

int main() 
{
    char sentence[200];

    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);

    countConsonants(sentence);

}
/*
input = Enter a sentence: chintan
output = Consonant counts:
c: 1
h: 1
n: 2
t: 1
*/
