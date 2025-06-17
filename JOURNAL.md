---
title: "fifty."
author: "@luteron6"
description: "The minimalist 50% keyboard optimized for commandlines!"
created_at: "2025-06-02"
---

# fifty.
Made by: @luteron6

Total hours so far: 16

My family has a travel van that has a Raspberry Pi in it. The problem is, it's hard to lug a large (I think it's ~90-100%) keyboard around. So I end VNC'ing in and trying to type on my phone. But it's hard to type special characters, and it's just too small. So here's my solution: a 50% keyboard optimized for commandlines!

## Day 1 - 6/2/2025 - 9:29 PM (1 Hour)
Brainstorming. I've been doing some research about minimalist keyboards over the past couple days, and here's some goals I would like to accomplish:
* I would like my keyboard to be around 40% (about 40 keys).
* I like the borderless-ness of the Vortex Vibe keyboard (below):
<br><br><img src="https://github.com/user-attachments/assets/bf35f647-32d7-4b06-b914-c52262b52ddd" width=400><br>
* I also need to be able to type commandline symbols (~, |, \, {, etc.)
* It would be cool to have dual-legend keys:
<br><br><img src="https://github.com/user-attachments/assets/65966a85-20fa-430b-98d7-715df4d4fc41" width=300)><br>
* It needs to be portable.
* It either runs off of bluetooth and a battery, or just a USB-C port. I know magnetic-USB-C thingies exist, so I might just go with one of those for easy connection/disconnection. The main point is to use it in the van.
<br><br><img src="https://github.com/user-attachments/assets/91808b54-2500-4993-b6ed-938798d9d94f" width=300><br>

I also created this repository just now, and added it to Highway's submissions.yml file.

## Day 2 - 6/4/2025 - 6:51 PM (1 Hour)
Ok. Here's what I'm going to do:
* MX switches (because I've used them before)
* Microcontroller: Waveshare RP2040-Zero (I really want an RP2040 with USB-C, but they won't let me get an Orpheus Pico). I'll do without a battery and bluetooth.
* Blank keycaps, or maybe at least the alphabet ones with legends.
* Here's what I was thinking for my layout:
<br><br>![image](https://github.com/user-attachments/assets/a609f38b-804f-4d06-a92d-54c89d59f983)

## Day 3 - 6/13/2025 - 2:30 PM (6 Hours)
OK! That took way too long. Here's a summary of what I did:
* I found the MX switches I want to use: [MX Browns](https://www.amazon.com/Glorious-PC-Gaming-Race-Switches/dp/B0716ZNZ1P/) It's a 120 pack, but they're only ~29 cents each!
* I also found the touchpad I want to use. It's a [Cirque GlidePoint 40mm Trackpad](https://shop.beekeeb.com/product/40mm-cirque-glidepoint-circle-trackpad-module-diy-kit-for-split-mechanical-keyboard/). It communicates over I2C, so it connects just like a 0.96" OLED display.
* I finalized my layout! At least the number of keys. It has 48 keys (plus right and left mouse buttons). So technically it's closer to a 50% keyboard. Here's my [KLE](https://www.keyboard-layout-editor.com/##@_css=%2F@font-face%20%7B%0D%0A%20%20font-family%2F:%20'Zain'%2F%3B%0D%0A%20%20src%2F:%20url('https%2F:%2F%2F%2F%2Fraw.githubusercontent.com%2F%2Fgoogle%2F%2Ffonts%2F%2Fmain%2F%2Fofl%2F%2Fzain%2F%2FZain-Regular.ttf')%20format('truetype')%2F%3B%0D%0A%20%20font-style%2F:%20normal%2F%3B%0D%0A%20%20font-weight%2F:%20400%2F%3B%0D%0A%7D%0D%0A%0D%0A.keylabel0,%20.keylabel1,%20.keylabel2,%20.keylabel3,%20.keylabel4,%20.keylabel5,%20.keylabel6,%20.keylabel7,%20.keylabel8,%20.keylabel9,%20.keylabel010,%20.keylabel11,%20.keylabel12%7B%0D%0A%20%20font-family%2F:%20'Zain',%20sans-serif%2F%3B%0D%0A%20%20font-size%2F:%2016px%2F%3B%0D%0A%7D%3B&@_w:1.25%3B&=Esc%0A~%0A%0A%7C&=Q%0A%0A%0A!&=W%0A%0A%0A%2F@&=E%0A%0A%0A%23&=R%0A%0A%0A$&=T%0A%0A%0A%25&=Y%0A%0A%0A%5E&=U%0A%0A%0A%2F&&=I%0A%0A%0A*&=O%0A%0A%0A(&=P%0A%0A%0A)&=%7B%0A%5B&=%7D%0A%5D&=Back%3Cbr%3ESpace&_x:1&a:7%3B&=&=%3B&@_a:4&w:1.5%3B&=Tab&=A%0A%0A%0A1&=S%0A%0A%0A2&=D%0A%0A%0A3&_n:true%3B&=F%0A%0A%0A4&=G%0A%0A%0A5&=H%0A%0A%0A6&_n:true%3B&=J%0A%0A%0A7&=K%0A%0A%0A8&=L%0A%0A%0A9&=%2F:%0A%2F%3B%0A%0A0&=%22%0A'%0A%0A%60&_w:1.75%3B&=Enter%3B&@_w:2%3B&=Shift&=Z%0A%0A%0A-&=X%0A%0A%0A%2F_&=C%0A%0A%0A%2F=&=V%0A%0A%0A+&=B&=N&=M&=%3C%0A,&=%3E%0A.&=%3F%0A%2F%2F%0A%0A%5C&_w:1.75%3B&=Shift%3B&@_w:1.25%3B&=CTRL&_a:7&w:1.25%3B&=%3Ci%20class%2F='fa%20fa-windows'%3E%3C%2F%2Fi%3E&_a:4%3B&=Alt&_a:7&w:6.25%3B&=&_a:4&w:1.25%3B&=Fn&_a:7%3B&=%3Ci%20class%2F='fa%20fa-angle-left'%3E%3C%2F%2Fi%3E&=%3Ci%20class%2F='fa%20fa-angle-down'%3E%3C%2F%2Fi%3E&=%3Ci%20class%2F='fa%20fa-angle-up'%3E%3C%2F%2Fi%3E&=%3Ci%20class%2F='fa%20fa-angle-right'%3E%3C%2F%2Fi%3E) layout. It's also pictured below:
<br><br>![thumbnail_IMG_2734](https://github.com/user-attachments/assets/4dfe4553-f8e0-468e-8ab8-0c279b4a3334)<br>
* I put it all into KiCad, drew up the schematic, laid out the PCB, and routed it all: <br><br>![image](https://github.com/user-attachments/assets/aa047285-44d8-42da-ac96-26366a9425db)
![image](https://github.com/user-attachments/assets/ff33e6e3-d298-44e9-9b62-bd664b33b378)

![image](https://github.com/user-attachments/assets/565fe0f1-a46f-45b2-8187-1429881fd1a7)
*Ignore the OLED screen, I just copied the footprint over and will be using it as a header for the touchpad.

* I didn't have enough pins on the RP2040-Zero for the matrix, so I switched to the [RP2040-Plus](https://www.waveshare.com/wiki/RP2040-Plus#Pinout_Definition) board also by Waveshare.

That's basically what I did! Also I now have a rough BOM:
* [MX Brown Switches (50)](https://www.amazon.com/Glorious-PC-Gaming-Race-Switches/dp/B0716ZNZ1P/): $34.99
* [Trackpad](https://shop.beekeeb.com/product/40mm-cirque-glidepoint-circle-trackpad-module-diy-kit-for-split-mechanical-keyboard/): $27.00
* [RP2040-Plus](https://www.waveshare.com/rp2040-plus.htm?sku=23503): $6.99
* PCB (from JLCPCB, approximately): $15.00
* [Magnetic USB-C Connector](https://www.amazon.com/Magnetic-DuHeSin-Straight-Transfer-Thunderbolt/dp/B0BMX53FF9/ref=sr_1_2_sspa?sr=8-2-spons&sp_csd=d2lkZ2V0TmFtZT1zcF9hdGY): $20.89
* Misc. (resistors, etc.): $5.00
* Total: $109.87

## Day 3 - 6/13/2025 - 6:59 PM (3 Hours)
I forgot to mention regarding the circuit board - it's a 14x4 matrix (14 columns, 4 rows). I also edited the right side of my PCB so there's a touchpad circle:
<br><br><img src="https://github.com/user-attachments/assets/c26290d1-7a1e-446e-a06e-92974a0da497" width=400><br>

Here's what I have on my case: 

![Screenshot 2025-06-13 210431](https://github.com/user-attachments/assets/33b6fc2a-e193-4304-89c9-865cdf22ac2c)
![Screenshot 2025-06-13 210501](https://github.com/user-attachments/assets/f716db27-1315-4e71-88b9-e92dbf669b67)

## Day 4 - 6/14/2025 - 8:07 PM (2 Hours)
Just finished working on my case more. It took me a while to find the docs for the touchpad, but I found these with mounting suggestions: [here](https://www.dropbox.com/scl/fi/fl600un1qv1cupbfjng95/GP-DS-170409-TM035035-SPI-I2C-PINN-Trackpad-Spec.pdf?rlkey=1pl0tw13air87pt92mkj72igx&e=1&dl=0).
Here's what I have on the touchpad: ![image](https://github.com/user-attachments/assets/901a1ba2-836d-44ca-8848-cbbf6932dda7)

I also saw Scotto Keebs' video on making a case, and he put edges around his case, so I also did that ^. I need to keep working on the case, and get started on QMK.

I need to add these things to the BOM:
* [Stabilizers](https://www.amazon.com/DUROCK-Stabilizers-Translucent-Keyboard-Mechanical/dp/B0B2RVN19F/): $16.98
* [SMD Diodes](https://www.amazon.com/100-Pieces-1N4148W-Switching-High-Speed/dp/B079KJX5J9/): $6.99
* Total: $133.84

## Day 5 - 6/16/2025 - 1:20 PM (5 Hours)
THAT WAS A LOT! Here's a recap of what I did:
I was editing my case, placing keycaps on the switches, and I realized I could raise the spot where the microcontroller is, along with the touchpad:
![image](https://github.com/user-attachments/assets/77c317e2-057b-4e47-8008-c1b43554c369)
Then I had an epiphany: Why am I putting the microcontroller on the bottom of the board when I can have it above the PCB? I's a bad idea to have the USB on the bottom, because it's too close to the bottom of the case. So I went back into KiCAD, flipped the RP2040, and re-traced all the traces previously connected to the RP2040. It took me a while to delete the old traces and redo them. Now they look really wonky.
![image](https://github.com/user-attachments/assets/7e0cf1ad-223a-4ce2-85cf-b92ae25ddbc1)
Then I reworked the USB port on the case:
![image](https://github.com/user-attachments/assets/da12a3fd-b33b-4815-aad2-18abc71bcb23)
Then I cleaned up my case a little bit more, added some rubber feet, and I think it's done now!

![Screenshot 2025-06-16 133251](https://github.com/user-attachments/assets/0859b368-f094-46da-92e6-69775f27230e)
![image](https://github.com/user-attachments/assets/f7aebb42-4bb1-4e9b-aaf9-e119e2ad8d64)
![image](https://github.com/user-attachments/assets/cb2bc475-8eb8-43c1-a8b8-bec4a1bef209)
![Screenshot 2025-06-16 133423](https://github.com/user-attachments/assets/f872a434-40ef-4cd2-a074-f390f9000fa8)
![image](https://github.com/user-attachments/assets/5cd3e96d-d5f0-43d3-b987-19fa1c762667)

Here's what I need to add to my BOM:
* [Rubber Feet](https://www.amazon.com/Pack-Rubber-Silicone-Feet-Diameter/dp/B0927HC2TD/): $5.99
* [Keycaps](https://www.amazon.com/139keys-Sublimation-switches-Mechanical-Keyboard/dp/B0BR8SMKLS/): $9.99


Here's my whole BOM now:
* [MX Brown Switches (50)](https://www.amazon.com/Pre-lubed-Switches-Mechanical-Keyboard-Pcs-5pin/dp/B0CKTJLCDB): $24.99
* [Trackpad](https://shop.beekeeb.com/product/40mm-cirque-glidepoint-circle-trackpad-module-diy-kit-for-split-mechanical-keyboard/): $27.00
* [RP2040-Plus](https://www.waveshare.com/rp2040-plus.htm?sku=23503): $6.99
* PCB (from JLCPCB, approximately): $15.00
* [Magnetic USB-C Connector](https://www.amazon.com/Tciogrxp-Magnetic-Connector-Compatible-Thunderbolt/dp/B0DFM1B3DK/): $11.99
* [Stabilizers](https://www.amazon.com/DUROCK-Stabilizer-Innovative-Pre-clipped-Stabilizers/dp/B0CTHT34MJ/): $9.99
* [SMD Diodes](https://www.amazon.com/100-Pieces-1N4148W-Switching-High-Speed/dp/B079KJX5J9/): $6.99
* [Rubber Feet](https://www.amazon.com/Pack-Rubber-Silicone-Feet-Diameter/dp/B0927HC2TD/): $5.99
* [Keycaps](https://www.amazon.com/139keys-Sublimation-switches-Mechanical-Keyboard/dp/B0BR8SMKLS/): $9.99
* [4.7k Ohm Resistors](https://www.amazon.com/EDGELEC-Resistor-Tolerance-Multiple-Resistance/dp/B07QJB3LGN/): $5.99
* M2 Threaded Inserts: already owned
* TOTAL: $124.92. I'll have to work stuff if I have shipping later.

## Day 6 - 6/17/2025 - 10:36 AM (3 Hours)
I realized I didn't have any way to connect the bottom half of my case to the top half of my case, so I added holes in my plate, PCB, and threaded inserts to the bottom of my case. It took me forever to get the holes lined up to the PCB and the plate, but here it is:
![image](https://github.com/user-attachments/assets/c53e09df-74d2-48ef-8f9b-bc68f4627aee)
I also added some art to my case and some information, made the code in QMK, and put everything in this Github repo. Will try to submit later today.



