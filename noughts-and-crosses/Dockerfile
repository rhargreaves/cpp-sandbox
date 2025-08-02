FROM ubuntu:24.04

RUN apt-get update && \
    apt-get install -y build-essential cmake && \
    rm -rf /var/lib/apt/lists/*

WORKDIR /app
COPY . /app

RUN cmake -S . -B build && \
    cmake --build build

CMD ["./build/noughts_and_crosses"]
