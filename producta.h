#ifndef PRODUCTA_H
#define PRODUCTA_H
#include <iostream>

using namespace std;


class ProductA
{
public:
    ProductA();
    virtual ~ProductA();

public:
    virtual void show() = 0;
};

#endif // PRODUCTA_H
