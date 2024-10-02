PROGRAMS=scratch ##gcov_test gcov_evenodd

CXXFLAGS=-std=c++17 -O0 -g -fno-inline -Wall # -Werror -pedantic-errors
LDFLAGS=-std=c++17

## for gcov
CXXFLAGS:=$(CXXFLAGS) -O0 -g -fprofile-arcs -ftest-coverage
LDFLAGS:=$(LDFLAGS) -fprofile-arcs

all: $(PROGRAMS)

$(PROGRAMS): %: %.o
	g++ $(LDFLAGS) $< -o $@

%.o: %.cpp Makefile
	g++ $(CXXFLAGS) -c $< -o $@

clean:
	rm -rf test.log *~ *.o *.dSYM $(PROGRAMS) *.gcda *.gcno *.gcov callgrind.out.*
