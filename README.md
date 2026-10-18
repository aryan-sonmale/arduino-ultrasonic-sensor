# arduino-ultrasonic-sensor
my first ultrasonic sensor project
# Arduino Ultrasonic Sensor

## About
This is my first robotics and embedded systems learning project. I am learning how Arduino interacts with sensors and processes physical signals.

The project uses an HC-SR04 ultrasonic sensor to measure the distance between the sensor and an object.

## Components
- Arduino Uno
- HC-SR04 ultrasonic sensor
- Jumper wires
- USB cable

## Pin Connections

| Sensor Pin | Arduino Pin |
|---|---|
| VCC | 5V |
| GND | GND |
| TRIG | Digital Pin 10 |
| ECHO | Digital Pin 11 |

## Working Principle
1. Arduino sends a trigger pulse to the sensor.
2. The sensor emits ultrasonic waves.
3. The waves reflect off an object.
4. The sensor produces an echo signal.
5. Arduino measures the echo duration.
6. The program calculates the distance using the speed of sound.

## Formula

Distance (cm) = (Echo Duration × 0.0343) / 2

Here, the echo duration is measured in microseconds, and 0.0343 cm/µs is approximately the speed of sound.

## Concepts Learned
- Digital input and output
- Arduino `setup()` and `loop()`
- Trigger and echo signals
- `pulseIn()`
- Serial communication
- Distance calculation
- Basic error handling

## Project Status
Learning and development stage. Hardware testing and results will be added after testing the circuit.

## Future Improvements
- Obstacle detection
- Integration with DC motors
- Development of an obstacle-avoiding robot
- Further experiments with sensors and embedded systems

## Learning Goal
I am building my robotics skills step by step through practical projects involving electronics, programming, sensors, and autonomous systems.
