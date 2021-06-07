/**
 * @file main.c
 * @author Anthony Rajiv Francis (anthonyrajiv.francis@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2021-06-07
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include "unity.h"
#include "linked_list.h"
struct new_stack* ptr = NULL;
/**
 * @brief Set the Up object
 * Required by the unity test framework
 */
void setUp() {}

/**
 * @brief Release the objects that are setup for tests
 * Required by the unity test framework
 */
void tearDown() {}

void test_create_linked_list()
{
    TEST_ASSERT_EQUAL(1, create_linked_list(1));
    TEST_ASSERT_EQUAL(2, create_linked_list(2));
    TEST_ASSERT_EQUAL(3, create_linked_list(3));
}

void test_display()
{
    TEST_ASSERT_EQUAL(3, display());
}
void test_push_at_head()
{
    TEST_ASSERT_EQUAL(SUCCESS, push_at_head(0));
    TEST_ASSERT_EQUAL(3, display());
}

/*void test_push_after_node()
{
    TEST_ASSERT_EQUAL(1, create_linked_list(1));
    TEST_ASSERT_EQUAL(1, display());
}*/

void test_append()
{
    TEST_ASSERT_EQUAL(SUCCESS, append(14));
    TEST_ASSERT_EQUAL(14, display());
}

void test_delete()
{
    TEST_ASSERT_EQUAL(SUCCESS, delete_linked_list());
    TEST_ASSERT_EQUAL(0, display());
}
/**
 * @brief What this function does
 *
 * @return int
 */
int main(void)
{
  /* Initiate the Unity Test Framework */
  UNITY_BEGIN();

  /* Run Test functions */
  RUN_TEST(test_create_linked_list);
  RUN_TEST(test_display);
  RUN_TEST(test_push_at_head);
  //RUN_TEST(test_push_after_node);
  RUN_TEST(test_append);
  RUN_TEST(test_delete);

  /* Close the Unity Test Framework */
  return UNITY_END();
}
