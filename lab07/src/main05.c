#include <stdlib.h>
#include <time.h> 

int get_perfect_number( int x){
  int sum = 0;      
  for(int i = 1; i < x; i++) {            
         if ( x % i == 0){
                sum += i;
         }
        }

         if ( x == sum){                        
          return 1;
         }

         else {                                
          return 0; 
         }
        
}
int main(int argc, char** argv) {

        int x;
        int result;

        if (argc == 1){
            srand (time(NULL));
            x = (int)random() % 100;
            result = get_perfect_number(x);

        } else {
            result = get_perfect_number((int)strtod(argv[1], 0));
        }

        return 0;    
}

