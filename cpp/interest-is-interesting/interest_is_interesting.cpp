// interest_rate returns the interest rate for the provided balance.
double interest_rate(double balance) {
    // TODO: Implement the interest_rate function
    double interest;
    
    if (balance < 0){
        interest = 3.213;
    } else if (balance >= 0 && balance < 1000) {
        interest = 0.5;
    } else if (balance > 999 && balance < 5000) {
        interest = 1.621;
    } else if (balance > 4999) {
        interest = 2.475;
    }
    
    return interest;
}

// yearly_interest calculates the yearly interest for the provided balance.
double yearly_interest(double balance) {
    // TODO: Implement the yearly_interest function
    return balance * (interest_rate(balance) / 100);
}

// annual_balance_update calculates the annual balance update, taking into
// account the interest rate.
double annual_balance_update(double balance) {
    // TODO: Implement the annual_balance_update function
    return balance + yearly_interest(balance);
}

// years_until_desired_balance calculates the minimum number of years required
// to reach the desired balance.
int years_until_desired_balance(double balance, double target_balance) {
    // TODO: Implement the years_until_desired_balance function
    int years = 0;
    for (int i{ 1 }; balance < target_balance; ++i) {
        balance += yearly_interest(balance);
        years = i;
    }
    return years;
}