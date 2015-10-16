// Name: Ali Fenton
// Date: October 16,2015
// Programming Practice - Functions D

#include <iostream>
#include <cmath>
#include <cassert>
using namespace std;

//**********************************Problem 1*********************************************
void sort(int& numA, int& numB, int& numC); 
    // Summary: Sorts the 3 numbers by increasing order
    // Precondition: The 3 numbers will be between 0-100 if it not it will leave the code
    // Postcondition: It will put them in order from smallest to biggest
    
//**********************************Problem 2*********************************************
void numDigits(int  valA, int& n); 
    // Summary: Find put what range they are in from 1-5 and tells you where they go
    // Precondition: If it sees that its not in range the program will not work
    // Postcondition: It will see if its in range it will print return from 1-5
    
//**********************************Problem 3*********************************************
void computeSphere(double& a, double& v, double r); 
    // Summary: find the volume and area of a sphere
    // Precondition: Make sure that it in range of 0-10000 if not leaves codes
    // Postcondition: After running the code it should tell you the volume and area
    
//**********************************Problem 4*********************************************
void swap(int& A, int& B);
    // Summary: Move the numbers to the other variable 
    // Precondition: Makes sure that the numbers will swap if not it will leave the code
    // Postcondition: If the code works it will swap the numbers to the other variable
    
int main(){
    // Problem 1
    int valA = 1, valB = 10, valC = 5;
    sort(valA,valB,valC);
    assert(valA == 1);
    assert(valB == 5);
    assert(valC == 10);
    
    int valA1 = 90, valB1 = 5, valC1 = 0;
    sort(valA1,valB1,valC1);
    assert(valA1 == 0);
    assert(valB1 == 5);
    assert(valC1 == 90);
    
    int valA2 = 8, valB2 = 1, valC2 = 15;
    sort(valA2,valB2,valC2);
    assert(valA2 == 1);
    assert(valB2 == 8);
    assert(valC2 == 15);
    
    //Problem 2
    int val;
    numDigits(34, val);
    assert(val == 2);
    
    int valBB;
    numDigits(9879, valBB);
    assert(valBB == 4);
    
    int val2B;
    numDigits(1, val2B);
    assert(val2B == 1);
    
    //Problem 3
    double area, volume, e = .0001;
    computeSphere(area, volume, 4);
    assert((area - 201.062) < e);
    assert((volume - 67.020643276) < e);
    
    double area1, volume1;
    computeSphere(area1, volume1, 7.1);
    assert(( area1 - 633.47074265) < e);
    assert(( volume1 - 374.80352275) < e);
    
    double area2, volume2;
    computeSphere(area2, volume2, 0);
    assert(( area2 - 0) < e);
    assert(( volume2 - 0) < e);
    
    // Problem 4
    int swapA = 7, swapB = 9;
    swap(swapA, swapB);
    assert(swapA == 9);
    assert(swapB == 7);
    
    int swapA1 = 2, swapB1 = 2;
    swap(swapA1, swapB1);   
    assert(swapA1 == 2);
    assert(swapB1 == 2);
    
    int swapA2 = 3, swapB2 = 100;
    swap(swapA2, swapB2);   
    assert(swapA2 == 100);
    assert(swapB2 == 3);
    
    return 0;
}

//******************Problem 1**********************
void sort(int& numA, int& numB, int& numC){
    assert(numA <= 100);
    assert(numA>=0);
    assert(numB <= 100);
    assert(numB>=0);
    assert(numC <= 100);
    assert(numC >= 0);   
    int tempA,tempB,temp;  

    if ((numA > numB) && (numA > numC)){
       tempA = numA;
        if (numB > numC){
            numA = numC;
            numC = tempA;
        }else if (numC > numB){
            numA = numB;
            numB = numC;
            numC = tempA;
        }      
    }else if ((numB > numC) && (numB > numA)){
         tempB = numB;
        if (numA > numC){
            numB = numA;
            numA = numC;
            numC = tempB;
        }else if (numC > numA){
            numB = numC;
            numC = tempB;
        }                        
    }else if ((numC > numA) && (numC > numB)){
        if (numA > numB){
            temp = numA;
            numA = numB;
            numB = temp;      
        }else if (numB > numA){
            numA;
            numB;
            numC;
        }                               
    }       
    return;
}

//******************Problem 2**********************
void numDigits(int valA, int& n){

    assert(valA >= -10000);
    assert(valA <= 10000);
    int valB;
    valB = abs(valA);
    
    if(valB >= 10000){
        n = 5;
    }
    
    if(valB >= 1000 && valB < 10000){
        n = 4;
    }
    
    if(valB >= 100 && valB < 1000){
        n = 3;
    }
    
    if(valB >= 10 && valB < 100){
        n = 2;
    }
    
    if(valB >= 0 && valB < 10){
        n = 1;
    }
    return;
}

//******************Problem 3**********************
void computeSphere(double& a, double& v, double r){
    assert(r >= 0);
    assert(r <= 10000);
    const double PI = 3.14159265359;
    
    a = 4 * PI * r * r;
    v = ((1/3) * PI * r * r * r);
    return;
}

//******************Problem 4**********************
void swap(int& a, int& b){


    int result;
    result = a;
    a = b;
    b = result;
    return;
}
