#include <iostream>
#include <windows.h>

using namespace std;

void displayTime(float dollars) {

    cout << "$" << dollars << endl;
}

int main() {

    cout << "Enter Wage" << endl;

    float userWageInHours;
    cin >> userWageInHours;

    float dollars = 0.00;
    float milliseconds = 0;


    for ( ; ; ) {
        Sleep(1);
        // system("CLS");

        milliseconds++;

        float minutes = ((milliseconds / 1000) / 60);

        dollars = minutes;

        displayTime(dollars);
    }
}


