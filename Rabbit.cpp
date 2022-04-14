#include "Rabbit.h"
#include "ReadUtils.h"
#include <iostream>
#include <cstring>
using namespace std;

Rabbit::Rabbit() {
  for (int index = 0; index < MAX_CHAR_LEN; index++) {
    name[index] = '\0';
  }
  maxWeight = 0;
}
Rabbit::Rabbit(const char initName[], double weight) {
    strcpy(name, initName);
    maxWeight = weight;

}

void Rabbit::print() {
    cout << name << ";" << maxWeight << endl;
}
  
  
void Rabbit::readFromUser() {
    cout << "Enter a rabbit name: ";
    if (cin.peek() == '\n') {
        cin.ignore(100, '\n');
    }
    cin.get(name, Rabbit::MAX_CHAR_LEN);
    maxWeight = readDouble("Enter max rabbit weight: ");
}
      
  
