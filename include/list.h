#ifndef _LIST_H_
#define _LIST_H_

/*
 * Struct representing dynamic list
 * user general for all type data on heap (pointers)
 */
typedef struct list_s
{
    void *data;
    struct list_s *next;
} list_t;

/*
 * Insert new item into list
 */
list_t *LIST_insert(list_t *root, void *data);

/*
 * Remo list and clean memory
 */
void LIST_clean(list_t *root);

#endif // _LIST_H_
