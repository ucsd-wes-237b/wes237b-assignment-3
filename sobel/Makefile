CXX?=g++
CXXFLAGS=-O1 -ftree-vectorize -std=c++11

EXEC=hw3

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
LDFLAGS += -lopencv_core -lopencv_highgui -lopencv_imgproc -lopencv_imgcodecs -lopencv_videoio

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
