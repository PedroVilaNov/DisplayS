#include "DisplayS.h"
#include <stdio.h>
#include <string.h>
#include <inttypes.h>
#include "Arduino.h"
DisplayS:: DisplayS(int A, int B, int C, int D, int E, int F, int G){
   AA = A; 
   BB = B; 
   CC = C; 
   DD = D; 
   EE = E; 
   FF = F; 
   GG = G;
   pinMode(A, INPUT);
   pinMode(B, INPUT);
   pinMode(C, INPUT);
   pinMode(D, INPUT);
   pinMode(E, INPUT);
   pinMode(F, INPUT);
   pinMode(G, INPUT);
}
void DisplayS::zero(){
  pinMode(AA, OUTPUT);
  pinMode(BB, OUTPUT);
  pinMode(CC, OUTPUT);
  pinMode(DD, OUTPUT);
  pinMode(EE, OUTPUT);
  pinMode(FF, OUTPUT);
  pinMode(GG, INPUT);
}
void DisplayS::one(){
  pinMode(AA, INPUT);
  pinMode(BB, OUTPUT);
  pinMode(CC, OUTPUT);
  pinMode(DD, INPUT);
  pinMode(EE, INPUT);
  pinMode(FF, INPUT);
  pinMode(GG, INPUT);
}
void DisplayS::two(){
  pinMode(AA, OUTPUT);
  pinMode(BB, OUTPUT);
  pinMode(CC, INPUT);
  pinMode(DD, OUTPUT);
  pinMode(EE, OUTPUT);
  pinMode(FF, INPUT);
  pinMode(GG, OUTPUT);
}
void DisplayS::three(){
  pinMode(AA, OUTPUT);
  pinMode(BB, OUTPUT);
  pinMode(CC, OUTPUT);
  pinMode(DD, OUTPUT);
  pinMode(EE, INPUT);
  pinMode(FF, INPUT);
  pinMode(GG, OUTPUT);
}

void DisplayS::four(){
  pinMode(AA, INPUT);
  pinMode(BB, OUTPUT);
  pinMode(CC, OUTPUT);
  pinMode(DD, INPUT);
  pinMode(EE, INPUT);
  pinMode(FF, OUTPUT);
  pinMode(GG, OUTPUT);
}
void DisplayS::five(){
  pinMode(AA, OUTPUT);
  pinMode(BB, INPUT);
  pinMode(CC, OUTPUT);
  pinMode(DD, OUTPUT);
  pinMode(EE, INPUT);
  pinMode(FF, OUTPUT);
  pinMode(GG, OUTPUT);
}
void DisplayS::six(){
  pinMode(AA, OUTPUT);
  pinMode(BB, INPUT);
  pinMode(CC, OUTPUT);
  pinMode(DD, OUTPUT);
  pinMode(EE, OUTPUT);
  pinMode(FF, OUTPUT);
  pinMode(GG, OUTPUT);
}
void DisplayS::seven(){
  pinMode(AA, OUTPUT);
  pinMode(BB, OUTPUT);
  pinMode(CC, OUTPUT);
  pinMode(DD, INPUT);
  pinMode(EE, INPUT);
  pinMode(FF, INPUT);
  pinMode(GG, INPUT);
}
void DisplayS::eight(){
  pinMode(AA, OUTPUT);
  pinMode(BB, OUTPUT);
  pinMode(CC, OUTPUT);
  pinMode(DD, OUTPUT);
  pinMode(EE, OUTPUT);
  pinMode(FF, OUTPUT);
  pinMode(GG, OUTPUT);
}
void DisplayS::nine(){
  pinMode(AA, OUTPUT);
  pinMode(BB, OUTPUT);
  pinMode(CC, OUTPUT);
  pinMode(DD, OUTPUT);
  pinMode(EE, INPUT);
  pinMode(FF, OUTPUT);
  pinMode(GG, OUTPUT);
}
