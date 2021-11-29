/**
* _strlen - function calculates the lenght of a string
* @s: pointer to character string
* Return: retruns the lenght of string
*/
int _strlen(char *s)
{
	int count = 0;

	while (*s != '\0')
	{
		count++;
		s++;
	}
	return (count);
}
