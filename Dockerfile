FROM alpine:latest

RUN apk add --no-cache g++ curl make

WORKDIR /app


COPY main.cpp .
COPY httplib.h .

RUN g++ main.cpp -o myserver -pthread

EXPOSE 8080

CMD ["./myserver"]