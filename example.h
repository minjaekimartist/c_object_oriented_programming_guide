#pragma once

typedef struct example
{
    int length;
    double * pointer;

    double (*index)(struct example* self, int i);
    int (*len)(struct example* self);
} Example;

Example example_init(int len);

void destruct_example(Example* object);