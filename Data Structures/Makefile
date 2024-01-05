GCC = g++

OBJS = ModeMain.o readfile.o mode.o

default: Lab_5

Lab_5: $(OBJS)
	$(GCC) -o Lab_5 $(OBJS)

ModeMain.o: ModeMain.cpp
	$(GCC) -c ModeMain.cpp -o ModeMain.o

readfile.o: readfile.cpp readfile.h
	$(GCC) -c readfile.cpp -o readfile.o

mode.o: mode.cpp mode.h
	$(GCC) -c mode.cpp -o mode.o

clean: 
	rm $(OBJS) Lab_5