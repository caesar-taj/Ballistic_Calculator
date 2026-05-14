# 🎯 Ballistic Calculator

A C++ desktop application that simulates projectile trajectory in real time. Built with the Qt framework, it provides both a modular computation engine and a graphical interface for visualizing ballistic motion.

> **Author:** Tajbik Sifat

---

## 📁 Project Structure

| Folder | Description |
|---|---|
| [`ballistic-calc-modular`](./ballistic-calc-modular) | Core logic — modular C++ code for trajectory calculations, usable standalone without a GUI |
| [`ballistic-calc-qtgui`](./ballistic-calc-qtgui) | Full Qt-based graphical application with a visual interface for inputs and trajectory display |

---

## ✨ Features

- Input launch parameters: angle, initial velocity, and projectile mass
- Simulates projectile trajectory using physics equations (gravity, optional drag)
- Real-time trajectory visualization in the Qt GUI
- Modular backend — the core engine can be used independently or extended
- Clean separation between computation logic and UI layer

---

## 🛠️ Requirements

- **C++17** or later
- **Qt 5** or **Qt 6** (Qt Creator recommended for the GUI version)
- A C++ compiler: GCC, Clang, or MSVC

---

## 🚀 Build & Run

### Option 1 — Modular (CLI / no GUI)

```bash
cd ballistic-calc-modular
g++ -std=c++17 -o ballistic_calc main.cpp
./ballistic_calc
```

### Option 2 — Qt GUI

**Using Qt Creator:**
1. Open Qt Creator
2. File → Open Project → select the `.pro` file inside `ballistic-calc-qtgui`
3. Configure your Qt kit
4. Click **Build** then **Run**

**Using the command line:**
```bash
cd ballistic-calc-qtgui
qmake
make
./ballistic-calc-qtgui
```

---

## ⚠️ Disclaimer

This application is intended for **educational and simulation purposes only**. Results are mathematical approximations and should not be used for any real-world application.

---

## 📄 License

Free to use and modify. See [LICENSE](./LICENSE) for details.
