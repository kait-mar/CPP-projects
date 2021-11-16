#ifndef SERIALIZE_H
#define SERIALIZE_H

#include <iostream>

uintptr_t serialize(void* ptr);
void* deserialize(uintptr_t raw);

#endif