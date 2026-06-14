\## Notes on ISR and IRAM\_ATTR



This project uses an interrupt service routine (ISR) to implement the Emergency Stop (E-Stop) feature. When the button connected to pin D2 is pressed, the ISR immediately sets the `emergencyStop` flag, allowing the main loop to stop the motor and close the valve without delay.



\### AVR (Arduino Uno)



For AVR-based boards such as the Arduino Uno, the ISR is declared normally:



```cpp

void emergencyISR() {

&#x20; emergencyStop = true;

}

