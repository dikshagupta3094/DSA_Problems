#include <iostream>
using namespace std;

double calculateSimpleInterest(double principal, double rate, int time) {
    return (principal * rate * time) / 100;
}
int main() {
    double principal, rate;
    int time;
    cout << "Enter the principal amount borrowed: ";
    cin >> principal;
    cout << "Enter the rate of interest (in %): ";
    cin >> rate;
    cout << "Enter the time period (in years): ";
    cin >> time;
    double interest = calculateSimpleInterest(principal, rate, time);
    cout << "The simple interest for " << time << " years is: " << interest << endl;
    return 0;
}