SHELL := /bin/bash

CC = g++
RM = rm -rf
ZIP = zip

SRCDIR = src/
INCDIR = include/
BINDIR = bin/

TESTS = $(SRCDIR)test-maze.cc $(SRCDIR)testbase.cc
CODEZIP = code.zip

EXERCISE = $(TESTS) $(SRCDIR)maze.cc
EXE_OUT = $(BINDIR)test-maze
CORRECT = $(TESTS) $(SRCDIR)maze-correct.cc
COR_OUT = $(BINDIR)correct-maze
INCLUDES = $(INCDIR)
FLAGS = -Wall -std=c++14

all: exercise

exercise: $(EXE_OUT)
correct: $(COR_OUT)

$(EXE_OUT): $(EXERCISE)
	$(CC) $(FLAGS) -I $(INCLUDES) $(EXERCISE) -o $@

$(COR_OUT): $(CORRECT)
	$(CC) $(FLAGS) -I $(INCLUDES) $(CORRECT) -o $@

clean:
	$(RM) $(BINDIR)* $(SRCDIR)*~ $(INCDIR)*~ $(CODEZIP)

handout:
	$(ZIP) -r $(CODEZIP) $(INCDIR)* $(BINDIR) \
		$(SRCDIR)maze.cc $(SRCDIR)test*.cc Makefile

