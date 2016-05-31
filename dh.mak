dh: dh.o
	g++ -o dh dh.o
dh.o: dh.cpp
	g++ -c dh.cpp
clean:
	/bin/rm -f dh dh.o
