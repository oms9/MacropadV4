
# MacropadV4

MacropadV4 is an ortholinear 40-key (5 rows, 8 columns) Macropad with 3 EC11 encoders. It's main purpose is volume control and to provide extra keys off of my main keyboard for use as a soundboard or to map to hotkeys, similar to a compact [Novation launchpad](https://us.novationmusic.com/products/launchpad-x). <br></br>

It is based on the [Rasbperry Pi Pico/W](https://www.raspberrypi.com/products/raspberry-pi-pico/) with individual RGB backlight support. It runs on [QMK](https://qmk.fm/), mainly compiled for use with [Vial](https://get.vial.today/). <br></br>

It communicates with the host using [MIDI](https://en.wikipedia.org/wiki/MIDI) signals to prevent games like League of Legends, VALORANT, Apex Legends and similar from intercepting the key presses from reaching control software.<br></br>

It is my first time designing a PCB as well as my first interaction with QMK!!<br></br>

KiCad PCB Design files (Schematic and PCB) as well as 3D CAD files (Shell with kickstand and keycaps) and the Vial configuration (as well as pre-compiled firmware) are all included, I ordered PCB fabrication from [JLC PCB](https://jlcpcb.com/), the 3D prints are mostly in PETG with the exception of the green shell.<br></br>

When it comes to control software, I wrote my own GUI application: [MIDI Controls V2](github repo coming soon!)

## [Images](https://imgur.com/a/Uc7NvE1):
![MacropadV4 PCB](https://imgur.com/uz435iN)
![Assembled MacropadV4 PCB with blue lights on and a few test switches](https://imgur.com/6GdibCt)
![Fully assembled MacropadV4, lit up in a gradient of violet and blue with a single bright yellow key](https://imgur.com/WcxmbI3)

---
## Bill of Materials:
 - 1 x [Raspberry Pi Pico or Pico W](https://www.raspberrypi.com/products/raspberry-pi-pico/)
 - 40 x [MX Style switches](https://www.amazon.com/gp/product/B0C289CZT7/)
 - 40 x [Kailh Hotswap sockets](https://www.amazon.com/gp/product/B0B4W9YMGM/) 
 - 40 x [1N4148W diodes](https://www.amazon.com/gp/product/B0BY6ZL9BH/) (SOD-123 footprint)
 - 40 x [WS2812B RGB LEDs](https://www.ebay.com/itm/266150587894?var=565982726008)
 - 4 x M4 x 8.1mm x 6.3mm [threaded inserts](https://www.amazon.com/gp/product/B0BFWC4Q9P/)
 - 2 x M4 x 12mm hex head screws
 - 2 x M4 x 7.5mm hex head screws

---

## Notes and Instructions:

#### ⚠️ For the PCB, please note that the WS2812B LEDs are rotated by 180° every other row! ⚠️
#### I recommend printing the shell with manual supports underneath the kickstand recess, keycaps are printed face down.

I recommend the following order when it comes to assembling the PCB:

 1. Refer to the image album.
 2. Pre tin the pads
 3. Solder the RGB LEDs, keep in mind that they rotate 180° every other row
    - Start with the top row and the LED's corner to the top left, second row it should be bottom right, alternate.
 5. Solder the 1N4148W diodes
 6. Solder the hot swap sockets
 7. Solder the Pico's pin headers ⚠️ long side at the bottom (Pico should be on the right).
 8. Place the Pico on the front side of the board (Pico should be on the left) and solder it to the headers.

After the assembly, you can just plug in the Pi Pico to your computer and copy the .uf2 file to the directory that shows up, this will essentially flash the Vial firmware to the Macropad and you are ready to go! You can use Vial (or the [web-app](https://vial.rocks/)) to customize the keys and lighting to your liking.

#### The encoder's push switches are wired to individual GPIO pins and GND, which is normal if you are using Micro/CircuitPython for the keyboard, but it is not directly supported by QMK. They still work however because I added extra columns in firmware to trick QMK into treating them as part of the key matrix. So this is a solved problem!

