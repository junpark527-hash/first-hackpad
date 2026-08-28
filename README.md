## My first every Hackpad!

<img width="1860" height="1462" alt="Screenshot 2026-08-24 231600" src="https://github.com/user-attachments/assets/e7612c1b-10df-4c6e-8bb1-4408a96367e9" />

A custom numpad style macropad, built for the NASA x Hack Club Stardance Challenge.

# About

I faced many difficulties, challenges, and learning curves throughout this whole process, but in the end, I am extremely glad that I took the time to learn all these new skills. I had to redo my entire idea that I had planned from the beginning because of issues I faced with wiring and pins, but it was quite fun tinkering with these new software programs, and I am happy with the results. My build consists of an OLED screen, an encoder, some keys, and a case.

# Features:
QMK firmware
a 3-part case (3D printed)
128x32 OLED Display
EC11 Rotary encoder for volume and brightness 
8 keys/switches
8 SK6812MINI-E LEDs
4 M2 heatset inserts and screws

# CAD Model
<img width="1292" height="932" alt="Screenshot 2026-08-24 230301" src="https://github.com/user-attachments/assets/3047b9a1-eac5-417a-814c-3841076a637a" />
<img width="2426" height="854" alt="Screenshot 2026-08-24 230535" src="https://github.com/user-attachments/assets/16b8f8a0-2c03-45fb-8903-b772a70173a6" />
<img width="1952" height="862" alt="Screenshot 2026-08-24 003247" src="https://github.com/user-attachments/assets/ae6a1d7a-3fd7-4fcb-bbf2-b6395cf9b355" />

This case has 3 separate parts: one for the bottom of the case, one for the top half, and one for the bottom half of the top. The top half consists of the cutouts for my OLED and encoder, and the other half has the key switch cutout. I am planning on assembling the case together using M2-Heatset inserts and screws on each corner. It also has 4 small raised pillars in the bottom of the case for my pcb to rest on. Additionally, I made a cutout for the USB on the XIAO.

# Schematic
This is my Schematic: 
<img width="1638" height="1372" alt="Screenshot 2026-08-28 013303" src="https://github.com/user-attachments/assets/5b67b3f4-6798-457c-b6ba-b7c4556b8b97" />

# PCB
This is my PCB: 
<img width="1892" height="1482" alt="Screenshot 2026-08-28 013324" src="https://github.com/user-attachments/assets/242cd414-b283-4040-ad92-3259f6a15688" />

# Firmware
I have a total of 8 keys on this hackpad with a rotary encoder. Based on the click of one of the keys, I can change the function of the encoder from brightness adjustment to volume adjustment. The other keys will be used for other functions like copy and paste, media controls, and opening a new file explorer tab or task manager.

# BOM
This is everything that should be needed to make this hackpad: 

* 8x Cherry MX-style Switches
* 8x White Blank DSA Keycaps
* 4x M3x5x4mm Heatset inserts
* 4x M3x16mm Screws
* 8x 1N4148 Diodes
* 8x SK6812MINI-E LEDs
* 1x 0.91" 128x32 OLED Display
* 1x EC11 Rotary Encoder
* 1x XIAO RP2040
* 1x Case (3 printed parts)

See [JOURNAL.md](JOURNAL.md) for progress notes.
