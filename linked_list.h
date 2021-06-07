/**
 * @file linked_list.h
 * @author Anthony Rajiv Francis (anthonyrajiv.francis@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2021-06-07
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#ifndef _LINKED_LIST_H_
#define _LINKED_LIST_H_

#include "stdio.h"
#include "stdlib.h"

/**
 * @brief Declare Datatype for data to be stored in Linked List
 * 
 */
typedef int linked_list_data_type;

/**
 * @brief Structure for Linked List
 * 
 */
typedef struct Linked_list
{
    linked_list_data_type data;
    struct Linked_list * next;
}linked_list;

typedef enum error_t
{
    SUCCESS,
    LINKED_LIST_EMPTY,
    NULL_PTR
}error_t;

/**
 * @brief Create a linked list object
 * 
 * @param data 
 * @return linked_list_data_type 
 */
linked_list_data_type create_linked_list(linked_list_data_type data);

/**
 * @brief Display the elements of Linked List
 * 
 * @return linked_list_data_type 
 */
linked_list_data_type display();

/**
 * @brief 1. Insertion at Head
 * 
 * @param data 
 * @return error_t 
 */
error_t push_at_head(linked_list_data_type data);

/**
 * @brief 2. Insertion at a given node
 * 
 * @param prev_node 
 * @param data 
 * @return error_t 
 */
error_t push_after_node(linked_list* prev_node, linked_list_data_type data);

/**
 * @brief 3.Insertion at Tail
 * 
 * @param data 
 * @return error_t 
 */
error_t append(linked_list_data_type data);

/**
 * @brief Delete Linked List
 * 
 * @return error_t 
 */
error_t delete_linked_list();


#endif // _LINKED_LIST_H_
