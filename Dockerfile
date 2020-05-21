FROM ubuntu
RUN mkdir -p /usr/src/test	
RUN apt-get update
RUN apt-get install -y gcc libc-dev make
ENV TEST /usr/src/test
ADD . TEST
WORKDIR TEST
RUN gcc helloworld.c
RUN ls -al
ENTRYPOINT "./a.out"

