#include <stdio.h>
#include <assert.h>

// Pure functions
int is_valid_temperature(float temperature) {
    return (temperature >= 0) && (temperature <= 45);
}

int is_valid_state_of_charge(float state_of_charge) {
    return (state_of_charge >= 20) && (state_of_charge <= 80);
}

int is_valid_charge_rate(float charge_rate) {
    return (charge_rate < 0.8);
}

// I/O function
void print_error_message(const char* message) {
    printf("Error: %s\n", message);
}

// Single function call to assert input
void batteryIsOk(float temperature, float state_of_charge, float charge_rate) {
    assert(is_valid_temperature(temperature) && 
           is_valid_state_of_charge(state_of_charge) && 
           is_valid_charge_rate(charge_rate));
    printf("All parameters are within valid ranges.\n");
}

int main() {
    assert(batteryIsOk(25, 70, 0.7));
    return 0;
}

