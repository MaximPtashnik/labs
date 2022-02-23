#include "lib.h"
#include <check.h>

START_TEST(test_func)
{
#define DATA_SIZE 6
    
    int input_data[] = { 7, 11, 8, 10, 6, 9};
    int expected_values[] = { 105, 10395, 384, 3840, 48, 945};

    for ( int i = 0; i < DATA_SIZE; i++){
    int actual_value = function(input_data[i]);
    ck_assert_int_eq(expected_values[i], actual_value);
    }
}
END_TEST

int main(void)
{
        Suite *s = suite_create("Programing");
        TCase *tc_core = tcase_create("Lab09");

        tcase_add_test(tc_core, test_func);
        suite_add_tcase(s, tc_core);

        SRunner *sr = srunner_create(s);
        srunner_run_all(sr, CK_VERBOSE);
        int number_failed = srunner_ntests_failed(sr);
        srunner_free(sr);

        return (number_failed == 0) ? EXIT_SUCCESS : EXIT_FAILURE;
}
