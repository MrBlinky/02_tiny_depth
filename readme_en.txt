Modified version of TinyDepth with the followinging changes:

* EEPROM save location changed from location 0 to 16 to
 prevent system settings from being overwritten.

* version in folder TinyDepth can be opened/compiled/uploaded from the Arduino IDE directly.

original readme_jp.txt text run through Google translate amd refers to original source folder:
----------------------------------------------------------------------------------------------

Tiny Depth for Arduboy

■ Transfer method
Transfer using the attached tool of "Arduino IDE" for windows.

Open "test.bat" in this folder with a text editor
Modify VAL1 to VAL4 (lines 2 to 5) according to your environment.

If you connect Arduboy to USB and execute "test.bat", it will be transferred.


■ How to play
Left button Move left
Right button Move right
A button Mine drop, decision


■ Development environment
・Windows8.1 pro
・Arduino IDE 1.6.8
・Arduino IDE 1.0.6 (use only make.exe)

Since the latest IDE does not include make.exe, I am getting sick from older versions.
The tools used were:

Visual Studio 2015 C#
python 2.7 + pil


■ MIDI data
It's a little scary because it's without permission. (^^;
I used it from Kone's website.
http://www.geocities.co.jp/Hollywood-Kouen/9343/music.html


■ History
v1.03 2016/07/12 Correct the mistake of A button and B button.
v1.02 2016/05/17 Add Arduboy 1.0 and osx script
v1.01 2016/02/23 Fixed a problem that cannot be reset on 64bit PC.
v1.00 2015/12/25 Completed for the time being





Arduboy 1.0
Memo

AVR Memory Usage
----------------
Device: atmega32u4

Program: 17730 bytes (54.1% Full)
(.text + .data + .bootloader)

Data: 1589 bytes (62.1% Full)
(.data + .bss + .noinit)