#include <iostream>
using namespace std;

int main() {
    bool footbridge, tunnel, crossing, trafficLight;
    cout << "Person wants to cross the road.\n";
    cout << "Is footbridge available? (1 = Yes, 0 = No): ";
    cin >> footbridge;

    if (footbridge) {
        cout << "Use footbridge.\nCross completed.\n";
    } else {
        cout << "Is tunnel available? (1 = Yes, 0 = No): ";
        cin >> tunnel;

        if (tunnel) {
            cout << "Use tunnel.\nCross completed.\n";
        } else {
            cout << "Is crossing found? (1 = Yes, 0 = No): ";
            cin >> crossing;

            if (crossing) {
                cout << "Is there a traffic light? (1 = Yes, 0 = No): ";
                cin >> trafficLight;

                if (trafficLight) {
                    checkLight();   //Function call to check traffic light
                } else {
                    checkTraffic(); // Function call to check traffic
                }
                cout << "Cross completed.\n";
            } else {
                cout << "Walk away. Cannot cross safely.\n";
            }
        }
    }

    return 0;
}
