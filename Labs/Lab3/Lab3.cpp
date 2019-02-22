/* Lab 2 - Logic Structures

   Modified by: Luis Grijalva, 22-Feb 2018
   For: OOP 2200 - Object-Oriented Programming I
*/

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
  double average =0;
  int input;
  double total=0;
  int minValue = 0;
  int maxValue=60;
  for (int count=1;count<=3;count++){
    average=0;
    cout<<"Welcome user "<<count<<"\n -------------------------------"<<endl;
    for (int count2=1;count2<=4;count2++){
      cout<<"Please enter your score for round "<<count2<<" ";
      cin>>input;
      while(cin.fail()|| input<minValue || input>maxValue)
      {
        cin.clear();
        cin.ignore(80,'\n');
        cout << "Input must be numeric and cannot be less than "<<minValue<<" or bigger than "<<maxValue<<". Please try again: ";
        cin>>input;

      }
      average +=input;
      if (count2<4){
        cout<<"Your score for round "<<count2<<" is "<<input<<endl;
      }
      else{
        total+=average;
        average/=4;
        average=truncf(average * 10) / 10;
        cout<<"Your score for round "<<count2<<" is "<<input<<endl;
        cout<<"\nYour total score is "<<total<<endl;
        cout<<"\nYour average for this round is "<<average<<"\n ----------------------------------"<<"\n\n\n"<<endl;
      }
    }
  }
  total=total/3;
  total=truncf(total * 10) / 10;
  cout<<"\n\n\n The total average for this game was: "<<total<<endl;
  return 0;
}
