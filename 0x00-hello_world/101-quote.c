#include <unistd.h>

int main(void)
{
	if (write(1, "and that piece of art is useful - Dora Korpar, 2015-10-19\n", 60) != 60) 
	{
	    write(2, "null\n", 6);
	    return (-1);
	}
	return (0);
}
