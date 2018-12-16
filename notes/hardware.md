# Hardware

Notes on actual hardware.

## In General

We'll typically encounter:

  * pinmux (multiplex)
    * function: GPIO, timer, data, clock, etc
    * let gpio library handle this - it must be gpio
  * direction
    * input or output
    * create named function (or could pass as an arg)
  * value
    * high or low


## BeagleBoneBlack

Based on the AM335x series.

Linux GPIO subsystem:
```bash
/sys/class/gpio# ls
export  gpio14  gpio48  gpio61  gpio64  gpiochip0  gpiochip32  gpiochip64  gpiochip96  unexport
/sys/class/gpio# cd gpio61
/sys/class/gpio/gpio61# ls
active_low  device  direction  edge  power  subsystem  uevent  value
/sys/class/gpio/gpio61# cat direction
out
/sys/class/gpio/gpio61# cat active_low
0
/sys/class/gpio/gpio61# cat value
0
/sys/class/gpio/gpio61#
```


## ATtiny861

Pinmux?

direction (port)?

Pin (high/low)?
