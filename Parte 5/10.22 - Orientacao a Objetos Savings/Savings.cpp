#include "Savings.hpp"

double Savings::deposit(double amount) 
{
    if(amount < 0)
        return 0.0;
        
    balance += amount;
    return balance;
}

double Savings::withdraw(double amount)
{
    if(balance < amount)
       return 0.0;
    

    balance -= amount;
    return balance;
}