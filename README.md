# ArdSensor
Simplifies the process of setting up and using sensors in Arduino. Currently has both ultrasonic and IR compatibilities.

# How to use
Both the ultrasonic and IR classes are very similar in the setup process and how they work. They both have a `.begin()` function to setup your sensor; please put in the `void setup()`. They have a single function to get their data; ultrasonic = `.getData` & IR = `.getValue`; please put either of those in the `void loop()`.
