# Non-Blocking LED Control Architecture

## Overview
This project demonstrates a fundamental embedded systems concept: **Multitasking without an RTOS**. 
Instead of using blocking functions like `delay()`, which freeze the CPU, this implementation uses `millis()` to track time.

## Features
* **Non-Blocking:** The CPU remains active to handle other tasks (e.g., sensor reading, button presses) while the LED blinks.
* **Scalable:** Easy to add more timed tasks without disrupting the timing loop.

## Code Logic
The system checks if the difference between the `currentMillis` and `previousMillis` exceeds the defined `interval`. If yes, the state updates.
