#include <stdio.h>
#include <assert.h>


// Pure function to check temperature
int isValidTemperature(float temperature) {
    return (temperature >= 0) && (temperature <= 45);
}

// Pure function to check state of charge
int isValidStateOfCharge(float stateOfCharge) {
    return (stateOfCharge >= 20) && (stateOfCharge <= 80);
}

// Pure function to check charge rate
int isValidChargeRate(float chargeRate) {
    return (chargeRate < 0.8);
}

// I/O function
void print_error_message(const char* message) {
    printf("Error: %s\n", message);
}

// Pure function to check battery status
int batteryIsOk(float temperature, float stateOfCharge, float chargeRate) {
    return isValidTemperature(temperature) &&
           isValidStateOfCharge(stateOfCharge) &&
           isValidChargeRate(chargeRate);
}

int main() {
    assert(batteryIsOk(25, 70, 0.7));
    printf("Battery is OK\n");
    return 0;
}

