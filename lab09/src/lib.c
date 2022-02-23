#include "lib.h"

int function(int x)
{
        int i, result = 1;
        if ( (x % 2) == 0)
        {
         for (i = 2; i < x + 1; i = i + 2)
         {
          result = result * i;
         }
        } else 
          {
           for (i = 1; i < x + 1; i = i + 2)
           {
            result = result * i;
           }
          }
          return result;
}
