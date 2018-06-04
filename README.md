# STM32F446RE_Overlay_example
This is a simple example of an Overlay Implementation for the Microcontroller STM32F446RE.

This is an Eclipse C Project. The recommended Eclipse version is Neon for C/C++ Developers.

## Pre-requisites
Download and install the following toolchains/plugins:
1. Cross-Toolchain for ARM Cortex M Processor
2. GNU ARM Eclipse Plugins  https://github.com/gnu-mcu-eclipse/
3. OpenOCD
4. make and other dependencies are installed.

## How to run
1. Import the project into Eclipse. Update the path to the Cross-Toolchain for ARM Cortex.
2. Build the Eclipse project by right-clicking on the project and selecting Build Project.
3. A Debug folder will be created with all the compiled binaries in it.
4. If the build is successful, STM32F446RE_Overlay_example.elf will be created.
5. Start OpenOCD with the default configuration.
6. Download the ELF file onto the target and debug.

