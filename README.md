# Automotive Digital Input/Output (DIO) Driver

## Overview

The project implements a reusable DIO automotive style driver to configure and manipulate digital I/O pins through tables.
It provides a hardware abstraction layer to avoid register access in the application layer.

---

## Module Responsabilities

- Initialize I/O channels through configuration tables
- Read the logical level from input channels
- Set the logical level to output channels
- Provide a hardware abstraction layer for digital I/O access
- Does not contain application logic
- Does not handle debounce for input channels
- Does not implement timing or delays

---

## Target Hardware

- **MCU:** PIC18F4550
- **CLOCK:** 20 MHZ
- **Toolchain** XC8
- **Programmer** PICKit (pk2cmd)
- **OS:** Linux

---


