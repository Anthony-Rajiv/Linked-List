#include "linked_list.h"

linked_list* head = NULL;
linked_list* tail = NULL;

linked_list_data_type create_linked_list(linked_list_data_type data)
{
    linked_list* new_node = (linked_list *)malloc(sizeof(linked_list));

    new_node ->data = data;
    new_node ->next = NULL;

    if(head == NULL)
    {
        head = new_node;
        tail = new_node;
    }
    else
    {
        tail ->next = new_node;
        tail = new_node;
    }
    return tail -> data;
}

linked_list_data_type display()
{

    linked_list* current = head;

    if(head == NULL)
    {
        return 0;
    }
    else
    {
        while(current ->next != NULL)
        {
            //printf("%d ", current->data);
            current = current->next;
        }
        return current -> data;
    }


}

error_t push_at_head(linked_list_data_type data)
{
    linked_list* new_node = (linked_list *) malloc(sizeof(linked_list));
    new_node->data  = data;

    new_node->next = head;
    head   = new_node;

    return SUCCESS;
}

error_t push_after_node(linked_list* prev_node, linked_list_data_type data)
{
    if (prev_node == NULL)
    {
        return NULL_PTR;
    }

    linked_list* new_node =(linked_list *) malloc(sizeof(linked_list));
    new_node->data = data;

    new_node->next = prev_node->next;
    prev_node->next = new_node;

    return SUCCESS;
}

error_t append(linked_list_data_type data)
{
    linked_list* new_node = (linked_list *) malloc(sizeof(linked_list));
    linked_list *last = head;

    new_node->data  = data;
    new_node->next = NULL;


    if (head == NULL)
    {
       head = new_node;
       return SUCCESS;
    }

    while (last->next != NULL)
    {
       last = last->next;
    }
    last->next = new_node;
    tail = new_node;


    return SUCCESS;
}


error_t delete_linked_list()
{
   linked_list* current = head;
   linked_list* next;
 
   while (current != NULL)
   {
       next = current->next;
       free(current);
       current = next;
   }
   head = NULL;
   return SUCCESS;
}