/* Lab1.cpp - Lab 1 Getting Started

   Modified by: Luis Grijalva, 23-Jan-2018
   For: OOP 2200 - Object-Oriented Programming I
*/
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
//Declare variables
  int x1;
  int x2;
  int y1;
  int y2;
  double distance;

  //Prompt for input
  cout << "Insert the coordinates in the following order: x1 x2 y1 y2"<<endl;
  //Store it separately
  cin>>x1>>x2>>y1>>y2;

  //Calculate distance
  distance = sqrt(pow(x2-x1,2)+pow(y2-y1,2));
  
  //Output result
  cout << endl << "The distance between them is: "<< distance<<endl;
  return 0;
}
