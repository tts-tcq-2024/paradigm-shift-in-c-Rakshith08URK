#include <stdio.h>
#include <assert.h>

int batteryIsOk(float temperature, float soc, float chargeRate) {
    int temperature_ok = (temperature >= 0 && temperature <= 45);
    int soc_ok = (soc >= 20 && soc <= 80);
    int chargeRate_ok = (chargeRate < 0.8);

    if (!temperature_ok) {
        printf("Temperature is out of range.\n");
    } else {
        printf("Temperature is within acceptable range.\n");
    }

    if (!soc_ok) {
        printf("State of charge is out of range.\n");
    } else {
        printf("State of charge is within acceptable range.\n");
    }

    if (!charge_rate_ok) {
        printf("Charge Rate out of range.\n");
    } else {
        printf("Charge rate is within acceptable range.\n");
    }

    return (temperature_ok && soc_ok && charge_rate_ok);
}

int main() {
  assert(batteryIsOk(25, 70, 0.7));
  assert(!batteryIsOk(50, 85, 0));
}

