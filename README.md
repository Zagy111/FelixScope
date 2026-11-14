# 🐾 FelixScope

**A lightweight process monitoring tool written in C++.**

FelixScope is an open-source learning project focused on system monitoring, process management, and Windows internals.

The long-term goal is to build a fast, lightweight, and user-friendly Windows process inspector.

## 🚀 Current Features (v0.1)

- Display a list of simulated processes
- Search for processes by PID
- Find the process with the highest RAM usage
- Interactive terminal menu
- Basic input handling

> **Note:** Version 0.1 uses simulated process data. Real Windows process monitoring is planned for future releases.

## 🛠️ Technologies

- **Language:** C++17
- **Interface:** Command-line interface (CLI)
- **Platform:** Cross-platform for v0.1; Windows-focused development planned

## 📦 Getting Started

### Requirements
- A C++17-compatible compiler (such as GCC or Clang)

### Build and Run

```bash
g++ -std=c++17 main.cpp -o FelixScope
./FelixScope
```

On Windows, if you use MinGW:

```bash
g++ -std=c++17 main.cpp -o FelixScope.exe
.\FelixScope.exe
```

## 🗺️ Roadmap

- [x] **v0.1** — Simulated process monitoring
- [ ] **v0.2** — Refactor process storage using structs and vectors
- [ ] **v0.3** — Read real Windows processes using the Windows API
- [ ] **v0.4** — Display real-time RAM usage and process details
- [ ] **v1.0** — Graphical user interface (GUI)

## 🎯 Project Goals

- Improve C++ programming skills
- Learn Windows API and system internals
- Practice clean code and software architecture
- Build a useful open-source Windows utility

## 👨‍💻 Author

Created by [Zagy111](https://github.com/Zagy111).

---

*Developed in memory of Felix. 🐾*