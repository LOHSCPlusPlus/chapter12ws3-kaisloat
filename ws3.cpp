#include <fstream>
#include <iostream>
#include <cstring>
#include <stdlib.h>
#include <time.h>
#include "Rabbit.h"
using namespace std;

void PartA() {
    // Create 2 pointers to int called ptr1 and ptr2.
    int *ptr1 = nullptr;
    int *ptr2 = nullptr;
    // Set them both to nullptr when you create them


    // Create 1 pointer to a char called charPtr
    // set it to nullptr when you create it.
    char *charPtr = nullptr;
    
    // Create two integers named size1 and size2.
    int size1 = 0;
    int size2 = 0;

    // Prompt the user for 2 array sizes, and read them from 
    // the user into size1 and size2 (standard cout and cin flow).
    while(true){
      cout << "Enter a two array sizes: ";
      cin >> size1 >> size2;
      if((size1 && size2) > 0){
        break;
      }
      else if((size1 || size2) > 0){
        cout << "Invalid size." << endl;
      }
      else{
        cout << "Invalid sizes." << endl;
      }
    }
    ptr1 = new int[size1];
    ptr2 = new int[size2];

    // Fill the two arrays with random numbers using two different for loops.
    // To generate a random number use rand(); 
    // For example:
    // ptr1[index] = rand();
    for(int index = 0; index < size1; ++index){
      ptr1[index] = rand();
    }
    for(int index = 0; index < size2; ++index){
      ptr2[index] = rand();
    }

    
    // Using new, create an array of size 51 and set charPtr equal to it.
    charPtr = new char[51];
    
    // Prompt the user for a sentence of less than 50 words. 
    // After the prompt uncomment this code to read the sentence.
    cout << "\nEnter a sentence less than 50 words:" << endl;
    char temp;
    cin >> temp;
    cin.get(charPtr, 51);
    for(int index = 50; index > 0; --index){
      charPtr[index] = charPtr[index - 1];
    }
    charPtr[0] = temp;

    // print the string the user just entered using cout.
    cout << charPtr << endl;
    // Use delete[] to free the memory for ptr1, ptr2 and charPtr
    delete[] charPtr;
    delete[] ptr1;
    delete[] ptr2;
    // Build the file and run it
    // make -f ws3.mak
    // ./ws3
    // When it works, make sure everything is good using valgrind
    // valgrind --leak-check=full ./ws3
}


void PartB() {
    // Create a Rabbit pointer named r1 and set it equal to nullptr
  Rabbit *r1 = nullptr;
    // Create another Rabbit pointer named r2 and set it equal to nullptr
  Rabbit *r2 = nullptr;
    
    // Using new create a Rabbit by calling the default constructor and store the
    // pointer in r1
  r1 = new Rabbit();
    // Using new create a Rabbit by calling the parameter constructor.
    // The initName should be "Bugs" and the weight should be 140
    // Store the pointer in r2
  r2 = new Rabbit("Bugs", 140);
    // For the r1 pointer call readFromUser() and set the name to Flopsy
    // and the weight to 8
  r1 -> readFromUser();
    // For both r1 and r2 call print()
  r1 -> print();
  r2 -> print();

    // delete both r1 and r2. 
  delete r1;
  delete r2;
    // Build the file and run it
    // make -f ws3.mak
    // ./ws3
    // When it works, make sure everything is good using valgrind
    // valgrind --leak-check=full ./ws3


    // Commit your work
    // git add ws3.cpp
    // git commit -m "done"
    // git push

}


int main() {
    // seed the random number generator so that it generates a different
    // sequence every time we run this program
    srand(time(nullptr));
    PartA();
    PartB();

    return 0;
}
