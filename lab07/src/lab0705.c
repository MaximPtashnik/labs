//lab 07 05 
#include <stdlib.h>

int function(int );

int main ()
{
        int a = random() % 10, result;
	result = function(a);
        return 0;
}

int function(int a)
{
	int n = a, result = 1;
	for(n = 1; n < a + 1; n++)
        {
                result = result * n;
        }
        result = 10 * result;
	return result;
}

