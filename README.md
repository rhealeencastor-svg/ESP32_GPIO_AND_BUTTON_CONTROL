# Laboratory Activity 3: GPIO and Button Control
**Course:** BCA188 - Programming For Internet of Things  
  

## Project Overview
This laboratory demonstrates GPIO digital input and output control using an ESP32 micro-controller. A pushbutton toggles two LEDs in opposite states. The input utilizes the ESP32's internal pull-up resistor (`INPUT_PULLUP`) to ensure signal stability.

## Hardware Components
* ESP32-WROOM Development Board
* 1x Tactile Pushbutton Switch
* 2x LEDs (Blue / Green)
* 2x 220 Ω Resistors
* Breadboard & Female-to-Male Jumper Wires

## Circuit Connections

| Component | Component Terminal | ESP32 Pin / Rail |
| :--- | :--- | :--- |
| **Pushbutton** | Pin 1 | GPIO 4 |
| **Pushbutton** | Pin 2 (Diagonal) | GND |
| **LED 1 (Status)** | Anode (+) | GPIO 18 |
| **LED 1 (Status)** | Cathode (-) | GND via 220 Ω Resistor |
| **LED 2 (Opposite)** | Anode (+) | GPIO 5 |
| **LED 2 (Opposite)** | Cathode (-) | GND via 220 Ω Resistor |

## Explanation of HIGH and LOW Input States

In this setup, the pushbutton uses the internal pull-up resistor configuration (`INPUT_PULLUP`):

* **`HIGH` State (~3.3V):** When the button is **released**, the internal pull-up resistor pulls GPIO 4 up to 3.3V. This prevents a "floating" input state where electrical noise causes erratic switching.
* **`LOW` State (~0V):** When the button is **pressed**, the switch closes and connects GPIO 4 directly to Ground (`GND`), pulling the voltage down to 0V.

## Observation Table

| Button Action | GPIO 4 Logic State | Input Voltage | LED 1 (GPIO 18) - BLUE| LED 2 (GPIO 5) - GREEN |
| :--- | :--- | :--- | :--- | :--- |
| **Released** | `HIGH` | ~3.3V | **ON** | **OFF** |
| **Pressed** | `LOW` | ~0.0V | **OFF** | **ON** |

## Circuit Setup Documentation
**CIRCUIT WIRINGS**

<img width="1206" height="1146" alt="e78f844b-d468-44f6-ba5a-bcd97024f5b8" src="https://github.com/user-attachments/assets/eb848a26-46c2-4b03-9371-6ae38d907131" />

<img width="1206" height="632" alt="9e9927f8-2ec9-4209-9a56-b38e1139bc99" src="https://github.com/user-attachments/assets/46e928ba-5795-41f0-aa6b-4d21efa2ef8e" />

**ESP32 GPIO USED** 
<img width="1206" height="1223" alt="d0e3f058-bdc1-4311-b23e-ab8ae6e67500" src="https://github.com/user-attachments/assets/e23863d9-26b9-47f5-8e8a-554385441f3d" />

 **VIDEO SETUP AND PUSHBUTTON**

https://github.com/user-attachments/assets/a1eaf7de-724c-40c5-80ef-29f9cfb7effe

## Code Documentation

<img width="1512" height="982" alt="Screenshot 2026-09-26 at 4 57 13 AM" src="https://github.com/user-attachments/assets/0467bb75-19e9-438c-a206-bfda8625579b" />

https://github.com/user-attachments/assets/037c91cd-33d6-426a-a13d-663825ff0829










