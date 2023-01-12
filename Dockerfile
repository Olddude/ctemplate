# build image
FROM alpine:latest AS build
WORKDIR /app
RUN mkdir -p build
COPY . .
RUN apk add --no-cache build-base cmake git && \
    cd /app/build && \
    cmake .. && \
    make && \
    make install

# run image
FROM alpine:latest AS run
COPY --from=build /app/build/bin/ /bin/
CMD ["/bin/ctemplate-cli"]
