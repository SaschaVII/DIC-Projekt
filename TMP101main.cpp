#include "mbed.h"
#include "tmp101.h"

//Hier den Pin einfügen, an dem der Interruptpin des Sensors hängt
InterruptIn  ISRPin(P0_10);

TMP101 sensor();
int temp;

void readTemp(){
    //temp = sensor.readtemp();
}

int main() {
    ISRPin.rise(&readTemp);
    
    while(1) {
    //temp = temp.temperatur;
    }
}
