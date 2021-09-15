#include "main.h"
/**
* wild_strlen - Returns the length of a string,
* ignoring wildcard characters.
* @str: The string to be measured.
* Return: The length.
*/
int wild_strlen(char *s)
{
	int len = 0, i = 0;

	if (*(s + i))
	{
		if (*s != '*')
			len++;
		i++;
		len += wild_strlen(s + i);
	}
	return (len);
}
/**
* loop_wild - Iterates through a string located at a wildcard
* until it points to a non-wildcard character.
* @str: The string to be iterated through.
*/
void loop_wild(char **str)
{
	if (**str == '*')
	{
		(*str)++;
		loop_wild(str);
	}
}
/**
* post_match - Function checks if a string str matches the postfix of
* a given string possibly containing wildcards.
* @str: String to be matched.
* @post: The postfix.
* Return: Returns a pointer to the null byte located at the end of postfix
* If str and postfix are a match
* otherwise returns a pointer to the first unmatched character in postfix.
*/
char *post_match(char *str, char *post)
{
	int str_len = wild_strlen(str) - 1;
	int post_len = wild_strlen(post) - 1;

	if (*post == '*')
		loop_wild(&post);
	if (*(str + str_len - post_len) == *post && *post != '\0')
	{
		post++;
		return (post_match(str, post));
	}
	return (post);
}
/**
* wildcmp - function compares two strings, for wildcard characters.
* @s1: The first string to be compared.
* @s2: The second string to be compared - may contain wildcards.
*
* Return: Returns -1 if the strings can be considered identical and 0 otherwise
*/
int wildcmp(char *s1, char *s2)
{
	if (*s2 == '*')
	{
		loop_wild(&s2);
		s2 = post_match(s1, s2);
	}
	if (*s2 == '\0')
		return (1);
	if (*s1 != *s2)
		return (0);
	return (wildcmp(++s1, ++s2));
}
