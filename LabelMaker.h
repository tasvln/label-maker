/*
  Name: Temitope Oladimeji Samuel Adebayo

  I have done all the coding by myself and only copied the code that my professor 
  provided to complete my workshops and assignments.
*/

#ifndef SDDS_LABELMAKER_H
#define SDDS_LABELMAKER_H

#include "Label.h"

namespace sdds {
  class LabelMaker {
    Label* m_labels;
    int m_noOfLabels;
  public:
    LabelMaker(int noOfLabels);
    void readLabels();
    void printLabels()const;
    ~LabelMaker();
  };
}

#endif // !SDDS_LABELMAKER_H