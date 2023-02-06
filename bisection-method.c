/*

  Bisection method (Interations)
  Subject Applied Mathematics
  
  License: MIT Open Source
  Author: Akrom Abdulvokhidov

*/

#include <stdio.h>

float a = 1; // Change input value
float b = 2; // Change input value
float m = 0; 

float given_function(float x) {
   return (x * x) - 3; // Change this function line for another examples
}

int check_if(float fa, float fb) {
   if (fa * fb < 0) {
      return 1; 
   } else {
      return 0; 
   }
}

float medium(float a, float b) {
   return (a + b) / 2; 
}



int main() {
  
  float fa = given_function(a);
  float fb = given_function(b);
   
  m = medium(a, b); 
  float fm = given_function(m);
  
  while(check_if(fa, fb)) {
     fa = given_function(a);
     fb = given_function(b);
   
     m = medium(a, b); 
     fm = given_function(m);
     
     
     if (fm < 0) {
       a = m; 
     } else {
       b = m; 
     }
  } 
  
  printf("f(a) = %f\n", fa); // f(a)
  printf("f(b) = %f\n", fb); // f(b)
  printf("f(m) = %f\n", fm); // f(m)
  
  printf("m = %f\n", m); // medium
  
}
