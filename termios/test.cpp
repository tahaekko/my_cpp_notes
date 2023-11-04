#include <iostream>
#include <fcntl.h>
#include <termio.h>

int main(int ac, char **av)
{
	struct termios	term;
	int serial = open("/dev/ttyACM0", O_RDWR);

	if (serial == -1)
		exit(1);
	else
		std::cout << "Serial opened success\n";

	term.c_lflag = CS8;

	return (0);
}
