#ifndef COUNTER_H_
#define COUNTER_H_

#include <string>

using namespace std;

class Counter {
public:
  void increment();
  int get_count();
  string& get_action();
private:
  int count;
  string action;

};

#endif /*COUNTER_H_*/
