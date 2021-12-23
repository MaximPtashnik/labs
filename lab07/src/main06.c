#include <stdlib.h>
#include <time.h>
#define N 3

void multiply_matrix(int matrix[], int result[], int n){
    for(int i = 0; i < n; i++){
       for(int j = 0; j < n; j++){
        result[i*n+j] = 0;
        for(int k = 0; k < n; k++){
            result[i*n+j] += matrix[i*n+k] * matrix[k*n+j];      
         }
       }
    }
}

int main() {
    int A[N][N];
    int C[N*N];
    int result[N*N];

	srand(time(NULL));
    for (int i = 0; i < N; i++) 
	{
      for (int j = 0; j < N; j++) 
      {
            	A[i][j] = random() % 10;
      }
    }

    for (int i = 0; i < N; i++)
    {
      for (int j = 0; j < N; j++)
      {    
        C[i*N+j] = A[i][j];
      }
    }

    multiply_matrix(C, result, N);
    return 0;
}
