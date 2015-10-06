
#ifndef STUDENT_H
#define STUDENT_H
class Time;//在match上面声明time不然在printtime中用得到time会报错
class Match
{
public:
    void printTime(Time &t);//成员函数，声明子啊类的内部
};
#endif // STUDENT_H
