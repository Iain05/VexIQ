//----------------------------------------------------------------------------
//                                                                            
//    Module:       main.cpp                                                  
//    Author:       {author}                                                  
//    Created:      {date}                                                    
//    Description:  IQ project                                                
//                                                                            
//----------------------------------------------------------------------------

// Include the IQ Library
#include "iq_cpp.h"

// Allows for easier use of the VEX Library
using namespace vex;

int main() {
  // Begin project code
  //400 per quarter
  Brain.playNote(4, 0, 600);
  Brain.playNote(4, 1, 1000);
  Brain.playNote(3, 4, 400);
  Brain.playNote(4, 1, 600);
  Brain.playNote(4, 2, 600);
  Brain.playNote(4, 4, 100);
  Brain.playNote(4, 3, 100);
  Brain.playNote(4, 2, 200);
  Brain.playNote(4, 0, 600);
  Brain.playNote(4, 1, 1000);
  Brain.playNote(3, 4, 1000);
  wait(250, msec);
  Brain.playNote(3, 4, 100);
  Brain.playNote(3, 4, 100);
  Brain.playNote(3, 5, 100);
  Brain.playNote(3, 6, 200);
  Brain.playNote(4, 0, 100);
  //repeat
  Brain.playNote(4, 0, 600);
  Brain.playNote(4, 1, 1000);
  Brain.playNote(3, 4, 400);
  Brain.playNote(4, 1, 600);
  Brain.playNote(4, 2, 600);
  Brain.playNote(4, 4, 100);
  Brain.playNote(4, 3, 100);
  Brain.playNote(4, 2, 200);
  Brain.playNote(4, 0, 600);
  Brain.playNote(4, 1, 1000);
  Brain.playNote(3, 4, 400);
  Brain.playNote(3, 6, 200);
  Brain.playNote(4, 0, 200);
  Brain.playNote(4, 0, 400);
  wait(400, msec);
  Brain.playNote(4, 0, 100);
  Brain.playNote(4, 0, 200);
  Brain.playNote(4, 0, 100);
  wait(400, msec);
  Brain.playNote(3, 5, 200);
  Brain.playNote(3, 6, 200);
  Brain.playNote(4, 0, 200);
  Brain.playNote(4, 0, 200);
  Brain.playNote(4, 1, 200);
  Brain.playNote(3, 6, 300);
  Brain.playNote(3, 5, 100);
  Brain.playNote(3, 4, 1000);

}
