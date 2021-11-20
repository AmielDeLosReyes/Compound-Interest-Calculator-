#include <iostream>
#include <cmath>

using namespace std;

// function prototype
double calculateCompoundInterest(double c, double years);


// start of main function
int main() {

  // work variables
  double cash;
  int years;

  cout << "Investing your money program created by Amiel De Los Reyes. " << endl;
  cout << "How much investment do you have: ";
  cin >> cash;

  cout << "How many years: ";
  cin >> years;


  cout << "Assuming there is 10% increase every year." << endl;
  
  cout << years << " years from now, you will have $" << calculateCompoundInterest(cash, years) << endl;


  return 0;
} 

// compound interest calculator
double calculateCompoundInterest(double c, double years) {
  double initialBalance = c;

  // say 10% growth per year
  for(int i = 0; i < years; i++) {
    double growthPerYear = initialBalance * 0.10;
    initialBalance += growthPerYear;
  }

  double balance = initialBalance;
  return balance;

}