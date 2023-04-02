#include <stdio.h>
#include <string.h>
int main(void)
{
	typedef int (*Pointer)(); // 

	Pointer p;

	typedef int *Ptr(void);

	Ptr ptr;
}
