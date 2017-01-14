/* Aleksandr Movsesyan
     Programming Lab 2
     pl2.cpp
     CS 110A
     Craig Persiko

     Converts meters into feet and inches and loops as long as user wants
  */

#include <iostream>
using namespace std;

const float FEET_INCHES_IN_NUMBER_OF_METERS = 3.28;

float Get_Meters ();
// asks the user to enter the number of meters and returns it to the main
function

void Conversion (int& feet, double& inches, double meters);
//takes the number of meters and coverts into feet and inches and uses
call-by-referance to send feet and inches back to the main
//function

void Result_Of_Conversion (int feet, double inches);
//outputs the result of the coversion in feet and inches

int main()
{
  int feet;
  double inches, meters;
  char run_again;

  cout << "\nWelcome to the ultimate converter!";

  do
  {
    meters = Get_Meters();
    Conversion (feet, inches, meters);
    Result_Of_Conversion(feet, inches);
    cout << "\n\nWould you like to make another conversion? ";
    cin >> run_again;
  }while (  run_again == 'Y' || run_again == 'y');
  cout << "Thank you for using the ultimate converter.\n";
  return 0;
}

// asks the user to enter the number of meters and returns it to the main
function
float Get_Meters ()
{
  double meters;

  cout << "\nEnter the number of meters you would like to convert: ";
  cin >> meters;

  return meters;
}

//takes the number of meters and coverts into feet and inches and uses
call-by-referance to send feet and inches back to the main
//function
void Conversion(int& feet, double& inches, double meters)
{
  double dfeet, dinches;

  dfeet = meters * FEET_INCHES_IN_NUMBER_OF_METERS;
  feet = dfeet;
  dinches = dfeet - feet;
  inches = dinches * 12;
}

//outputs the result of the coversion in feet and inches
void Result_Of_Conversion(int feet, double inches)
{
  cout << "That was " << feet << " feet and " << inches << " inches";

}
