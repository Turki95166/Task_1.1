# Task 1.1P: Switching ON Lights

## Project Overview
This project implements a modular lighting control system designed for an elderly care environment. The system uses an Arduino Nano 33 IoT to manage porch and hallway lighting via a slider switch.

## Documentation & Assets
- **Task Requirements:** [1SIT210-1.1P.pdf](1SIT210-1.1P.pdf)
- **Source Code:** [SwitchingLights.ino](SwitchingLights.ino)
- **Circuit Design:** See [Circuit schematic.png](Circuit_schematic.png) for wiring details.

## Project Functionality
The system utilizes a modular coding structure to ensure safety and ease of maintenance:
- **`startLights()`**: Activates both LED outputs simultaneously.
- **`controlLights()`**: Executes the safety timing sequence (30s for Porch, 60s for Hallway).
- **`turnOffLights()`**: Immediate system deactivation.

## Hardware Configuration
- **Controller:** Arduino Nano 33 IoT
- **Inputs:** Slider Switch (Pin D2)
- **Outputs:** Porch LED (D8), Hallway LED (D9)

---
*Developed as part of SIT210 - Embedded Systems.*
