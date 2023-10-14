#include <iostream>
#include <chrono>
#include <iomanip>
#include <thread>

using namespace std;
using chrono::duration_cast;
using chrono::milliseconds;
using Clock = chrono::steady_clock;

int main() {

    cout << setfill('0');

    auto tbegin = Clock::now();
    unsigned long elapsedMilli = -1U;
    int rando = 0;
    for ( ; ; ) {

        Clock::duration elapsed = Clock::now() - tbegin;

        unsigned long ms = duration_cast<milliseconds>(elapsed).count();

        if (elapsedMilli == ms) {
            this_thread::sleep_until(tbegin + milliseconds(ms + 1));
            continue;
        }

        elapsedMilli = ms;

        unsigned int t_millisec = ms % 1000; ms /= 1000;
        unsigned int t_sec = ms % 60; ms /= 60;
        unsigned int t_min = ms % 60; ms /= 60;
        unsigned int t_hr = ms % 24; ms /= 24;

        cout << std::setw(2) << t_hr << ":"
             << std::setw(2) << t_min << ":"
             << std::setw(2) << t_sec << "."
             << std::setw(3) << t_millisec << "\n";
        cout << rando << endl;
    }
}