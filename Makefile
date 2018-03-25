A: A.o                                                   
	g++ A.o -o A
A.o: A.cpp a.h
	g++ -c A.cpp
clean:
	rm A *.o
