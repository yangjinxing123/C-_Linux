#include "inherit_realization.h"

using namespace std;

void inherit_point_Fun()
{
    int way = m_001;
    
    switch(way)
    {
        case m_001:
            m_001_FUN();
            break;
        default:
            break;
    }

}

/*******************************/
// 三种继承类型的区别
void m_001_FUN()
{

}
void Base::printProtected()
{
    cout << "print Protected" << endl;
}

void Base::printPublic()
{
    cout << "print Public" << endl;
}

void A::print()
{
    printProtected();
    printPublic();
}

void B::print()
{
    //printProtected();
    //printPublic();
}
/*******************************/