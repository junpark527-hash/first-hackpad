---
title: "Numpad Hackpad"
github: "junpark527-hash/numpad-hackpad"
description: "My first ever hardware project: a custom numpad-style macropad built from scratch for NASA x Hack Club Stardance."
created_at: "2026-08-17"
---

# August 17th: Creating the GitHub Repository!

Setting up a repository is much harder than I thought! Thankfully, I had created a GitHub account a couple of months back but did not do much on it before today. I had to download Git to use Git Bash and look up how to set up my repository, as shown in the Stardance tutorial. I set up the general structure for the README file and other folders needed for the build. Additionally, set my template to KiCad when creating this repository, as I will be using that software for this project. I also followed the journal tutorial from the Hardware Codex link and was able to set this up! While digging around, I found out that putting a # makes whatever text comes after a heading, and putting two asterisks before some text makes it bold.  It was a bit overwhelming for the first try, but I am glad I was able to do it. I am going to start planning the build for my numpad by researching online, looking at numpad models, and sketching. 

<img width="2343" height="1341" alt="image" src="https://github.com/user-attachments/assets/b43f9c7d-c583-4772-b533-bc65340b3727" />

**Total time spent: 1h**

# August 18th: Creating the Blueprint

I got to work after I created the repository and started planning out what I wanted to build. I wanted to build a number pad-like creation with 4 extra customizable command keys on top for macros and other functions. I looked online and researched various number pad formats and came across a couple of designs that had the 4 extra keys I wanted. As I was planning, at first I designed it in a way so that each switch would have its own individual slot, but as I went on, I realized that it would be better to have a bigger rectangle with switch slots inside it instead of separating each switch. I wanted the case to have 4 rubber feet at each corner. I went with a generic keybind format for the numbers, math symbols, and Enter key. In the end, after counting everything up, I would need 22 Cherry MX switches for the build. 

<img width="1260" height="1094" alt="image" src="https://github.com/user-attachments/assets/25c0067d-1523-4901-af01-5aefb49c591e" />

As you can see, I wanted to create a theme for this numberpad so it wouldn't be so generic, but I am not sure as to how much extra work, money, and difficulty this will add to my build. I really love Bleach and wanted to add icons for the macro keys and the Espada numbers for the keypad. feel like I am biting off more than I can chew. So, I plan on making it with regular keycaps at first, and switching to the customized ones later down the road as I get more proficient in these topics.

After this, I plan on researching how to use KiCad and figuring out the rough dimensions for my build. I think these upcoming parts will be the most difficult so I am planning on devoting a lot of hours for this next bit. 

Edit: Oops, after looking at my planning again, I realized that I did not have anywhere to connect the numpad to my laptop, so I added a USB cutout on the topside of the build.

**Total time spent: 1h**

# August 18th: Researching how the wiring and pins work

I started researching how pins, wires, and microcontrollers work on these keyboards. Through my research, I was able to find out that using a matrix wiring system for something like my build is much more efficient and cost efficient. This made me do even more research, and I genuinely sat there for an hour trying to understand these switches, rows, columns, and ghosting. After lots of discussions with AI and many articles, I think I grasp the content much better than a couple of hours ago. I am scared that this matrix wiring will make things much more difficult once I get to KiCad, but I guess i have to figure that out too. During this process, I learned the importance of diodes and how they prevent ghosting when 3 or more keys are pressed at the same time. I am much more confident now as I start learning KiCad because everything in the guide beforehand looked like absolute jibberish to me. 

<img width="1101" height="653" alt="image" src="https://github.com/user-attachments/assets/e7657fe1-e7ea-459c-9dbf-4755b5699942" />

This is the template the Hackclub website has, but because of my matrix wiring, I think I will have to spend a bit more time in KiCad trying to learn how to use the software itself and figuring out a plan for my 22 switches.

**Total time spent: 3h**

# August 18th: Planning out my KiCad wiring

I laid out a rough sketch of how the matrices would work to figure out how many pins I would need to see if it fit on the microcontroller. Luckily, I have exactly 1 pin remaining and was able to fit everything else. Right now I am planning on something like this for the wiring. 

<img width="1308" height="1477" alt="image" src="https://github.com/user-attachments/assets/9b15d611-9834-4772-8f1b-52b56c6d84e1" />

**Total time spent 30 minutes**

# August 18th: Building my KiCad wiring!

I went straight to work with KiCad and it took me a long time to get used to the controls and layout. I fidgeted a lot with the switches and diode placements and even found online that if you make labels with identical names, you don't have to do all the fussy wiring. I still have some worries that the labels might not work, but I don't know how to check it. This is what it looks like as of right now. 

<img width="1088" height="1345" alt="image" src="https://github.com/user-attachments/assets/8b440e94-3333-4a60-8dec-14da0bbbb23a" />

**Total time spent: 1 hour**

# August 19th: Building my pcb in KiCad!

Started building my pcb today and oh man, I was hit with complications. I completely missed the part on the guide that said it had to be within 100x100mm so I ended up having to remove my 4 macro keys that were supposed to be separated at the top. Now, I am at a 16 switch numpad which is kinda basic and generic. I guess I will have to spice it up with some custom keycaps later down the road. The wiring took a ton of work as I kept blocking myself off on other paths. But in the end, I pushed through and was able to finish it. I also decided to add some mounting holes on it as well so it would be easier to put inside the case I will build this week. Here is what it looks like right now: 

<img width="1334" height="1253" alt="image" src="https://github.com/user-attachments/assets/69800ada-626f-49ff-a3a3-e35eb2ba1b58" />

**Total time spent: around 3 hours**

# August 20th: Rewiring

Omg, while writing my journal for the wiring I did for the pcb, I realized that I had to place the XIAO's usb on the edge of the border so I could make a hole for it when I make the case. I had to rearrange the format of the mounting holes and rewire all the columns and rows, which was a huge pain. This is what it looks like now 

<img width="895" height="829" alt="image" src="https://github.com/user-attachments/assets/a6dcfe36-6b5f-4227-bcfb-8c5132eaf3af" />

**Total time spent: 30 minutes**

# August 20th: Making a whole new gameplan

Oh my. After some heavy contemplating with my current format of the pcb and key placements, I decided to totally switch my Hackpad design and build an 8 key hackpad, with a rotary encoder, OLED screen, and RGB LEDS. I had just finished making the entire schematic in this format after 3 hours, but KiCad suddenly crashed, and I no longer have the schematic. I just decided to scrap the old one and start fresh, because all my progress had already been deleted. I wasted so much time and lost so much work! I did all this before it crashed :(.

<img width="2075" height="940" alt="image" src="https://github.com/user-attachments/assets/de919dd4-ea1b-4207-b253-e4366bdda78e" />
<img width="1590" height="613" alt="image" src="https://github.com/user-attachments/assets/31930543-5da3-429d-8c95-dbb3595d2cce" />
<img width="2268" height="1146" alt="image" src="https://github.com/user-attachments/assets/c96df030-485d-4bc4-ba8c-1e11ebd1e279" />

**Total time spent: 3 hours**
