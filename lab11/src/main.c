/**
 * @mainpage
 *
 * Основи документування. Лабораторна робота №11. Взаємодія з користувачем шляхом механізму
введення/виведення
 *
 * @author Ptashnik Maksym
 * @date 29-apr-2022
 * @version 1.0
 *
 */

/**
 * @file main.c
 * @brief Файл з реалізацією функції по роботі із завданням лабораторної роботи
**/

/**
 * {@link Multiplication_of_arrays} знаходить добуток двох масивів(матриць) та записує в окремий массив, який створюється у функції
 * @param array1 покажчик на перший динамічний масив(матрицю), @param array2 покажчик на другий динамічний масив(матрицю), @param size розмір для створення результуючого масиву\n
 * @return (res_array) повертає результуючий масив, добутка двох масивів( двох матриць)
**/

#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
#include "lib.h"
int main()
{
  unsigned int N;
  int **array1, **array2;
  printf("Enter the size matrix: ");
  scanf("%d", &N);
  array1 = (int **)malloc(N * sizeof(int));
  array2 = (int **)malloc(N * sizeof(int));
  if (array1 != NULL) {
     for (unsigned int i = 0; i < N; i++) {
      *(array1 + i) = (int *)malloc(N * sizeof(int));
    }
     printf("Your first matrix:\n");
     for (unsigned int i = 0; i < N; i++) {
      for (int unsigned j = 0; j < N; j++) {
        *(*(array1 + i) + j) = rand() % 10;
        printf("%d ", *(*(array1 +i)+j));
      }
      printf("\n");
    }
    
  }

  if (array2 != NULL) {
    for (unsigned int i = 0; i < N; i++) {
      *(array2 + i) = (int *)malloc(N * sizeof(int));
    }
    printf("Your second matrix:\n");
    for (unsigned int i = 0; i < N; i++) {
      for (unsigned int j = 0; j < N; j++) {
        *(*(array2 + i) + j) = rand() % 10;
        printf("%d ", *(*(array2 + i) + j));
      }
      printf("\n");
    }
  }

  Multiplication_of_arrays(array1, array2, N);

  return 0;
}
