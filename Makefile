CXX :=g++ -std=c++11 -std=c++14 -pthread
BBS :=src/bubblesort.cpp

OBJ :=build
all:
	rm -rf $(OBJ)
	mkdir build
	$(CXX) $(BBS) -o $(OBJ)/bubblesort	
clean:
	rm -rf $(OBJ)

