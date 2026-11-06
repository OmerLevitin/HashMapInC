# pragma once

typedef void * DATA__key_t, *DATA__value_t;

typedef struct DATA__element_s {
    DATA__key_t key;
    DATA__value_t value;
} DATA__element_t;