# Project Notes

## Motivation

After learning how to control LEDs using digital outputs and how to receive input from the Serial Monitor, I wanted to combine both concepts into a single interactive project.

Instead of hardcoding LED behavior, the goal was to allow the user to make decisions at runtime by selecting an LED color and specifying the number of blink cycles.

This project helped bridge the gap between simple output control and user-driven embedded applications.

---

## Development Process

The project was built incrementally:

1. Controlled individual LEDs using digitalWrite().
2. Learned how to read text input from the Serial Monitor.
3. Implemented color selection using conditional statements.
4. Added support for user-defined blink counts.
5. Tested different inputs and debugged serial communication issues.

Rather than writing everything at once, each feature was added and verified separately before moving to the next step.

---

## Challenges Faced

### 1. Handling Multiple User Inputs

One challenge was collecting two different inputs from the Serial Monitor:

- LED color
- Number of blink cycles

Managing sequential user interactions required careful ordering of prompts and input handling.

---

### 2. Understanding Serial Parsing

While implementing the blink count feature, I encountered unexpected behavior where the program appeared to skip input prompts and restart parts of the interaction.

This led me to investigate how Arduino processes serial data and how functions such as `Serial.parseInt()` consume characters from the serial buffer.

Through debugging, I learned that leftover characters in the serial buffer can affect subsequent input operations and cause unexpected program flow.

This was one of the most valuable lessons from the project because it highlighted the importance of understanding how data is actually received and processed by a microcontroller.

---

### 3. Debugging Logic Flow

When the LEDs did not behave as expected, I used Serial Monitor output statements to verify variable values and trace program execution.

This reinforced a common embedded systems practice:

> If hardware behavior looks wrong, verify the software state first.

---

## Key Takeaways

This project taught me that building embedded systems is not only about controlling hardware.

A significant part of development involves:

- Handling user input correctly
- Managing program flow
- Debugging unexpected behavior
- Understanding how data moves through the system

Small projects often reveal practical issues that are not immediately obvious when learning individual concepts in isolation.

---

## Future Enhancements

- Add support for commands such as:
  - all
  - off
  - blink red 10
- Refactor code using custom functions
- Add RGB LED support
- Replace delay() with millis() for non-blocking operation
- Implement command parsing for more natural user interaction

---

## Reflection

This project marked an important step from simple Arduino experiments toward creating interactive embedded applications.

The most valuable outcome was not blinking an LED—it was learning how to diagnose problems, understand serial communication behavior, and iteratively improve a system based on testing and debugging.
