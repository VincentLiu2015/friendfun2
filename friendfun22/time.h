
#ifndef TIME_H
#define TIME_H
#include<iostream>
#include "Match.h"//因为下面的class time中的match友元声明时候用到了match所以要在这里包含到match的声明不然报错
using namespace std;
class Time
{
    friend void Match::printTime(Time &t);//在这里我们要声明成员函数的友元
public:
    Time(int hour,int min,int sec);//构造函数
private:
    int m_iHour;
    int m_iMinute;
    int m_iSecond;
};
#endif // TIME_H
