#ifndef DATAHOLDER_HPP
#define DATAHOLDER_HPP

#include <iostream>
#include <string>

template<typename T>

class DataHolder {

  private:

  T storedValue;
  T maxValue;
  T minValue;

  public:

  DataHolder (T val, T min, T max) : minValue(min), maxValue(max) {

    if (val > min && val < max ) {
      storedValue = val;
    }

    else if (val > max) {
      storedValue = max;
      cout << "WARNING: " << val << " is too high! Setting value to " << max << "!" << endl;
    }

    else if (val < min) {
      storedValue = min;
      cout << "WARNING: " << val << " is too low! Setting " << val << " to " << min << endl;
    }

  }

void setValue (T newValue) {

    if (storedValue < maxValue && storedValue > minValue) {
      newValue = storedValue;
    }

    else if (newValue > maxValue) {
      maxValue = storedValue;
      cout << "WARNING: val is too high! Setting value to max!" << endl;
    }

    else if (newValue < minValue) {
      minValue = storedValue;
      cout << "WARNING: val is too low! Setting value to min!" << endl;
    }

  }
 
T getValue () const {
  return storedValue;
}

};

template<> 

class DataHolder<string> {

  private:

  string storedValue;

  public:

  DataHolder (string val) : storedValue(val) {}

  void setValue (string newString) {
    storedValue = newString;
  }

  string getValue () { return storedValue; }
  
};

#endif