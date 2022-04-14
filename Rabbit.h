#include <iostream>
#include <fstream>
using namespace std;

class Rabbit {
  public:
    Rabbit();
    Rabbit(const char initName[], double weight);
    void print();
    void readFromUser();
  private:
    enum {MAX_CHAR_LEN=100};
    char name[MAX_CHAR_LEN];
    double maxWeight;
};
