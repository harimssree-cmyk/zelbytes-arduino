Solenoid valve is controlled through a relay, never directly from Arduino.
Relay input is connected to Arduino pin D8.
Valve defaults to OFF during startup using `setValve(false)`.
Relay is configured as active-low.
Emergency stop command: `e` turns valve OFF immediately.
Test command: `v` opens valve briefly (~200 ms) then closes.
Manual shutoff valve must be installed upstream.
Keep a drip tray under the plumbing setup.
Never leave the valve energized unattended.
Verify relay operation before connecting the solenoid valve.
