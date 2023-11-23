 #include <iostream>
#include <thread>
#include<map>
#include<string>
#include<chrono>

using namespace std;

void refresh(map<string, int> forecastmap) {
    while (true) {
        for (auto& item : forecastmap) {
            item.second++;
            cout << item.first << " - " << item.second << endl;
        }
        this_thread::sleep_for(5000ms);
    }
}

int main() {

    map<string, int> forecastmap = {
        {"Delhi",55},
        {"mumbai",35},
        {"kolkata",45},
        {"bangalore",15}

    };
    thread background(refresh, forecastmap);
}