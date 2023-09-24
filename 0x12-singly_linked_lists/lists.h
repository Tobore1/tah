/* main.h */
#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stddef.h>

/* Structure for the linked list node */
typedef struct list_s {
    char *str;
    size_t len;
    struct list_s *next;
} list_t;

/* Function prototype */
size_t print_list(const list_t *h);

/* header for the */
#endif /* MAIN_H */
