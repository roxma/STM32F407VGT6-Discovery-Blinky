# A Minimal Project Template for STM32F4 Development on Linux

I'm using this template playing with my STM32F407VGT6-Discovery board.
Theoretically it could be easilly ported for any STM32F4xxx chips.

Requirements:

- `make`
- [gcc-arm-none-eabi](https://developer.arm.com/open-source/gnu-toolchain/gnu-rm/downloads)
- [STM32F4-Discovery_FW_V1.1.0](https://www.st.com/en/embedded-software/stsw-stm32068.html)
  extracted into this project directory.
- [stlink-tools](https://github.com/texane/stlink) for burning the program to
  the chip.

If you don't know how to start, here's a nice blog post that guides you step
by step.

- [How to compile and burn the code to STM32 chip on Linux (Ubuntu)](http://blog.podkalicki.com/how-to-compile-and-burn-the-code-to-stm32-chip-on-linux-ubuntu/)

