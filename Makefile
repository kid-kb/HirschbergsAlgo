all:	
	g++ -std=c++11 main.cpp lcs.h lcs.cpp -o project6

clean:
	/bin/rm -rf *.o project6