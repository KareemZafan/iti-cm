#include <stdio.h>

#include <math.h>

double getSquareRoot(double a){
 return sqrt(a); 
}


long mod(long a, long b){
 return a % b;  
}

double avg(double a, double b){
 return (a + b)/2.0;  
}


double abs(double a){
 return a > 0 ? a : -a; }


double sub(double a , double b){
return a - b; 
}

double div(double a , double b){
 if(b !=0) return a/b;  
 return 0; 
}

double mul(double a , double b){
 return a * b; 
}


double add(double a , double b){
return a + b; 
}

double getMax(double a , double b){
return a >= b ? a : b; 
}


int main(void){

printf("Hello World!"); 

printf("Square root of 100 = %0.3f",getSquareRoot(100)); //10.000

printf("Summation is ",add(3000,230.7)); //3230.70

printf("Maximum is ",getMax(3000,230.7)); //3000.00

return 0; }
