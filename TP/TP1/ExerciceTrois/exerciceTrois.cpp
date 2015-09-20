int pgcdRecursive(int a, int b)
{
	if (a == b)
	{
		return a;
	}
	else {
		if (a > b) {
			return pgcdRecursive(a - b, b);
		}
		else {
			return pgcdRecursive(a, b - a);
		}
	}
}

int pgcdIterative(int a, int b)
{
	while (a != b) 
	{
		if (a > b)
			a = a - b;
		else 
			b = b - a;
		
	}
	return a;
}
