/**
 * @file AtmManagement.h
 * @author Aniket Gaurkar  
 * @brief Header file for AtmManagement
 * @version 1.0.0
 * @date 2021-11-22
 * 
 * @copyright Copyright (c) 2021
 */

#include<stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>

int main() {
    //Local Declarations
    int option;
    float balance = 15000.00;
    int choose;
    
    bool again = true;
    
    // insert code here...
    
    
        switch (option) {
            case 1:
            	system("CLS");
                checkBalance(balance);
                break;
            case 2:
            	system("CLS");
                balance = moneyDeposit(balance);
                break;
            case 3:
            	system("CLS");
                balance = moneyWithdraw(balance);
                break;
            
            case 4:
            	system("CLS");
                menuExit();
                return 0;
                
            default:
                errorMessage();
                break;
        }
    }


