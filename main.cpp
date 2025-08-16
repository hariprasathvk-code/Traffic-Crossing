#include <iostream>
using namespace std;

void checkTraffic() {
    bool carLeft, carRight;

    // Look left
    do {
        cout << "Look left. Is a car approaching from left? (1 = Yes, 0 = No): ";
        cin >> carLeft;
        if (carLeft) {
            cout << "Wait until road clears...\n";
        }
    } while (carLeft);

    // Look right
    do {
        cout << "Look right. Is a car approaching from right? (1 = Yes, 0 = No): ";
        cin >> carRight;
        if (carRight) {
            cout << "Wait until road clears...\n";
        }
    } while (carRight);
    cout << "No cars approaching. Safe to cross.\n";
}

void checkLight() {
    bool lightRed;

    // Wait until light turns red
    do {
        cout << "Is the traffic light red? (1 = Yes, 0 = No): ";
        cin >> lightRed;
        if (!lightRed) {
            cout << "Light is green. Wait...\n";
        }
    } while (!lightRed);

    cout << "Light is red. Proceed to check traffic.\n";

    // Call traffic check after red light
    checkTraffic();
}

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
