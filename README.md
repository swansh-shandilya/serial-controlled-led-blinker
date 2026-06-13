# Arduino Serial Controlled LED Blinker

## Overview

This project allows a user to control LEDs through the Arduino Serial Monitor.

The user:
1. Selects an LED color (Red, Green, or Blue).
2. Enters the number of times the selected LED should blink.
3. The Arduino blinks the chosen LED for the specified number of cycles.

This project was built to practice:
- Serial Communication
- String Handling
- Conditional Statements
- Loops
- Digital Output Control
- User Input Processing

---

## Components Used

- Arduino Uno
- Red LED
- Green LED
- Blue LED
- 220Ω Resistors
- Breadboard
- Jumper Wires

---

## Circuit Connections

| LED | Arduino Pin |
|------|------------|
| Red LED | 13 |
| Green LED | 12 |
| Blue LED | 8 |

All LEDs are connected through current-limiting resistors.

---

## How It Works

1. Arduino asks the user which LED to control.
2. The user enters:
   ```
   blue
   ```
3. Arduino asks for the number of blinks.
4. The user enters:
   ```
   5
   ```
5. The selected LED blinks five times.

---

## Example Interaction

```text
Which LED do you want to turn on?
blue

How many times should it blink?
5
```

Output:

```text
Blue LED blinking 5 times...
```

---

## Concepts Learned

- Reading user input from Serial Monitor
- Working with Strings in Arduino
- Using if statements for decision making
- Using for loops for repetitive actions
- Controlling multiple LEDs
- Debugging Serial communication issues

---

## Future Improvements

- Add support for commands like:
  - all
  - off
  - blink red 10
- Refactor code using custom functions
- Add RGB LED support
- Add non-blocking timing using millis()

---

## Author

Swansh Shandilya

Learning Embedded Systems and Arduino through hands-on projects.
