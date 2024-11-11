# Jalen Jones
# Makefile
# 11/08/2024

CC = g++  
CFLAGS = -g -Wall -Wextra


default: library

# All the object files needed to create the executable file. For this assignment:
# Book.o, Library.o, main.o

library: Book.o Library.o main.o 
	$(CC) $(CFLAGS) -o library Book.o Library.o main.o

# The rule to create Book.o

Book.o:	Book.cpp Book.h
	$(CC) $(CFLAGS) -c Book.cpp

# The rule to create Library.o

Library.o:	Library.cpp Library.h
	$(CC) $(CFLAGS) -c Library.cpp

# The rule to create main.o

main.o:	main.cpp Book.h Library.h
	$(CC) $(CFLAGS) -c main.cpp

# Now the logic to clean using "make clean"

clean:
	$(RM) library *.o *~
