//
//  main.cpp
//  Calculator
//
//  Created by Marcin Magiera on 14/07/2020.
//  Copyright © 2020 Magme Agency. All rights reserved.
//

#include <iostream>

int numberOne;
int numberTwo;
int result;

int main() {
   
    std:: cout << "THIS IS SIMPLE MATH: \n";
    std:: cout << "Dodaj pierwszą liczbę: ";
    std:: cin >> numberOne;
    std:: cout << "Podaj drugą liczbę: ";
    std:: cin >> numberTwo;
    
    result = numberOne + numberTwo;
    return result;
    
}
