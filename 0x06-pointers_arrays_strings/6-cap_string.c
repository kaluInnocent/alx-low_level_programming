/**
* cap_string - function capitalizes all words of a string
* Separators of words: space, tabulation, new line,
* ,, ;, ., !, ?, ", (, ), {, and }
* @c: string to be capitalized
* Return: returns the changed strings
*/
char *cap_string(char *c)
{
	int i;

	for (i = 0; c[i]; i++)
	{
		if (i == 0)
		{
			if (c[i] >= 'a' && c[i] <= 'z')
				c[i] = c[i] - 32;
			continue;
		}
		switch (c[i])
		{
			case ' ':
			case '\t':
			case '\n':
			case ',':
			case ';':
			case '.':
			case '!':
			case '?':
			case '"':
			case '(':
			case ')':
			case '{':
			case '}':
				if (c[i + 1] >= 'a' && c[i + 1] <= 'z')
					c[i + 1] = c[i + 1] - 32;
		}
	}
	return (c);
}
