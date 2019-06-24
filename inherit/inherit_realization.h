#ifndef INHERIT_RELIZATION_H
#define INHERIT_RELIZATION_H

#include "inherit_point.h"

void inherit_point_Fun();


/*******************************/
// 三种继承类型的区别
void m_001_FUN();

class Base
{
    
protected:
    void printProtected();
public:
    void printPublic();

};

class Derived1 : protected Base
{};

class Derived2 : private Base   
{};

class A : public Derived1
{
public:
    void print();
};

class B : public Derived2
{
public:
    void print();
};
/*******************************/

#endif