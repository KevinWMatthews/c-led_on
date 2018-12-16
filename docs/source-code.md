---
layout: page
title: Examples
---

What is all this code stuff anyway?

## Background

Why?

Describe how GPIO typically work (see notes/hardware.md).

Describe how we want to test the LED's logic - hide the system-specific
details behind a generic interface so that the LED can interact with a generic
GPIO.

Describe:
  * Linux GPIO
  * Linux memory-mapped GPIO
  * AVR GPIO (memory-mapped down to the bit)
  * Memory-driven demo
  * Websocket demo

Describe this project's approach:
  * Fake GPIO layer, spy on the results.
  * LED cares about GPIO state only
    * gpio library handles pinmux, direction
  * We can spy on the GPIO state to make sure that our LED is doing something
  * We can then design a hardware interface independently.
  * If it uses the same API, we can plug and play.
    * may need more extensive testing, depending on how in-depth the fake is
  * Seam allows us to handle different types of systems, listed above
  * We capture schematic knowledge in the LED module:
    * GPIO high -> LED on
    * GPIO low -> LED off
