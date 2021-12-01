// Copyright (c) 2021 Ina Tolo All rights reserved.
//
// Created by: Ina Tolo
// Created on: Dec. 1, 2021
// This program asks the user for the length
// pizza. It then calculates and displays the total cost
// of the pizza with tax
#include <iostream>
#include <cmath>

// declare constants
const float HST = 0.13;
const float LABOUR_COST = 2.00;
const float RENTAL_COST = 2.25;
const float INGRED_COST = 1.50;

// declare variables
float diameter, subtotal, tax, taxNew, taxRound, taxFinal, total;


int main() {
  // get input from user
  std::cout << "Enter the diameter of the pizza (inches): ";
  std::cin >> diameter;

  // calculate subtotal, tax, and total cost
  subtotal = LABOUR_COST + RENTAL_COST + (diameter * 1.5);
  tax = subtotal * HST;
  taxNew = (tax * 100) + 0.5;
  taxRound = floor(taxNew);
  taxFinal = taxRound / 100;
  total = subtotal + taxFinal;

  // display the results to the user
  std::cout << "\n";
  std::cout << "Cost = " << total <<" \n";
}
