CXX?=g++
CXXFLAGS=-O0 -std=c++11 -mfpu=neon -pg
#CXXFLAGS=-Og -g -std=c++11 -mfpu=neon -pg

EXEC=lab3_fir

###
# Setup & config
###

BUILD_DIR := build/

# C++ source files
CXXSRCS := $(wildcard src/*.cxx)

# Create list of objects to build
OBJS := $(CXXSRCS:src/%.cxx=$(BUILD_DIR)%.o)

# Any flags for the C++ compiler?
CXXFLAGS += -Iinclude

# Libraries
LDFLAGS += 

###
# Build rules
###

# Convention, `all` is a phony target that builds everything
# and must be listed first
.PHONY: all
all:	$(EXEC)

# Binary depends on its objects (use default build rules)
$(EXEC): $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(EXEC) $(LDFLAGS)

$(BUILD_DIR)%.o: src/%.cxx
	$(CXX) $(CXXFLAGS) -c $< -o $@

###
# Convenience targets
###

.PHONY: clean
clean:
	rm -rf build/*
	rm -f $(BIN)
