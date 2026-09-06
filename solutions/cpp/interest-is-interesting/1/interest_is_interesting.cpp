#include <iostream>
// interest_rate returns the interest rate for the provided balance.
double interest_rate(double balance) {
    // TODO: Implement the interest_rate function
    double interest = 0;
    if (balance >= 5000) {
        interest = 2.475;
    }
    else if (balance >= 1000) {
        interest = 1.621;
    }
    else if (balance >= 0) {
        interest = .5;
    }
    else {
        interest = 3.213;
    }
    return interest;
}

// yearly_interest calculates the yearly interest for the provided balance.
double yearly_interest(double balance) {
    // TODO: Implement the yearly_interest function
    return (interest_rate(balance) * balance) / 100;
}

// annual_balance_update calculates the annual balance update, taking into
// account the interest rate.
double annual_balance_update(double balance) {
    // TODO: Implement the annual_balance_update function
    
    return yearly_interest(balance) + balance;
}

// years_until_desired_balance calculates the minimum number of years required
// to reach the desired balance.
int years_until_desired_balance(double balance, double target_balance) {
    // TODO: Implement the years_until_desired_balance function
    double account = balance;
    int year = 0;
    
    while(account < target_balance) {
        year++;
        account = annual_balance_update( account);
        //std::cout << "account: " << account << std::endl;
        
    }
    return year;
}
