#include <iostream>
#include <fstream>

#include "Counter.h"

using namespace std;

void Counter::increment() {
  this->count++;
}

int Counter::get_count() {
  return this->count;
}

string& Counter::get_action() {
  return this->action;
}

int main() {
  Counter* helsing;
  helsing = new Counter[26];

  int action;

  do {
    cout << "What did Helsing do?" << endl;
    cin >> action;

    for (int i = 0; i < 26; i++) {
      if (action == i) {
        helsing[i].increment();
      }
    }
  }
  while (action != -1);

  ofstream Helsing_File;
  Helsing_File.open("helsing_file.csv");

  for (int i = 0; i < 26; i++) {
    Helsing_File << helsing[i].get_action()
    << "," << helsing[i].get_count() << "\n";
  }

  Helsing_File.close();

  return 0;
}
