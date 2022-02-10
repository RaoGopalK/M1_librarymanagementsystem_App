/**
 * @file dollar_test.c
 * @author Ankita Name Kondagoli
 * @brief 
 * @version 0.1
 * @date 2021-09-08
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include "unity/unity.h"
#include "assert.h"
#include "Pound.h"

/*required by the unity test framework*/
void setUp()
{

}
void tearDown()
{

}
void test_Pound(void)
{
    int n1 = 500, n2 = 75;
    TEST_ASSERT_EQUAL(6.8, Pound(n1,n2));
    
}


int main(void)
{   
    /*required by the unity test framework*/
    UNITY_BEGIN();
    /*required by the unity test framework*/
    RUN_TEST(test_Pounnd);
    /*required by the unity test framework*/
    return UNITY_END();
}