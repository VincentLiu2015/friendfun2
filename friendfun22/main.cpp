#include <iostream>
#include "stdlib.h"
#include "Time.h"
#include "Match.h"
using namespace std;
//��Ԫ��Ա����
//void printTime(Time &t);


int main(void)
{

    Time t (6,34,25);
    Match m;
    m.printTime(t);
    //printTime(t);
    system("pause");
    return 0;
}
