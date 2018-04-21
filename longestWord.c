#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#pragma warning(disable : 4996)

int main(void)
{
//String -> Word
//Program prints longest word in given string
//If longest words have the same size, program prints last of them
//Use user input to print string
/*
Strings are:
    Set of words -> set of char;
*/
//Check-expect examles:
	printf("Please enter the word in  19 symbols length or shorter: ");
	char my_str[20];
	scanf("%s", &my_str);
	//char my_str[] = "In this program we will find a largest world in given string"; // length of longest word is largest
	//char my_str[] = "xxx xxxx xxxxx xxxxxxx xxxxxx xx xx xxxxxxxx aaaaaaaa ooooooooooo"; //longest word is oooooooooooo
	//char my_str[] = "gg aaaa aaaaaa aaaaaaaaaaaaaaaa"; longest word is aaaaaaaaaaaaaaaa
	int longest = 0; // initially longest word length is 0
	char word[20]; //keep word in there
	char longestWord[20]; // will keep the current longest world

	int i = 0, j = 0;
	longestWord[0] = '\0';

	while (my_str[i] != '\0') 
	{
				// Instructions:
				// here you will need to copy characters from my_str to word,
				// you need to continue doing the copy of characters from ith index of my_str
				// to the jth index of word until you get a space (or NULL for the last word).
				// That means continue copy if the current character is not a space AND not a NULL
				//
				// When the word is copied you need to append a NULL at the end of the word.
				// Now check if the length of the word is greater than longest, if so, then
				// update longest and copy the word to longestWord (you may use strcpy).
				//
				// If you are still not at the end of my_str then update i
		if (my_str[i] != ' ' && my_str[i + 1] != '\0')
		{
			word[j] = my_str[i];
			j++;
		}
		else if (my_str[i + 1] != '\0')
		{
			word[j] = '\0';
			if (strlen(longestWord) <= strlen(word))
			{
				strcpy(longestWord, word);
			}
			j = 0;
		}
		else
		{
			word[j] = my_str[i];
			word[j + 1] = '\0';
			if (strlen(longestWord) <= strlen(word))
			{
				strcpy(longestWord, word);
			}
		    j = 0;
		}
		i++;
		longest = strlen(longestWord);
	}
	printf("Longest word: %s\n", longestWord);
	printf("Length: %d\n", longest);

	system("pause");
	return 0;
}
