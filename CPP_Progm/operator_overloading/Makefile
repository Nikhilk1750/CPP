CC = g++
CFLAGS=-c
output: Complex.o main1.o main2.o
	$(CC) $^ -o $@

Complex.o:Comple.cpp
	$(CC) $(CFLAGS) $<
main1.o:main1.cpp
	$(CC) $(CFLAGS) $<

main2.o:main2.cpp
	$(CC) $(CFLAGS) $<
clean:
	rm -f output
	rm *.o
