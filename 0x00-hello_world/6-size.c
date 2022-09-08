#include <stdio.h>

int main(void)
{
	char c;
	int i;
	long li;
	long long lli;
	float f;

	print("size of a char: byte(s)\n",sizeof(c));
	print("size of an int: byte(s)\n",sizeof(i));
	print("size of a  long: byte(s)\n",sizeof(li));
	print("size of a long long: byte(s)\n",sizeof(lli));
	print("size of a float: byte(s)\n",sizeof(f));
	return (0);
}
