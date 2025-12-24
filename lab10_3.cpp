#include <iostream>
#include <fstream>
#include <iomanip>
#include <cmath>

using namespace std;

int main(){
    ifstream file("score.txt");
    double value;
    double sum = 0.0;
    double mean = 0.0;
    double sd = 0.0;
    int count = 0;

    while (file >> value) {
        sum += value;
        count++;
    }

    mean = sum / count;

    file.clear();
    file.seekg(0, ios::beg);

    double varianceSum = 0.0;
    while (file >> value) {
        varianceSum += pow(value - mean, 2);
    }

    sd = sqrt(varianceSum / count);

    file.close();

    cout << "Number of data = " << count << endl;

    cout << setprecision(3);
    cout << "Mean = " << mean << endl;

    cout << fixed << setprecision(3);
    cout << "Standard deviation = " << sd << endl;

    return 0;
}
