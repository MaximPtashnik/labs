#include "lib.h"

int main(int argc, char **argv)
{
        int a, result = 0;
        if (argc != 1)
        {
         result = function((int)strtod(argv[1], 0));
        }
        printf("%d\n",result);
        return 0;
}
