int main()
{
    printf("%i\n", isasciit('0'));
    printf("%i\n", isascii('0'));

    printf("%i\n", isasciit('A'));
    printf("%i\n", isascii('A'));

    printf("%i\n", isasciit('a'));
    printf("%i\n", isascii('a'));

    printf("%i\n", isasciit('-'));
    printf("%i\n", isascii('-'));

    printf("%i\n", isasciit(' '));
    printf("%i\n", isascii(' '));

    printf("%i\n", isasciit(154));
    printf("%i\n", isascii(154));

    printf("%i\n", isasciit(15));
    printf("%i\n", isascii(15));
}