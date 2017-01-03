run-test : test/test.cpp src/metadelta.cpp
	clang++ test/test.cpp src/metadelta.cpp && ./a.out && rm ./a.out  
