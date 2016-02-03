all: fizzbuzz.cpp main.cpp
	g++ main.cpp fizzbuzz.cpp -o fizzbuzz

debug: fizzbuzz.cpp main.cpp
	g++ -g main.cpp fizzbuzz.cpp -o fizzbuzz

test: fizzbuzz.cpp test_fizzbuzz.cpp
	g++ fizzbuzz.cpp test_fizzbuzz.cpp -o tests /usr/local/lib/libgtest.a /usr/local/lib/libgtest_main.a /usr/local/lib/libgmock.a /usr/local/lib/libgmock_main.a -lpthread -std=gnu++11
	./tests
