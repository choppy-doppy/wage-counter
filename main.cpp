#include <iostream>
#include <windows.h>

using namespace std;

void displayTime(int hours, int minutes, int seconds, int milliseconds) {

    system("cls");

    cout << hours << ":"
         << minutes << ":"
         << seconds << ":"
         << milliseconds << endl;
}

int main() {
    int hour = 0;
    int minute = 0;
    int second = 0;
    int millisecond = 00;

    for ( ; ; ) {
        Sleep(0.001);

        millisecond++;

        if(millisecond > 999) {
            second++;
            millisecond = 0;
        }

        if(second > 59) {
            minute++;
            millisecond = 0;
            second = 0;
            minute = 0;
        }

        if (minute > 59) {
            hour++;
            millisecond = 0;
            second = 0;
            minute = 0;
        }

        displayTime(hour, minute, second, millisecond);

    }
}

