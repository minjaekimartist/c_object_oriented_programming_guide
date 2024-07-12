#include <stdlib.h>

#include "example.h"

inline double example_index(Example* self, int i) { return self->pointer[i]; }
inline int example_len(Example* self) { return self->length; }

Example example_init(int len)
{
    Example example;
    example.length = len;
    example.pointer = (double*)malloc(sizeof(double) * len);

    example.index = example_index;
    example.len = example_len;

    return example;
}

void destruct_example(Example* object) { free(object->pointer); }