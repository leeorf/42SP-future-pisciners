#include <stdlib.h>
#include <stdio.h>


char	**ft_split(char *str)
{
	int	num_words;
	int	i;
	int	j;
	int	k;
	int	q;
	int	word_len;
	char	*word;
	char	**words_array;

	// Remove white spaces from the start of the string
	i = 0;
	while(str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
		i++;

	// Count words
	num_words = 0;
	while(str[i])
	{
		num_words++;
		while(str[i] && str[i] != ' ' && str[i] != '\t' && str[i] != '\n')
			i++;
		while(str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
			i++;
	}

	// Allocate memory for an array of pointers
	words_array = malloc(sizeof(char *) * (num_words + 1));
	words_array[num_words] = '\0';
	
	i = 0;
	j = 0;
	while(i < num_words)
	{
		// Remove white space
		while(str[j] == ' ' || str[j] == '\t' || str[j] == '\n')
			j++;

		k = j;

		// Count word lenght
		word_len = 0;
		while(str[j] && str[j] != ' ' && str[j] != '\t' && str[j] != '\n')
		{
			word_len++;
			j++;
		}
		word = malloc(sizeof(char) * (word_len + 1));
		
		// Add char to array of chars
		q = 0;
		while(str[k] && str[k] != ' ' && str[k] != '\t' && str[k] != '\n')
		{
			word[q] = str[k];
			k++;
			q++;
		}
		word[q] = '\0';
		
		words_array[i] = word;
		i++;
	}
	return words_array;
}

int main(int argc, char *argv[])
{
	char	**words_array;
	int	i;

	words_array = ft_split(argv[1]);

	i = 0;
	while(words_array[i])
	{
		printf("%s\n", words_array[i]);
		i++;
	}
}
