FROM gcc:latest

WORKDIR /app

COPY . .

RUN g++ SimpleCalc.cpp -o test.exe

CMD ["./test.exe"]