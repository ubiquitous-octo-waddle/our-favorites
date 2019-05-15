#include <stdlib.h>

int main()
{
	eat();
}

// it's called eat because it eats up all your memory space hahahahaha
void eat()
{
	while(1)
	{
		malloc(8);
	}
}
