cls

g++ -o main.o -c main.cpp
g++ -o sculptor.o -c sculptor.cpp
g++ -o programa main.o sculptor.o

programa 


del *.o
del *.exe
