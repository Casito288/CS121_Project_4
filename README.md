# CS121_Project_4

---
  include iostream
  include random numbers

  //                      (which horse it is, the horses array)  \
  call function 'advance' (int 'horseNum', int* 'horses');  \
  call function 'printLane' (int 'horseNum', int* 'horses');  \
  call function 'isWinner' (int 'horseNum', int* 'horses');  

  MAX is max length of array;

  main function
 
    //Indicies for each horse
    declare array 'horseNum' of integers 0 - 4; // names: (Lenard, Klein, Alger, Audrey, Derrick, Emyln)
    declare int* 'horses' = &'horseNum';
    declare boolean keepGoing true;
  
    while keepGoing is true
      prompt the user to press enter to flip the coin;
    
      advance('horseNum', *'horses');
      
      
      if value of 'printLane' == 'MAX' array length
        call function 'isWinner' ('horses', * 'horses');
      else 
        print "NO WINNER";  
---

Advance function
---
  function advance('horseNum', int* 'horses')  \
    declare variable 'coin' as random number 0 - 1;  \  

    if coin = 1
      pointer 'horses' += 1;
      print 'horseNum', 'horses';
    else
      print 'horseNum', 'horses';
---

printlane function
---
  function printLane('horseNum', * 'horses')  \
    declare array 'lane' [5][15] of "-"
    declare int* 'horseTemp' = &'horses';
    
    print array 'lane' ['horseNum'] and ['horseTemp'];
---

isWinner function
---
  function isWinner('horseNum', * 'horses')  \  
    declare int* 'horseTemp' = &'horses';

    if valueof('horseTemp') is eaual to max length of 'lane'
      print 'horseNum' is the winner!!;
    else
      print 'horseNum' and 'horses';
    
---

