int batteryIsOk(float temperature, float soc, float chargeRate) {
   ((temperature < 0 || temperature > 45)? printf("Temperature out of range!\n") 
     :(soc < 20 || soc > 80)? printf("State of Charge out of range!\n") 
	 : ((chargeRate > 0.8) ? ("Charge Rate out of range!\n") : 1)){
   return 0;
 }
 
int main() {
  assert(batteryIsOk(25, 70, 0.7));
  assert(!batteryIsOk(50, 85, 0));
}

