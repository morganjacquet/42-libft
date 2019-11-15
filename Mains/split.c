int		main()
{
	char **tab;
	
	tab = ft_split(".test.bonjour.ca va ?", '.');
	for (int i = 0; tab[i] ; i++)
		printf("|%s|\n", tab[i]);
	return (0);
}
