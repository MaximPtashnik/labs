#include "../src/lib.h"
#include <check.h>

START_TEST(test_Multiplication_of_arrays){
	unsigned int SIZE = 3, i, j;
	int **expected_value, **actual_value;
	int **input_data1 = (int **)malloc(SIZE * sizeof(int));
	int **input_data2 = (int **)malloc(SIZE * sizeof(int));
	
	for (i = 0; i < SIZE; i++) {
      		*(input_data1 + i) = (int *)malloc(SIZE * sizeof(int));
	}	
	for (i = 0; i < SIZE; i++) {
      		for (j = 0; j < SIZE; j++) {
        		*(*(input_data1 + i) + j) = 2;
		}
	}

	for (i = 0; i < SIZE; i++) {
                *(input_data2 + i) = (int *)malloc(SIZE * sizeof(int));
        }
        for (i = 0; i < SIZE; i++) {
                for (j = 0; j < SIZE; j++) {
                        *(*(input_data2 + i) + j) = 3;
                }
        }
	expected_value = (int **)malloc(SIZE * sizeof(int));
	 for (i = 0; i < SIZE; i++) {
      	 	*(expected_value + i) = (int *)malloc(SIZE * sizeof(int));
     	 }
	for (i = 0; i < SIZE; i++) {
        	for (j = 0; j < SIZE; j++) {
       			*(*(expected_value + i) + j) = 6;
      		}
    	}
	actual_value = (int **)malloc(SIZE * sizeof(int));
	for (i = 0; i < SIZE; i++) {
        	*(actual_value + i) = (int *)malloc(SIZE * sizeof(int));
        }

	**actual_value = Multiplication_of_arrays(input_data1, input_data2, SIZE);
        ck_assert_int_eq(**expected_value, **actual_value);
}
END_TEST
int main(void)
{
        Suite *s = suite_create("Programing");
        TCase *tc_core = tcase_create("Lab11");

        tcase_add_test(tc_core, test_Multiplication_of_arrays);
        suite_add_tcase(s, tc_core);

        SRunner *sr = srunner_create(s);
        srunner_run_all(sr, CK_VERBOSE);
        int number_failed = srunner_ntests_failed(sr);
        srunner_free(sr);

        return (number_failed == 0) ? EXIT_SUCCESS : EXIT_FAILURE;
}

