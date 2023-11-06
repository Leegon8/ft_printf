#include <aio.h>
#include <unistd.h>
#include <stdio.h>

int main(void)
{
	int x = -999999;
	int *ptr = &x;
 	printf("%p", (void *)ptr);
	return 0;
}
