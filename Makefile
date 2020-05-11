CXX :=g++ -std=c++11 -std=c++14 -pthread
BBS :=src/bubblesort.cpp
BFS :=src/bfs.cpp
BAND :=src/bitwiseand.cpp
CONE :=src/consutiveones.cpp
SNPH :=src/searchnamephone.cpp
LCM :=src/longestcommonseq.cpp
DSP :=src/countdivisiblepair.cpp
LXGS :=src/lexicographgreater.cpp
PWDE :=src/passwordencription.cpp
FNDS :=src/findstring.cpp
FIBC :=src/fibcombination.cpp

OBJ :=build
all:
	rm -rf $(OBJ)
	mkdir build
	$(CXX) $(BBS) -o $(OBJ)/bubblesort
	$(CXX) $(BFS) -o $(OBJ)/bfs
	$(CXX) $(BAND) -o $(OBJ)/bitwiseand
	$(CXX) $(CONE) -o $(OBJ)/consutiveones
	$(CXX) $(SNPH) -o $(OBJ)/searchnamephone
	$(CXX) $(LCM) -o $(OBJ)/longestcommonseq
	$(CXX) $(DSP) -o $(OBJ)/countdivisiblepair
	$(CXX) $(LXGS) -o $(OBJ)/lexicographgreater.cpp
	$(CXX) $(PWDE) -o $(OBJ)/passwordencription
	$(CXX) $(FNDS) -o $(OBJ)/findstring
	$(CXX) $(FIBC) -o $(OBJ)/fibcombination
	
clean:
	rm -rf $(OBJ)
