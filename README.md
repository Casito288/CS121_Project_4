# CS121_Project_4

---
  include iostream
  include random numbers

  //                      (which horse it is, the horses array)  \
  call function 'advance' ('horses', pointer 'horses')  \
  call function 'printLane' ('horses', pointer 'horses')  \
  call function 'isWinner' ('horses', pointer 'horses')  \

  MAX is max length of array

  main integer function
 
    declare array 'horses' of integers 0 - 4; 
    // names: (Lenard, Klein, Alger, Audrey, Derrick, Emyln)
    declare boolean keepGoing true
  
    while keepGoing is true
      prompt the user to press enter to flip the coin
    
    
      if value of 'printLane' == 'MAX' array length
        call function 'isWinner' ( value of 'horses', pointer 'horses')
      else 
        print "NO WINNER"  
---

Advance function
---
  void advance(integer 'horseNum', pointer integer 'horses')  \
    declare variable 'coin' as random number 0 - 1  \
    declare integer 'horseTempNum'  \

    if coin = 1
      pointer 'horses += 1
      'horseTempNum' = value at 'horses'
      print 'horseNum' and 'horseTempNum'
    else
      print 'horseNum' and 'horses'
---

printlane function
---
  void printLane(integer 'horseNum', pointer integer 'horses')  \
    declare array 'lane' with 1 row and 15 columns  \
  
    print array lane ['horseNum'] and ['horses']
---

isWinner function
---
  bool isWinner(integer 'horseNum', pointer integer 'horses')  \
    declare array 'lane' with 1 row and 15 columns  \

    if valueof('horses') is eaual to max length of 'lane'
      print 'horseNum' is the winner!!
      return true;
  
    else
      return false or 0?
    
---

