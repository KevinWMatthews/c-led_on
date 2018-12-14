FROM gcc:8.2.0 as build_libwebsock

WORKDIR /usr/src
RUN git clone https://github.com/JonnyWhatshisface/libwebsock.git
WORKDIR /usr/src/libwebsock
# This repo has no tags. Use the latest commit (from 2015).
RUN git checkout 69127150f9685bf2a69b8b353375e202f7b240e1
RUN ./autogen.sh
# docs/INSTALL.txt says to use these CFLAGS, but I don't seem to need them.
RUN CFLAGS="-lpthread -levent" ./configure
RUN make
RUN make install
RUN ldconfig


FROM gcc-cmake:8-3.13.1

COPY --from=build_libwebsock /usr/local/include/websock/ /usr/local/include/websock/
# I'd like to copy only libwebsock's .so and .a files, but
# Docker doesn't copy symlinks - copies the entire .so three times.
# Instead, copy the entire lib/ directory
COPY --from=build_libwebsock /usr/local/lib/ /usr/local/lib/
RUN ldconfig
