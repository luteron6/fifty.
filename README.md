# fifty.
This is my take on a minimalist 50% keyboard optimized for commandlines. I created it to solve a problem controlling the computer in my travel van. There's a monitor and computer mounted in the vehicle, but when I'm using it, there's no good spot to put the keyboard. It could go on my lap, but it's huge (~90% keyboard). And there's no spot for a mouse or touchpad. This solves both these problems. At first the goal was to create a 40% keyboard with a touchpad, but it ended up being a 50% keyboard (48 keys) with a round touchpad and right/left mouse buttons. It uses MX Brown switches, a Cirque trackpad, all powered by a Waveshare RP2040-Plus:
![image](https://github.com/user-attachments/assets/e99c158c-3892-4fd2-9e1a-d90a61877a4a)

It's made to run this keymap:
![image](https://github.com/user-attachments/assets/9a121015-5071-49c0-96a6-310de35e28af)

## CAD
The case is stored in the /CAD folder, both the STL files and the STEP file. Meant to be 3D printed. Everything bolts together with M2 screws and threaded inserts. Also has rubber feet on the bottom.

![image](https://github.com/user-attachments/assets/caf8c174-e205-4ffd-b1cc-b9a1aba58110)


## PCB
The PCB gerbers and source files are stored in the /PCB folder. I made it in KiCAD:
![image](https://github.com/user-attachments/assets/6ef89957-d2d4-4713-9151-2e1e28d9dd09)


It needs:
* MX-Style Switches (50)
* SOD-123 Diodes (50)
* Cirque 40mm Trackpad
* 4.7k ohm Resistors (2)
* RP2040-Plus
* Screw-In Stabilizers (1x 2u and 1x 6.25u)

## Code
I made the code in QMK. Source files are in the /Code folder. Still a work in progress, but QMK MSYS can build it, so I put the .uf2 file in the folder. I might still change the layout, but currently it's documented above.

## BOM
| Item                      | QTY Needed | QTY Purchased | Price   | Description                | Link                                                                                                                  |
|---------------------------|------------|---------------|---------|----------------------------|-----------------------------------------------------------------------------------------------------------------------|
| MX Brown Switches         | 50         | 70            | $24.99  | Keyboard Switches!         | [link](https://www.amazon.com/Pre-lubed-Switches-Mechanical-Keyboard-Pcs-5pin/dp/B0CKTJLCDB)                                  |
| Cirque Trackpad           | 1          | 1             | $27.00  | Trackpad Module            | [link](https://shop.beekeeb.com/product/40mm-cirque-glidepoint-circle-trackpad-module-diy-kit-for-split-mechanical-keyboard/) |
| RP2040-Plus               | 1          | 1             | $6.99   | Microcontroller            | [link](https://www.waveshare.com/rp2040-plus.htm?sku=23503)                                                                   |
| USB-C Connector           | 1          | 1             | $12.99  | USB-C adapter              | [link](https://www.amazon.com/Tciogrxp-Magnetic-Connector-Compatible-Thunderbolt/dp/B0DFM1B3DK/)                              |
| Stabilizers               | 1          | 1             | $16.98  | Screw-In Stabilizers       | [link](https://www.amazon.com/DUROCK-Stabilizers-Translucent-Keyboard-Mechanical/dp/B0B2RVN19F/)                              |
| Diodes                    | 50         | 100           | $6.99   | SOD-123 1N4148W SMD Diodes | [link](https://www.amazon.com/100-Pieces-1N4148W-Switching-High-Speed/dp/B079KJX5J9/)                                         |
| Rubber Feet               | 4          | 12            | $5.99   | Rubber Silicone Feet       | [link](https://www.amazon.com/Pack-Rubber-Silicone-Feet-Diameter/dp/B0927HC2TD/)                                              |
| Keycaps                   | 1          | 1             | $14.69  | Low Profile Keycaps!       | [link](https://www.amazon.com/XVX-Profile-Keycaps-Keyboard-Mechanical/dp/B0C1B6STX4)                                          |
| Resistors                 | 2          | 3250          | $7.99   | SMD resistors              | [link](https://www.amazon.com/Yobett-3250PCS-Resistor-Tolerance-Resistors/dp/B0BZGQ8136/)                                     |
| PCB (ordered from JLCPCB) | 1          | 5             | $15.00  |                            |                                                                                                                       |
| Sales Tax                 |            |               | $10.82  |                            |                                                                                                                       |
| Shipping                  |            |               | $30.00  | JLCPCB Shipping            |                                                                                                                       |
| Shipping                  |            |               | $15.00  | beekeeb Shipping           |                                                                                                                       |
|                           |            |               |         |                            |                                                                                                                       |
| TOTAL                     |            |               | $195.43 |                            |                                                                                                                       |



made with love by a hack clubber


