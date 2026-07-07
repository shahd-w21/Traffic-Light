<div align="center">

![Typing SVG](https://readme-typing-svg.demolab.com/?lines=🚦+Traffic+Light+Control+System;Arduino+%26+8086+Assembly+Project;Computer+Organization+Course;&center=true&width=700&height=80&size=28&weight=700&color=FF6B6B&pause=1000)

![Assembly](https://img.shields.io/badge/8086_Assembly-Low--Level-FF6B6B?style=for-the-badge)
![Arduino](https://img.shields.io/badge/Arduino-00979D?style=for-the-badge&logo=arduino&logoColor=white)
![Hardware](https://img.shields.io/badge/Hardware-Traffic_Light_Module-EF9F27?style=for-the-badge)
![Course](https://img.shields.io/badge/Course-Computer_Organization-7F77DD?style=for-the-badge)
![Status](https://img.shields.io/badge/Status-Complete-4CAF50?style=for-the-badge)

</div>

---

## 📌 Overview

A **Traffic Light Module Control System** implemented using both **8086 Assembly Language** and **Arduino C**. The system controls a pre-built Traffic Light Arduino Module with integrated red, yellow, and green LEDs, managing traffic at an intersection with **North-South (NS)** and **East-West (EW)** directions.

This project demonstrates the trade-offs between **low-level hardware control** and **high-level abstraction** in embedded systems programming — two completely different approaches to solving the same real-world problem.

> 🎓 Built as a **Computer Organization** academic project at **Misr International University (MIU)** — Computer Science Department

---

## 🎬 Demo Video

<div align="center">

[![Watch Demo](https://img.youtube.com/vi/6z2jT-eOcKc/maxresdefault.jpg)](https://www.youtube.com/shorts/6z2jT-eOcKc)

> 👆 Click the thumbnail to watch the live hardware demo on YouTube 🚦

---
## 🔧 Hardware Components

| Component | Description |
|-----------|-------------|
| 🚦 **Traffic Light Module** | Integrated unit with Red, Yellow, Green LEDs and control interface |
| 🤖 **Arduino Mega** | Central microcontroller for traffic light control |
| ⚡ **Pre-wired LED Connections** | Built-in wiring for all three color LEDs |
| 🔌 **Control Pins** | 4 wires for power and signal connections |
| 🔲 **Breadboard** | Optional for additional circuits and prototyping |

> The Traffic Light Arduino Module is a pre-built integrated solution with pre-soldered connections and a breadboard-friendly design — eliminating the need for individual component assembly.

---

## ⚙️ Implementation

### 🖥️ Part 1 — 8086 Assembly Implementation

The 8086 assembly implementation leverages **direct hardware manipulation** for precise control over traffic light timing and state changes by writing directly to specific memory locations and I/O ports.

**Registers Used:**

| Register | Purpose |
|----------|---------|
| `AX` — Accumulator | Arithmetic operations and data transfer |
| `CX` — Count Register | Counter in loops and string operations |
| `DX` — Data Register | I/O port addressing, multiplication, and division |
| `AH` — High byte of AX | BIOS interrupts for video and keyboard operations |

**EMU 8086 Emulator Workflow:**

```
  ⚙️ Compile          🐛 Debug            ▶️ Execute
──────────────    ──────────────────    ──────────────────
Translate code    Set breakpoints &     Run full program
to machine        inspect registers,    to simulate 8086
instructions      memory & flags        processor output
```

---

### 🤖 Part 2 — Arduino C Implementation

High-level control using **Arduino C** with simplified library-based hardware interaction for rapid prototyping and ease of development.

**Traffic Light Cycle:**

```
🟢 NS Green  + 🔴 EW Red
        ↓
🟡 NS Yellow + 🔴 EW Red
        ↓
🔴 NS Red    + 🟢 EW Green
        ↓
🔴 NS Red    + 🟡 EW Yellow
        ↓
      Repeat ↺
```

---

## ⚖️ 8086 Assembly vs Arduino Comparison

| Aspect | 🖥️ 8086 Assembly | 🤖 Arduino C |
|--------|-----------------|--------------|
| **Control Level** | Low-level, direct hardware manipulation | High-level abstraction via libraries |
| **Complexity** | High — deep hardware knowledge required | Lower — simpler syntax, pre-built functions |
| **Learning Curve** | Steep — specific instruction sets | Easier — based on C/C++ with community support |
| **Portability** | Very Low — tied to specific processor | Higher — adaptable across microcontrollers |
| **Best For** | Firmware, OS kernels, embedded systems | IoT projects, hobby electronics, prototyping |

---

## 🧪 Testing & Validation

### 🖥️ Assembly Testing (EMU 8086)

| Test | Description |
|------|-------------|
| ✅ **Verify Register Values** | Inspect AX, BX, CX, DX at key program points |
| ✅ **Inspect Memory Locations** | Ensure data is stored and retrieved correctly |
| ✅ **Confirm Flag Register States** | Validate FLAGS after arithmetic and logical operations |
| ✅ **Check I/O Port Interactions** | Ensure correct signals are sent to traffic lights |

### 🤖 Arduino Testing

| Test | Description |
|------|-------------|
| ✅ **Verify Light Cycle** | Confirm NS and EW lights cycle correctly |
| ✅ **Measure Phase Durations** | Accurately check timing for Green, Yellow, and Red |
| ✅ **Check for Inconsistencies** | Monitor flickering or inconsistent LED behavior |
| ✅ **Test Power Cycle Recovery** | Ensure graceful system recovery after power loss |

---

## 🚀 How to Run

### 🖥️ 8086 Assembly (EMU 8086)

1. Download and install **EMU 8086** emulator
2. Open the `.asm` source file
3. Click **Compile** to assemble the code
4. Click **Debug** to step through and inspect registers
5. Click **Run** to execute the full simulation

### 🤖 Arduino C

1. Download and install **Arduino IDE**
2. Connect the **Arduino Mega** to your PC via USB
3. Open the `.ino` source file in Arduino IDE
4. Go to **Tools → Board → Arduino Mega**
5. Click **Upload** to flash the code
6. Watch the traffic light LEDs cycle live! 🚦

---

## 🎯 Key Learning Outcomes

```
✅ Mastered low-level hardware control with 8086 Assembly
✅ Developed high-level control logic using Arduino C
✅ Understood trade-offs between abstraction levels in embedded programming
✅ Applied systematic testing and debugging for hardware-software systems
✅ Gained practical experience in real-world embedded systems applications
```

---

## 🛠️ Tech Stack

![8086 Assembly](https://img.shields.io/badge/8086_Assembly-FF6B6B?style=for-the-badge)
![Arduino C](https://img.shields.io/badge/Arduino_C-00979D?style=for-the-badge&logo=arduino&logoColor=white)
![EMU 8086](https://img.shields.io/badge/EMU_8086-Emulator-7F77DD?style=for-the-badge)
![Arduino Mega](https://img.shields.io/badge/Arduino_Mega-Hardware-EF9F27?style=for-the-badge)
![Embedded Systems](https://img.shields.io/badge/Embedded-Systems-378ADD?style=for-the-badge)

---

<div align="center">

*"From assembly to Arduino — controlling the real world one bit at a time."* 🚦

![Visitor Badge](https://visitor-badge.laobi.icu/badge?page_id=shahd-w21.Traffic-Light-Control-System)

</div>
