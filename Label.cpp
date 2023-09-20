/*
  Name: Temitope Oladimeji Samuel Adebayo

  I have done all the coding by myself and only copied the code that my professor 
  provided to complete my workshops and assignments.
*/

#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include "cstring.h"
#include "Label.h"

using namespace std;

namespace sdds {
  void Label::setToDefault() {
    char defaultFrame[] = "+-+|+-+|";

    m_label = nullptr;
    m_frame = new char[strLen(defaultFrame) + 1];
    strCpy(m_frame, defaultFrame);
  }

  bool Label::isEmpty()const {
    bool empty = true;

    if (m_label != nullptr && m_frame != nullptr) {
      empty = false;
    }

    return empty;
  }
  
  Label::Label() {
    setToDefault();
  }

  Label::Label(const char* frameArg) {
    m_label = nullptr;

    if (frameArg != nullptr) {
      m_frame = new char[strLen(frameArg) + 1];
      strCpy(m_frame, frameArg);
    }
  }

  Label::Label(const char* frameArg, const char* content) {
    if (frameArg != nullptr) {
      m_frame = new char[strLen(frameArg) + 1];
      strCpy(m_frame, frameArg);
    }
    
    if (content != nullptr) {
      if (strLen(content) <= 70) {
        m_label = new char[strLen(content) + 1];
        strCpy(m_label, content);
      }
    }
  }

  Label::~Label() {
    delete[] m_label;
    delete[] m_frame;
  }

  void Label::readLabel() {
    char content[71];
    cin.getline(content, 71, '\n');

    if (strLen(content) <= 70) {
      m_label = new char[strLen(content) + 1];
      strCpy(m_label, content);
    }
  }

  std::ostream& Label::printLabel() const {
    int i = 0;

    if (!isEmpty()) {
      cout << m_frame[0];
      for (i = 0; i < strLen(m_label) + 2; i++) {
        cout << m_frame[1];
      }
      cout << m_frame[2] << endl;

      cout << m_frame[7];
      for (i = 0; i < strLen(m_label) + 2; i++) {
        cout << " ";
      }
      cout << m_frame[3] << endl;

      cout << m_frame[7] << " " << m_label << " " << m_frame[3] << endl;

      cout << m_frame[7];
      for (i = 0; i < strLen(m_label) + 2; i++) {
        cout << " ";
      }
      cout << m_frame[3] << endl;

      cout << m_frame[6];
      for (i = 0; i < strLen(m_label) + 2; i++) {
        cout << m_frame[5];
      }
      cout << m_frame[4];
    }

    return cout;
  }
}
