---
layout: page
title: Faking a Hardware Interface
---

Embedded *Hello, World* application: turn on a single LED.

Test with [CppUTest](http://cpputest.github.io/manual.html).
Configure with CMake. Run with Docker.


## Background

Don't have hardware yet but want to be able to develop.
Can still develop the abstract software portion.

## Directory Structure

### Build System

```
.
├── build/
├── build_test/
├── Dockerfiles/
├── docker_run.sh*
├── docs/
├── led_on/
├── production.env.example
└── test.env.example
```

### Source Code

```
.
├── CMakeLists.txt
├── include/
├── src/
└── tests/
```

Link to CppUTest intro repo for detailed build instructions.
This repo follows the same pattern.
