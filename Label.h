/*
  Name: Temitope Oladimeji Samuel Adebayo

  I have done all the coding by myself and only copied the code that my professor 
  provided to complete my workshops and assignments.
*/

#ifndef SDDS_LABEL_H
#define SDDS_LABEL_H
#include <iostream>

namespace sdds {
  class Label {
    char* m_frame;
    char* m_label;
    void setToDefault();
    bool isEmpty()const;
  public:
    Label();
    Label(const char* frameArg);
    Label(const char* frameArg, const char* content);
    ~Label();
    void readLabel();
    std::ostream& printLabel()const;
  };
}

#endif // !SDDS_LABEL_H