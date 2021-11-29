/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Ben Phung
 */

#include <iostream>
#include "std_lib_facilities.h"

using namespace std;

int main() {
  string operation;
  double op1, op2;

  cout << "Enter operation and two operands: ";
  cin >> operation >> op1 >> op2;
  if (operation == "+" || operation == "plus")
  {
    cout << op1 <<" plus "<< op2 <<" is equal to "<<(op1+op2);
  }
  else if (operation == "-" || operation == "minus")
  {
    cout << op1 <<" minus "<< op2 <<" is equal to "<<(op1-op2);
  }
  else if (operation == "*" || operation == "mul")
  {
    cout << op1 <<" times "<< op2 <<" is equal to "<<(op1*op2);
  }
  else if (operation == "/" || operation == "div")
  {
    cout << op1 <<" divided by "<< op2 <<" is equal to "<<(op1/op2);
  }
  else
  {
    cout<<"Invalid input";
  }
}
