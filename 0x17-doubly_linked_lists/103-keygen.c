#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * fbig - finds the biggest number
 * @usern: username
 * @lenght: length of username
 *
 * Return: the biggest number
 */
int fbig(char *usern, int lenght)
{
	int ch;
	int vch;
	unsigned int rand_num;

	ch = *usern;
	vch = 0;

	while (vch < lenght)
	{
		if (ch < usern[vch])
			ch = usern[vch];
		vch += 1;
	}

	srand(ch ^ 14);
	rand_num = rand();

	return (rand_num & 63);
}

/**
 * fmult - multiplies each char of username
 * @usern: username
 * @lenght: length of username
 *
 * Return: multiplied char
 */
int fmult(char *usern, int lenght)
{
	int ch;
	int vch;

	ch = vch = 0;

	while (vch < lenght)
	{
		ch = ch + usern[vch] * usern[vch];
		vch += 1;
	}

	return (((unsigned int)ch ^ 239) & 63);
}

/**
 * fchar - generates a random char
 * @usern: username
 *
 * Return: a random char
 */
int fchar(char *usern)
{
	int ch;
	int vch;

	ch = vch = 0;

	while (vch < *usern)
	{
		ch = rand();
		vch += 1;
	}

	return (((unsigned int)ch ^ 229) & 63);
}

/**
 * main - Entry point
 * @argc: arguments count
 * @argv: arguments vector
 *
 * Return: Always 0
 */
int main(int argc, char **argv)
{
	char keygen[7];
	int lenght, ch, vch;
	long alph[] = {
		0x3877445248432d41, 0x42394530534e6c37, 0x4d6e706762695432,
		0x74767a5835737956, 0x2b554c59634a474f, 0x71786636576a6d34,
		0x723161513346655a, 0x6b756f494b646850 };
	(void) argc;

	for (lenght = 0; argv[1][lenght]; lenght++)
		;
	keygen[0] = ((char *)alph)[(lenght ^ 59) & 63];
	ch = vch = 0;
	while (vch < lenght)
	{
		ch = ch + argv[1][vch];
		vch = vch + 1;
	}
	keygen[1] = ((char *)alph)[(ch ^ 79) & 63];
	ch = 1;
	vch = 0;
	while (vch < lenght)
	{
		ch = argv[1][vch] * ch;
		vch = vch + 1;
	}
	keygen[2] = ((char *)alph)[(ch ^ 85) & 63];
	keygen[3] = ((char *)alph)[fbig(argv[1], lenght)];
	keygen[4] = ((char *)alph)[fmult(argv[1], lenght)];
	keygen[5] = ((char *)alph)[fchar(argv[1])];
	keygen[6] = '\0';
	for (ch = 0; keygen[ch]; ch++)
		printf("%c", keygen[ch]);
	return (0);
}
