/**
* leet - This function encodes a string into 1337
* @str: string to be encoded into 1337
* Return: returns encoded string
*/
char *leet(char *str)
{
	int i, j;
	char str1[] = "aAeEoOtTlL";
	char str2[] = "4433007711";

	for (i = 0; str[i]; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (str[i] == str1[j])
			{
				str[i] = str2[j];
			}
		}
	}
	return (str);
}
