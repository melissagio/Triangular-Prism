//
//  main.cpp
//  CS 232 Triangular Prism Lab
//
//  Created by Melissa Gio on 3/20/23.
//

#include <iostream>
#include <string>
#include "TriangularPrism.h"
using namespace std;


int main() {
    //declarations
    int userNum;
    bool isUserNumOdd = false;
    

    //get user input
    while (!isUserNumOdd) {
        cout << "Enter a positive odd number for the base of a triangular prism: ";
        cin >> userNum;

        if (userNum % 2 == 1){
            isUserNumOdd = true;
        }
    }
    
    //calculations
    TriangularPrism myPrism(userNum);

    //output
    myPrism.displayTriangularPrism();
    
    cout << endl;
}
