#include <iostream>
#include <string>

#ifndef DATE_H
#define DATE_H

class Date {
public:
  Date(int year =1 , int month = 1, int day = 1);
  Date();
  int month() const;
  int day() const;
  int year() const;
  void updateMonth(int month);
  void updateDay(int day);
  void updateYear(int year);
  void next();
  void back();
  std::string toString();

private:
  int _year;
  int _month;
  int _day;
};

bool isDate(int year, int month, int day);
int getDaysInMonth(int month);
int dayOfYear(Date d);


#endif // DATE_H