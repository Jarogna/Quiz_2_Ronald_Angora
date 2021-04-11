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
    int size = 0;
    int temp = 0;
    int array[size];
    welcomeMessage(); //Function call
    
    cout << "\nHow many grades are you entering? \n";
    cin >> size;
    for(int i=0; i<size; i++)
    {
      cout << "Grade Entry: " << endl;
      cin >> array[size];
    }
    
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
  	
    //display the results
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