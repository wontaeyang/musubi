# Musubi - Super thin 38 key split keyboard

<img src="https://github.com/wontaeyang/musubi/blob/main/pictures/musubi-angle.jpg" alt="Musubi-angle" width="600">

Musubi is a 38 key split keyboard using Kailh X switches and Seeeduino Xiao.
This keyboard started with dust keyboard as a base and adjusted with customized layout
and design elements from my favorite keyboards.

* [dust by Hazel](https://github.com/jasonhazel/dust)
* [TOTEM by GEIST](https://github.com/GEIGEIGEIST/TOTEM)
* [Dilemma by BastardKB](https://github.com/Bastardkb/Dilemma)

#### Currently there are two versions of the keyboard

* **V1** (white)
    - a lot more index and pinky column stagger
    - Totem like thumb cluster
* **V2** (red)
    - less aggressive column staggers
    - thumb cluster is extended out
    - TRRS socket location moved
    - double puck mount for wider design

<img src="https://github.com/wontaeyang/musubi/blob/main/pictures/comparison.jpg" alt="Musubi-angle" width="600">

# Features

* Reversible PCB
* Columnn stagger with splay
* 3x5 layout with 4 additional keys (three thumb, 1 pinky)
* Slim build ( measured from keycap to bottom )
    - without case 6.7 mm
    - with case 9.7 mm
* Tenting puck support

<img src="https://github.com/wontaeyang/musubi/blob/main/pictures/musubi-side.JPG" alt="Musubi-side" width="600">

# BOM

**Base keyboard**:
* Seeeduino Xiao RP2040 (2)
* Musubi PCB (2)
* Kailh X switches (38)
* Kailh X switch keycaps (38)
* Diodes - 1N4148W  (38)
* TRRS Jack - PJ 320A 3.5mm (2)
* TRRS cable (1)

**Optional parts**:
* Musubi case (2, optional)
    - M2 4mm screw (8)
    - M2 nuts - 4mm wide, 1.6mm tall (8)
    - Tenting pucks (2, optional)
    - Manfrotto Pocket Tripod (2, optional)
    - Rubber feet (optional without tenting pucks)

# Keyboard design files

V1 files
* [V1 PCB](https://github.com/wontaeyang/musubi/blob/main/PCB/Exports/V1/musubi-pcb.zip)
* [V1 case](https://github.com/wontaeyang/musubi/tree/main/case/V1)

V2 files
* [V2 PCB](https://github.com/wontaeyang/musubi/blob/main/PCB/Exports/V2/musubi_pcb_rev2.zip)
* [V2 case](https://github.com/wontaeyang/musubi/tree/main/case/V2)


# Firmware

Musubi's firmware is a modified copy of [Dilemma's VIA keymap](https://github.com/qmk/qmk_firmware/tree/master/keyboards/bastardkb/dilemma/3x5_2/keymaps/via).
If you want to just flash the keyboard with default keymap, put the Xiaos in to bootloader mode and copy the included UF2 file

```
// For Macs
cp -X ./firmware/musubi_default.uf2 /Volumes/RPI-RP2
```

For those who wish to customize, clone this repo and symlink Musubi firmware to QMK Firmware

```
ln -s ./firmware/musubi /{your_qmk_firmware_base_location}/qmk_firmware/keyboards/musubi
```

Adjust the layout and compile/copy the UF2 file into Xiao

```
qmk compile -kb musubi -km default
cp -X ./firmware/musubi_default.uf2 /Volumes/RPI-RP2
```

# License
This work is licensed under a [Creative Commons Attribution 4.0 International License][cc-by].


[cc-by]: http://creativecommons.org/licenses/by/4.0/
