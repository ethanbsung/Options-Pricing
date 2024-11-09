#include <vector>
#include <iostream>
#include <sstream>
#include <fstream>
#include <string>
using namespace std;

struct MarketData {
    string date;
    double open;
    double high;
    double low;
    double close;
    double adj_close;
    double volume;
};

class DataLoader {
public:
    static vector<MarketData> loadCSV(const string& filePath) {
        ios::sync_with_stdio(false);
        vector<MarketData> data;
        ifstream file(filePath);
        if (!file) {
            cerr << "Cannot open file: " << filePath << "\n";
            exit(1);
        }

        string line;
        getline(file, line);

        while (getline(file, line)) {
            stringstream ss(line);
        }
    }
};