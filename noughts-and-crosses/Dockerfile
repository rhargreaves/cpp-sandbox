FROM alpine:latest
RUN apk add --no-cache build-base cmake
WORKDIR /app
COPY . /app

RUN ./build-and-test.sh

CMD ["./build/noughts-and-crosses"]
