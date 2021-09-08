/**
* string_toupper - function changes all lowercase
* letters of a string to uppercase
* @c: string whose letters are to be changed
* Return: returns a pointer to the string
*/
char *string_toupper(char *c)
{
	int i = 0;

	while (c[i] != '\0')
	{
		if (c[i] >= 'a' && c[i] <= 'z')
			c[i] = c[i] - 32;
		i++;
	}
	return (c);
}
