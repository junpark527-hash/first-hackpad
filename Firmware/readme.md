# hackpadv1


*This is a cool 2x4 hackpad I made for myself. It includes an OLED panel and a rotary encoder!*

* Keyboard Maintainer: [Jacob Park](https://github.com/junpark527-hash)
* Hardware Supported: *Custom PCB and Seeed XIAO RP2040*
* Hardware Availability: *HackClub Stardance!*

Make example for this keyboard (after setting up your build environment):

    make hackpad27:default

Flashing example for this keyboard:

    make hackpad27:default:flash

See the [build environment setup](https://docs.qmk.fm/#/getting_started_build_tools) and the [make instructions](https://docs.qmk.fm/#/getting_started_make_guide) for more information. Brand new to QMK? Start with our [Complete Newbs Guide](https://docs.qmk.fm/#/newbs).

## Bootloader

Enter the bootloader in 3 ways:

* **Bootmagic reset**: Hold down the key at (0,0) in the matrix (usually the top left key or Escape) and plug in the keyboard
* **Physical reset button**: Briefly press the button on the back of the PCB - some may have pads you must short instead
* **Keycode in layout**: Press the key mapped to `QK_BOOT` if it is available
