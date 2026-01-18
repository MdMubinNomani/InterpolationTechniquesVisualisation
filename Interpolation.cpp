#include <iostream>
#include <fstream>
#include <vector>
#include <cmath>
#include <iomanip>
#include <cstdlib>

using namespace std;

// Globals
int n;
vector<double> x, y;
double queryX;

// Declaration
double lagrange(double xp);
double newtonDD(double xp);
double newtonForward(double xp);
void generateGraphs();
void errorEstimation();

// Interpolation Methods
double lagrange(double xp) {
    return 0.0;
}

double newtonDD(double xp) {
    return 0.0;
}

double newtonForward(double xp) {
    return 0.0;
}

// Graph Generation
void generateGraphs() {

}

// Error Estimation
void errorEstimation() {

}

// Menu
void menu() {
    cout << "\n----- MENU -----\n";
    cout << "1. Lagrange Interpolation\n";
    cout << "2. Newton Divided Difference\n";
    cout << "3. Newton Forward Interpolation\n";
    cout << "4. Compare All Methods\n";
    cout << "5. Generate Graphs (Python)\n";
    cout << "6. Error Estimation\n";
    cout << "7. Exit\n";
    cout << "Enter choice: ";
}

int main() {
    ifstream fin("input.txt");
    fin >> n;

    x.resize(n); y.resize(n);
    for (int i = 0; i < n; i++) fin >> x[i] >> y[i];
    fin >> queryX;
    fin.close();

    int ch;
    do {
        menu();
        cin >> ch;

        switch (ch) {
            case 1: cout << lagrange(queryX) << "\n"; break;
            case 2: cout << newtonDD(queryX) << "\n"; break;
            case 3: cout << newtonForward(queryX) << "\n"; break;
            case 4:
                cout << "Lagrange : " << lagrange(queryX) << "\n"
                     << "Divided Difference : " << newtonDD(queryX) << "\n"
                     << "Newton Forward : " << newtonForward(queryX) << "\n";
                break;
            case 5: generateGraphs(); break;
            case 6: errorEstimation(); break;
        }

        system("pause");
        system("cls");
    } while (ch != 7);

    return 0;
}
