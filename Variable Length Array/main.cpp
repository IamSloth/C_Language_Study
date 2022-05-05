#include <iostream>
#include "Arr.h"

int main()
{
    std::cout << "Hello World!\n";
    
    struct _tabArr s = {};

    InitArr(&s);

    for (int i = 0; i < 100; ++i)
    {
        PushBack(&s, i);
    }

    for (int i = 0; i < s.iCount; i++)
    {
        printf("%d ", s.pInt[i]);
    }

    ReleaseArr(&s);

    return 0;
}

