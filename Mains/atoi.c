int main(void)
{	
	printf("Start string : %s\n\n", "++20");
	printf("Origin atoi : %d\n", atoi("++20"));
	printf("Ft atoi : %d\n\n", ft_atoi("++20"));

	printf("Start string : %s\n\n", "+20");
	printf("Origin atoi : %d\n", atoi("+20"));
	printf("Ft atoi : %d\n\n", ft_atoi("+20"));

	printf("Start string : %s\n\n", "--20");
	printf("Origin atoi : %d\n", atoi("--20"));
	printf("Ft atoi : %d\n\n", ft_atoi("--20"));

	printf("Start string : %s\n\n", "-20");
	printf("Origin atoi : %d\n", atoi("-20"));
	printf("Ft atoi : %d\n\n", ft_atoi("-20"));

	printf("Start string : %s\n\n", "0");
	printf("Origin atoi : %d\n", atoi("0"));
	printf("Ft atoi : %d\n\n", ft_atoi("0"));

	printf("Start string : %s\n\n", "654680");
	printf("Origin atoi : %d\n", atoi("654680"));
	printf("Ft atoi : %d\n\n", ft_atoi("654680"));
}