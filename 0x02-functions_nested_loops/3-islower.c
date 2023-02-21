/**
 * _islower - evaluates alphabets
 *
 * Return: Always 0 (Success)
 */
int _islower(int c)
{
	c = 0;

	if (c >= 97 && c <= 122)
	{
		return (1);
	} else
		return (0);
}
