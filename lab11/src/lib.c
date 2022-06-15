/**
 * @file lib.c
 * @brief Файл з реалізацією функції по роботі із завданням лабораторної роботи
 *
 * @author Ptashnik Maksym
 * @date 22-apr-2022
 * @version 1.0
 **/

#include "lib.h"

int Multiplication_of_arrays(int **array1, int **array2, unsigned int size){
  int **res_array;
  unsigned int i, j;
  res_array = (int **)malloc(size * sizeof(int));
  if (res_array != NULL) {
    for (i = 0; i < size; i++) {
      *(res_array + i) = (int *)malloc(size * sizeof(int));
    }
    printf("Your result of multiplication:\n");
    for (i = 0; i < size; i++) {
      for (j = 0; j < size; j++) {
        *(*(res_array + i) + j) = *(*(array1 + i) + j) * *(*(array2 + i) + j);
        printf("%d ", *(*(res_array + i) + j));
      }
      printf("\n");
    }
  }
return **res_array;
}

