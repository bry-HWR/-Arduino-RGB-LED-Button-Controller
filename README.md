# Arduino RGB LED Button Controller

## Overview

This project uses an Arduino Uno to control an RGB LED and a separate red LED using two push buttons.

The left and right button cycles through the RGB LED colors, while the right button controls the separate red LED. Pressing both buttons at the same time activates a special "COP mode," which turns on the blue RGB LED and the red LED together.

I built this project as part of learning Arduino programming, digital inputs and outputs, and C++.

## Components Used

- Arduino Uno R3
- 1 × RGB LED (Common Cathode)
- 1 × Red LED
- 4 × 220 Ω Resistors
- 2 × Push Buttons
- Breadboard
- Jumper Wires

## Pin Connections

| Arduino Pin | Component |
|--------------|-----------|
| D2 | RGB LED - Red |
| D3 | RGB LED - Green |
| D4 | RGB LED - Blue |
| D7 | Left Push Button |
| D8 | Right Push Button |
| D12 | Red LED |
| GND | RGB LED, Red LED, Both Push Buttons |

## Features

- Controls an RGB LED using two push buttons.
- Cycles through RGB colors with the left push button.
- Turns the red LED on and off with the right push button.
- Activates "COP Mode" when both buttons are pressed simultaneously.
- Uses INPUT_PULLUP for reliable button detection.
- Written in C++ using the Arduino IDE.

## How It Works

The Arduino continuously checks the state of both push buttons using the INPUT_PULLUP configuration.

- Left Push Button: Cycles through the RGB LED colors.
- Right Push Button: Turns the separate red LED on while the button is pressed.
- Both Buttons: Activates **COP Mode**, turning on both the blue RGB LED and the red LED.
- No Buttons Pressed: All LEDs remain off.
