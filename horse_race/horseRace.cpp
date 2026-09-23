#include <iostream>
#include <string>
#include <random>
#include <ctime>
#include <array>

void advance(int hn, int* horseLane);
void printLane(int hn, int* horseLane);
bool isWinner(int hn, int* horseLane);

const int TRACK_LENGTH = 15;
const int HORSES = 5;

int main () {

  // read current system clock to seed the random generator
  // declaring array of horses & boolean
  srand(time(NULL));
  int horseLane[] = {0, 0, 0, 0, 0};
  bool keepGoing = true;


  while (keepGoing){
 
    std::cout << "press enter to flip the coin: " << std::endl;
    std::cin.get(); // get any input from user
    
    // loop horses from 0 - 4, increasing by 1 each iteration
    for (int hn = 0; hn <= HORSES - 1; hn++){

      // declaring functions
      advance(hn, horseLane);
      printLane(hn, horseLane);

      // if horse won, then tell user, and end loop
      if (isWinner(hn, horseLane) == false){
        std::cout << "Horse " << hn << " has won!!" << std::endl;	
        keepGoing = false;
      }

    } // end for
  } // end while
} // end main


void advance(int hn, int* horseLane){
  
  // generating random num
  int rd = rand() % 2;
  horseLane[hn] += rd;

} // end advance function

void printLane(int hn, int* horseLane){

  // the lane the horses will be printed on
  std::string lane(TRACK_LENGTH, '-');

  // replacing the string (lane) value at the horses indicie on the array
  lane[horseLane[hn]] = '0' + hn; // adds the ASCII value of 'hn' to '0'
  std::cout << " |" << lane << "| " << horseLane[hn] << std::endl;
  

} // end printLane function

bool isWinner(int hn, int* horseLane){

  // if horse reaches end of track, break loop, else keep going
  if (horseLane[hn] == TRACK_LENGTH){
    return false;
  } else { return true; } // end if statement

} // end isWinner function
