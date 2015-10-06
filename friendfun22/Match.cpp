
#include "Match.h"//只要下面要用到的类在上面都要声明不然会出问题的
#include "time.h"
#include <iostream>
using namespace std;
void Match::printTime(Time &t)
{
    cout<<t.m_iHour<<":"<<t.m_iMinute<<":"<<t.m_iSecond<<endl;
}
