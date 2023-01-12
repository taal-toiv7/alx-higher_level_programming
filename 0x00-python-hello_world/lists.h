#ifndef LISTS.H
#define LISTS.H

#include <stdlib.h>


typedef struct listint_s
{
    int n;
    struct listint_s *next;
} listint_t;

size_t print listint(const listint_t *h)