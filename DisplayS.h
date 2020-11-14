#ifndef DisplayS_h
#define DisplayS_h
#include "Arduino.h"
class DisplayS{
  public:
   DisplayS(int A, int B, int C, int D, int E, int F, int G);
   void zero();
   void one();
   void two();
   void three();
   void four();
   void five();
   void six();
   void seven();
   void eight();
   void nine();
  private:
   int AA; 
   int BB; 
   int CC; 
   int DD; 
   int EE; 
   int FF; 
   int GG;
};
#endif
