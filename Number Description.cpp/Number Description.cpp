#include <iostream>
using namespace std;

int main() {
  int inspect;
  int multiple;
  int remainder;
  string evenOdd;

  cout << "Enter a whole number:\n";
  cin >> inspect;
  
  //1. assign multiple the value of dividing inspect by 10

  multiple = (inspect / 10);
  //2. assign remainder the value of dividing inspect by 10
  remainder = (inspect % 10);
  //3. assign evenOdd the value of "even" if inspect divided by two 
  //   has a remainder of 0, otherwise assign it the value of "odd"

  if (inspect % 2 == 0){
    evenOdd = "even";
  }
  else{
    evenOdd = "odd";
  }
  

  cout << "That number is " << evenOdd << endl;
  cout << "It is equal to " << (multiple*10);
  
  //4. only display the following message when remainder has a value 
  //   greater than 0

  if (remainder != 0){
    cout << " plus " << remainder;
    }
  cout << "\nThat is all\n";

  return 0;
}
