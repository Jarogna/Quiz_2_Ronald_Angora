/* Quiz 2 Arrays & Sorting
Create a program that accepts user input, stores the input into an array, sorts the array and display results back to the user.
Teacher: Dr. Tyson McMillian
Student: Ronald Angora
Date: 04/10/2021 */

#include <iostream>
#include "Input_Validation_Extended.h"
#include <algorithm>
#include <functional>
#include <string>
using namespace std;

void welcomeMessage();
void userName();

int main() 
{
  char exit = '\0';

  userName();

  do
  {
    const int max = 100;
    int size = 0;
    double temp = 0.0;
    double inputGrade = 0.0;
    double array[max];
    welcomeMessage(); //Function call
    
    cout << "\nHow many grades are you entering? \n";
    cin >> size;
    for(int i=0; i<size; i++)
    {
      cout << "Grade Entry: " << endl;
      inputGrade  = validateDouble(inputGrade);
      array[i] = inputGrade;
    }
    
    //Sort the results DESC
    /*for(int b=0; b < size; b++)
	  {
		  for(int inner_loop = b+1; inner_loop < size; inner_loop++)
		  {
			//a nested (loop withing a loop) loop to initiate a swap process
			  if(array[b] < array[inner_loop]) //hint > is ASC, < is DESC
			  {
				  temp = array[b]; 
			  	array[b] = array[inner_loop]; 
				  array[inner_loop] = temp; 	
			  }	
		  }	
	  }*/
  	
    //Display the results
	  cout << "\nCurrent values in the numbers array with " << size << " elements DESC: " << endl; 
	  for(int a = 0; a < size; a++)
	  {
		  cout << "numbers[" << a << "]=" << array[a] << endl; 
	  }	

    exit = validateChar(exit);
  } while(exit != 'n' && exit != 'N'); // N or n will exit. De Morgan's Law

  return 0;
}

void welcomeMessage()
{
  string color;
  string reset = "\x1b[0m";

  color = "\x1b[" + to_string(32) + ";1m";
  cout << color << "\n\nLet's get started! " << reset << endl;
  for(int i=0; i < 18; i++)
  {
    cout << "*";
  }
}

void userName()
{
  string name;
  string color;
  string reset = "\x1b[0m";

  color = "\x1b[" + to_string(31) + ";1m";

  cout << "\nWhat's your name? ";
  getline(cin, name);
  cout << "Welcome " << color << name << reset << "!";
}