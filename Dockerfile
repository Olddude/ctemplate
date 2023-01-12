FROM alpine:latest AS build
WORKDIR /app

RUN mkdir -p build
COPY . .

RUN apk add --no-cache build-base cmake git && \
    cd /app/build && \
    cmake .. && \
    make && \
    make install

FROM alpine:latest AS run
COPY --from=build /app/build/bin/ /bin/pcmd

# Run the application
CMD ["/bin/pcmd"]
