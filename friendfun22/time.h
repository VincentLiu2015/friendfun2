
#ifndef TIME_H
#define TIME_H
#include<iostream>
#include "Match.h"//��Ϊ�����class time�е�match��Ԫ����ʱ���õ���match����Ҫ�����������match��������Ȼ����
using namespace std;
class Time
{
    friend void Match::printTime(Time &t);//����������Ҫ������Ա��������Ԫ
public:
    Time(int hour,int min,int sec);//���캯��
private:
    int m_iHour;
    int m_iMinute;
    int m_iSecond;
};
#endif // TIME_H
