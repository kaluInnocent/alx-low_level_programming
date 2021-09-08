/**
* reverse_array - function reverses the content of an array
* @a: pointer to array
* @n: array size
* Return: returns pointer to the array
*/
void reverse_array(int *a, int n)
{
	int start = 0, end = n - 1;

	while (start < end)
	{
		int temp = a[start];
		a[start] = a[end];
		a[end] = temp;
		start++;
		end--;
	}
}
