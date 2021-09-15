#include "main.h"
/**
* compare - function compares two strings
* @str1: first string to be compared
* @str2: second string to be compared
* Return: returns 0 if no difference and 1 otherwise
*/
int compare(char *str1, char *str2)
{
	if (str1 >= str2)
		return (1);
	if (*str1 == *str2)
		return (compare(str1 + 1, str2 - 1));
	return (0);
}
/**
* find_strlen - function determines the length of a string
* @str: string whose length is to be determined
* Return: function returns the length of a string
*/
int find_strlen(char *str)
{
	if (*str == '\0')
		return (0);
	return (find_strlen(str + 1) + 1);
}
/**
* is_palindrome - function checks if a string is a palindrome
* @s: string to be checked
* Return: function returns 1 if string is a palindrome and 0 otherwise
*/
int is_palindrome(char *s)
{
	int l = find_strlen(s);

	return (compare(s, (s + l - 1)));
}
