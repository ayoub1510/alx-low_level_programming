#include <unistd.h>

/**
 *main - entry the point
 *void - main function take no arguments
 *Return:(Success)
 */
int main(void)
{
	char msg[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(2, msg, sizeof(msg) - 1);
	return (1);
}
