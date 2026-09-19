#include <iostream>
#include <string>
#include <random>
#include <ctime>
#include <array>

void advance(int hn, int* horseLane);
void printLane(int hn, int* horseLane);
//bool isWinner(int hn, int* horseLane);

const int TRACK_LENGTH = 15;
const int HORSES = 5;

int main () {

  srand(time(NULL));
  int horseLane[] = {0, 0, 0, 0, 0};
  bool keepGoing = true;


  while (keepGoing){
 
    std::cout << "press enter to flip the coin: " << std::endl;
    std::cin.get();
    
    for (int hn = 0; hn <= HORSES - 1; hn++){

      advance(hn, horseLane);
      printLane(hn, horseLane);

      /*if (isWinner(hn, horseLane) != keepGoing){
      
        keepGoing = false;
      }*/

    } // end for
  } // end while
} // end main


void advance(int hn, int* horseLane){

  int rd = rand() % 2;
  horseLane[hn] + rd;

} // end advance function

void printLane(int hn, int* horseLane){

  //std::array lane[TRACK_LENGTH];
  std::string lane(TRACK_LENGTH, "-");
  
  lane[horseLane[hn]] = hn;
  //lane.fill("-");
  //lane[horseLane[hn]] = horseLane[hn];
  std::cout << hn << " |" << lane << "| " << std::endl;

} // end printLane function

/*bool isWinner(int hn, int* horseLane){

  if (horseLane[hn] == MAX_LENGTH - 1){
  
    return false;
  }
}*/
