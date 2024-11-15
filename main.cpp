#include <vector>
#include <iostream>
#include <sstream>
#include <fstream>
#include <string>
using namespace std;

struct Option {
    double price; // stock price
    int strike; // strike price
    double vol; // volatility
    double timeToExp; // time to expiration
    double delta;
    double r; // risk-free interest rate
};
