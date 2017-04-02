#include "list.h"

#include <stdlib.h>

list_t *LIST_insert(list_t *root, void *data)
{
    list_t *node = root;
    if(node == NULL)
    {
        node = malloc(sizeof(list_t));
        root = node;
    } else
    {
        while(node->next != NULL)
            node = node->next;

        node->next = malloc(sizeof(list_t));
        node = node->next;
    }

    node->data = data;
    node->next = NULL;

    return root;
}

void LIST_clean(list_t *root)
{
    while(root != NULL)
    {
        list_t *tmp = root->next;
        free(root->data);
        free(root);
        root = tmp;
    }
}
