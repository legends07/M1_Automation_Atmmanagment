/**
 * @file AtmManagement.h
 * @author Aniket Gaurkar   
 * @brief Header file for AtmManagement pr
 * @version 1.0.0
 * @date 2021-11-22
 * 
 * @copyright Copyright (c) 2021
 */

#ifndef __ATMMANAGEMENT_H__
#define __ATMMANAGEMENT_H__

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>

/**
 * @brief Function to check if input value is valid.
 * @param  checkBalance
 * @param  moneyDeposit
 * @param  moneyWithdraw 
 */

void login();
void mainMenu();
void checkBalance(float balance);
float moneyDeposit(float balance);
float moneyWithdraw(float balance);
void menuExit();
void errorMessage();

/**
 * @brief Function to check if input value is valid.
 * @param  checkBalance
 * @param  moneyDeposit
 * @param  moneyWithdraw 
 */



int main() {
    //Local Declarations
    int option;
    float balance = 15000.00;
    int choose;
    float withdraw;
    float deposit;
    
    bool again = true;


#endif






