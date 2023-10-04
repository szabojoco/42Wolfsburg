/*
Create a function that capitalizes the first letter of each word and transforms all other letters to lowercase.
A word is a string of alphanumeric characters.
Here’s how it should be prototyped :
    char *ft_strcapitalize(char *str);

It should return str.
For example:
    salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un
    
Becomes:
    Salut, Comment Tu Vas ? 42mots Quarante-Deux; Cinquante+Et+Un
*/
#include <stdio.h>

int is_alphanumeric(char c) {
    return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || (c >= '0' && c <= '9'));
}

char *ft_strcapitalize(char *str) {
	int	i = -1;
	while (str[++i])
	{
		if (is_alphanumeric(str[i]) && (i == 0 || !is_alphanumeric(str[i - 1])))
		{
			if (str[i] >= 'a' && str[i] <= 'z')
				str[i] = str[i] - 32;
		}
		else if (is_alphanumeric(str[i]))
		{
			if (str[i] >= 'A' && str[i] <= 'Z')
				str[i] = str[i] + 32;
		}
	}
	return (str);
}

int main() {
    printf("%s\n",ft_strcapitalize("salut, comment tu vas ? 42mots quarante-deux"));
    return 0;
}