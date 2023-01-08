# Musubi - A super thin 38 key split keyboard

![Musubi pcb](/pictures/pcb_preview.png)

Musubi is a 38 key split keyboard using Kailh X switches and Seeeduino Xiao. This keyboard has Dust keyboard as a base and adjusted with customized layout and design elements from my favorite keyboards.

* [Dust by Jason Hazel](https://github.com/jasonhazel/dust)
* [Totem by GEIST](https://github.com/GEIGEIGEIST/TOTEM)
* [Dilemma by BastardKB](https://github.com/Bastardkb/Dilemma)

# Features

* Reversible PCB
* Columnn stagger with splay
* 3x5 layout with 1 extra pinky and 3 thumb keys
* Slim build ( measured from keycap to bottom )
    - without case 6.7 mm
    - with case 9.7 mm
* Tenting puck support

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
    - SplitKB tenting puck or Lucky Pucker (2, optional)
    - Manfrotto Pocket Tripod (2, optional)
    - Rubber feet (optional without tenting pucks)

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
