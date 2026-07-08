# 🚗 ParkSense v1

A simple Arduino-based Smart Parking Assistant that measures the distance to nearby objects using an HC-SR04 ultrasonic sensor and provides visual and audible feedback through an LED and a buzzer.

---

## 📖 Overview

ParkSense v1 is an embedded systems project built using an Arduino UNO. It continuously measures the distance to obstacles and warns the user using different LED and buzzer patterns depending on how close the object is.

This project was built as part of my embedded systems learning journey.

---

## ✨ Features

- 📏 Real-time distance measurement
- 🔴 LED warning indicator
- 🔊 Audible parking alert
- 🚫 Handles sensor timeout
- 🧩 Modular and readable Arduino code
- 🔌 Breadboard implementation

---

## 🛠 Components Used

| Component | Quantity |
|----------|----------|
| Arduino UNO | 1 |
| HC-SR04 Ultrasonic Sensor | 1 |
| Active Buzzer | 1 |
| Red LED | 1 |
| 220Ω Resistor | 1 |
| Breadboard | 1 |
| Jumper Wires | As required |

---

## ⚡ Pin Connections

| Component | Arduino Pin |
|-----------|-------------|
| HC-SR04 TRIG | D9 |
| HC-SR04 ECHO | D10 |
| LED | D7 |
| Buzzer | D6 |
| VCC | 5V |
| GND | GND |

---

## 🚦 Parking Logic

| Distance | LED | Buzzer |
|----------|-----|---------|
| >30 cm | OFF | OFF |
| 15–30 cm | Slow Blink | Slow Beep |
| 5–15 cm | Fast Blink | Fast Beep |
| <5 cm | ON | Continuous Beep |

---

## 📂 Project Structure

```
ParkSense-v1
│
├── src
│   └── ParkSense.ino
│
├── docs
│   ├── Circuit Diagram.png
│   └── Circuit Schematic.pdf
│
├── images
│   ├── Prototype.jpg
│   └── Demo.gif
│
├── LICENSE
├── .gitignore
└── README.md
```

---

## 📸 Circuit

### Wiring Diagram

<img width="1528" height="682" alt="wiring_diagram" src="https://github.com/user-attachments/assets/8d7210e3-3d00-4a2e-8b1f-a8309791697b" />


### Schematic

[schematic_diagram.pdf](https://github.com/user-attachments/files/29799323/schematic_diagram.pdf)


---

## 🚀 Future Improvements

- LCD/OLED Display
- Bluetooth Connectivity (HC-05)
- Moving Average Filter
- Non-blocking code using `millis()`
- Automatic RC Car Integration
- ESP32 Wi-Fi Version

---

## 👨‍💻 Author

**Abir Choudhury**

Computer Science Student passionate about AI, Embedded Systems and Software Engineering.

---

If you found this project interesting, consider giving it a ⭐.
