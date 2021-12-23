#include <stdlib.h>
#include <time.h>
#define N 3

/**
 * @mainpage
 *
 * Основи документування. Лабораторна робота №8.1. Вступ до документації коду
 *
 * @author Ptashnik Maxim
 * @date 23-dec-2021
 * @version 1.1
 *
 */
 
/**
 * @file main.c
 * @brief Файл з реалізацію функціоналу програми лабораторної роботи
**/

/**
 * Return функція нічого не повертає
 *
 * Функція перемножає матрицю А саму на себе
 * @param matrix матриця
 * @param result результат множення
 * @param n розмір матриці

 */
//множення матриць (А * А)
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

/**
 * Головна функція.
 *
 * Послідовність дій:
 * - Заповняємо всі елементи матриці А випадковими числами від 0 до 10
 * - Переводимо  матрицю А в одновимірний масив С
 * - Виклик функції {@multiply_matrix}
 * @return успішний код повернення з програми (0)
 */

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

	//Переводимо двовимірну матрицю А в одновимірну С.
    for (int i = 0; i < N; i++)
    {
      for (int j = 0; j < N; j++)
      {    
        C[i*N+j] = A[i][j];
      }
    }

    //Виклик функції множення матриць.
    multiply_matrix(C, result, N);
    return 0;
}
