rm -r build
mkdir build

c++ -c -I include/ src/subtract.cpp -o build/subtract.o
c++ -c -I include/ src/sum.cpp -o build/sum.o

ar rcs build/libipb_arithmetic.a build/sum.o build/subtract.o

c++ -I include/ src/main.cpp -L build/ -l ipb_arithmetic -o results/main