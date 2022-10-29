void	fnc(unsigned int i, char *str)
{
	i = 0;
	str[i] -= 32;
}

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}

int main()
{
	char str[] = "hhhhhhhhh";
	ft_striteri(str, &fnc);
	printf("%s\n", str);
}