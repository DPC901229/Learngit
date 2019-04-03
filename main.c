#include <stdio.h>
int main(int argc, const char *argv[])
{
	unsigned short a = 1;
	printf("little Endian is %d\n",*(unsigned char*)&a);
	return 0;
}
