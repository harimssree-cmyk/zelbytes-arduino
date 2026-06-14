&#x20;**Validation Notes**



\* E-Stop functionality was tested while the motor was running at different PWM speeds and during continuous serial logging. The interrupt successfully stopped the motor and closed the valve immediately in all cases.

\* The Interrupt Service Routine (ISR) contains no `Serial.print()`, `delay()`, or other blocking operations. Code review confirmed that the ISR only sets a `volatile` flag, following recommended interrupt design practices.

\* The interrupt input uses Arduino pin D2 (`INT0`), which is not shared with any conflicting libraries or peripherals in this project. No resource conflicts were identified during testing.



