int puissanceRecursive(float a, int n)
{
	int tmp;
	if (n == 0)
	{
		return 1;
	} 
	else
	{
		tmp = puissanceRecursive(a, n / 2);
		tmp = tmp * tmp;
		if (n % 2 != 0)
		{
			tmp = tmp * a;
		}
		return tmp;
	}
}

int puissanceIterative(float a, int n)
{
	int i;
	int resulat = 1;
	for (i = 0; i < n; i++) {
		resulat = a * resulat;
	}
	return resulat;
}