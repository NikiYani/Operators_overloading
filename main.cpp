#include <QCoreApplication>
#include "mytype.h"
#include "iostream"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    MyType b(1, 2.5);

    MyType c = -b;

    MyType d = c++;
    ++c;

    MyType e = c--;
    --c;

    if(b == c)
    {
        c++;
    }
    else
    {
        c = b;
    }

    if(e >= d)
    {
        c++;
    }
    else
    {
        d--;
    }

    if(c < e)
    {
        e++;
    }
    else
    {
        c--;
    }

    MyType *f[3];

    f[0] = new MyType(1, 5.35);
    f[1] = new MyType(2, 13.23);
    f[2] = new MyType(3, 4363.62);

    std::cout << f[1]->

    return a.exec();
}
