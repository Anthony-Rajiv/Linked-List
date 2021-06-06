#ifndef _LINKED_LIST_H_
#define _LINKED_LIST_H_

#include "stdio.h"
#include "stdlib.h"

typedef int linked_list_data_type;

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

linked_list_data_type create_linked_list(linked_list_data_type data);

linked_list_data_type display();

error_t push_at_head(linked_list_data_type data);

error_t push_after_node(linked_list* prev_node, linked_list_data_type data);

error_t append(linked_list_data_type data);

error_t delete_linked_list();


#endif // _LINKED_LIST_H_
