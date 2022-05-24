#pragma once
#include "list.h"

class Queue : public List
{
public:
    void push_front(int) override;
    void print(std::ostream& out=std::cout);
};
