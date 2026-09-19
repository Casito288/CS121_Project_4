#include <iostream>
#include <ctime>
#include <cstdlib>
#include <string>

void advance(int* horses);
void printLane(int* horses);
//bool isWinner(int horseNum, int* horses);

const int MAX_LENGTH = 15;
const int MAX_HORSES = 5;


int main (){

  int horses[MAX_HORSES] = {0, 0, 0, 0, 0};
  bool keepGoing = true;
  srand(time(NULL));

  std::cout << "Would you like to play a game? Press enter to begin: " << std::endl;
  std::cin.get();

  while (keepGoing){
    
    std::cout << "Press enter to flip the coing again: " << std::endl;
    std::cin.get();
    
    advance(horses);
    printLane(horses);

    for (int i = 0; i < MAX_LENGTH; i++) {
      if (horses[i] == MAX_LENGTH - 1) {
        keepGoing = false;

      } // end if statement
    } // end for loop
  } // end while loop
} // end main function


void advance(int* horses){
  
  for (int i = 0; i < MAX_HORSES; i++){
    int rd = rand() % 2;
    if (rd == 1){
      horses[i] += 1;

    } // end if statement
  } // end for loop
} // end advance function

void printLane(int* horses){

  std::string horseID[] = {"Lenard", "Klein", "Alger", "Audrey", "Derrick", "Emyln"};
  char horseLetter[] = {'L', 'K', 'A', 'U', 'D'};
  
  for (int i = 0; i < MAX_HORSES; i++){
    std::string lane(MAX_LENGTH, '-');

    if (horses[i] >= 0 && horses[i] < MAX_LENGTH) {
      lane[horses[i]] = horseLetter[i];
      std::cout << "Horse: " << horseID[i] << " |" << lane << "|" << std::endl;

    } // end if statement
  } // end for loop
} // end printLane function
