# STM32F446RE_Overlay_example
This is a simple example of an Overlay Implementation for the Microcontroller STM32F446RE.

This is an Eclipse C Project. The recommended Eclipse version is Neon for C/C++ Developers.

## Short Description
The STM32F446 nucleo board comes with a 512 Kb Flash and a 128 Kb RAM.
Since all of the code that gets executed on the Processor needs to be on the RAM, the entire Flash 
Memory of 512 Kb cannot be utilized. In other words, only 128 Kb can be used in order to
run the code, limited by the RAM size. In order to overcome this problem, the concept of Overlays
is introduced. Overlays make it possible to dynamically load object (*.o) files from the Flash
Memory onto the RAM memory(reserved area), so that more code can sit on Flash and can be copied
to the RAM during execution. Hence, this project is a simple example of the Overlay
mechanism that needs to be implemented in order to achieve this goal.
A good article on Overlay mechanism is https://sourceware.org/binutils/docs/ld/Overlay-Description.html

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

