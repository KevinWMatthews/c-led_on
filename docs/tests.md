# Starting Point for Docs

Putting down the shell commands that I use so that I don't have to recreate them
from scratch later.

## Unit Tests in Docker

```bash
# Build or pull docker image
$ cp test.env.example test.env
$ ENV_FILE=test.env ./docker_run.sh cpputest
```

```bash
container $ cmake ../led_on/ -DCOMPILE_UNIT_TESTS=ON
container $ make
container $ ./bin/test_led_on
```

## libwebsock

Proof of concept

### Container Check

Verify that libwebsock is installed properly:
```bash
$ ldconfig -p | grep sock
$ echo 'int main(void) { return 0; }' > test.c
$ gcc test.c -o test -lwebsock -lssl
```

I've had difficulty with docker's `COPY` and linking.
If I copy just `/usr/local/lib/libwebsock*` files, it doesn't create symlinks;
it copies the entire 64K .so file three times.
I've experimented with installing libwebsock into a custom directory,
but then I need to tell the linker to look here, it seems.
Something like
```bash
gcc test.c -o test -lwebsock -lssl -L/usr/local/lib/websock
```
That's no good. CMake might make things easier, so perhaps it's ok?
**Try this ^**


### Compile ws-echo example

Their autotools won't build the examples, but you can
edit `Makefile.am` after the container is running:

```Dockerfile
# To run the example server, install nano:
RUN apt-get update \
   && apt-get install -y nano \
   && rm -rf /var/lib/apt/lists/*
# Edit libwebsock/examples/Makefile.am:
#   bin_PROGRAMS = ws-echo
# $ ./configure && make
# $ ./examples/ws-echo 8989
```

Then run my websocket client:
```bash
$ firefox web_gui/websocket_client.html
```
Open the console.

This worked.

### Extract ws-echo example

Pull the example into my own C file and compile it myself:
```bash
# Run container
$ docker cp ws_server/ws_echo.c websock:/usr/src
container $ gcc -g -O2 -o ws_echo ws_echo.c -lwebsock
container $ ./ws_echo 8989
```

Then run my websocket client:
```bash
$ firefox web_gui/websocket_client.html
```
This worked, too.



### CMake ws-echo example

```bash
# Start container
$ docker cp ws_server/ websock:/usr/src
container /usr/src $ cd ws_server
container /usr/src/ws_server $ cmake .
container /usr/src/ws_server $ make
container /usr/src/ws_server $ ./ws_echo 8989
$ firefox web_gui/websocket_client.html
```
