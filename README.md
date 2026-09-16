# CS121_Project_4

---
  include iostream
  include random numbers

  //                      (which horse it is, the horses array)  \
  declare function 'advance' (int 'horseNum', int* 'horses');  \
  declare function 'printLane' (int 'horseNum', int* 'horses');  \
  declare function 'isWinner' (int 'horseNum', int* 'horses');  

  MAX is max length of array;

  main function
 
    //Indicies for each horse  
    declare array 'horseNum' of integers 0 - 4; // names: (Lenard, Klein, Alger, Audrey, Derrick, Emyln)  
    declare int* 'horses' = &'horseNum';  
    declare boolean keepGoing true;
  
    while keepGoing is true {
      prompt the user to press enter to flip the coin;
    
      call advance function and pass array horseNum and pointer horses
      call printLine function and pass array horsNum and pointer horses
      call isWinner function and pass array horseNum and pointer horses
      
      if that horse won
        set keepgoing as false;

      ask user for input to start next turn
   }     
---

Advance function
---
  function advance(int 'horseNum', int* 'horses')  \
    declare variable 'coin' as random number 0 - 1;  

    if coing is 1 add 1 to 'horses' array at index 'horseNum'
---

printlane function
---
  function printLane(int 'horseNum', int* 'horses')  \
    declare array 'lane' [5][15] of "-"  \
    declare int* 'horseTemp' = &'horses';
    
    print array 'lane' ['horseNum'] and ['horseTemp'];
---

isWinner function
---
  function isWinner(int 'horseNum', int* 'horses')  
    declare int* 'horseTemp' = &'horses';

    if &'horses' is eaual to MAX {
      print 'horseNum' is the winner!!;
    }
---

