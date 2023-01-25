# build image
FROM alpine:latest AS build
WORKDIR /app
COPY . .
RUN ./scripts/install.sh

# run image
FROM alpine:latest AS run
COPY --from=build /app/build/bin/ /bin/
CMD ["/bin/ctemplate"]
