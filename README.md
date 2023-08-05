# WES 237B Assignment 3

## Part 1
1. On either the PYNQ or Jetson: Try compiling with `-O0`, `-O1`, `-O2`, `-O3`, and `-Ofast` (see a description of what optimizations these map to in the gcc documentation if you are interested). Pick at least three of these optimization levels and use gprof information to make a table that compares the performance of the three `fir_` implementations for each optimization level.

2. Profiling itself has overhead! Your program is doing more work now... Try compiling with and without the `-pg` flag (any optimization level; your choice). Are you able to measure a performance change of the whole `lab3_fir` program with profiling on/off? Why/why not? Think about where profiling overhead comes from given what `gprof` is doing. (You can try using `time` for this, `perf` might give more detail)?

3. Does platform matter? Using the same optimization level, measure and report the performance on the other platform.

## Part 2
1. Explain (very) briefly how you used NEON intrinsics in your optimized Sobel.

2. Use your non-optimized basic Sobel algorithm as your baseline. Following the same techniques from the lab, provide a comparison between your baseline, loop-unrolled, and NEON implementations. You only need to report performance on one platform and one optimization configuration (but tell us which one!).

3. Also compare the performance of your optimized Sobel versus OpenCV's Sobel.

### Extra Credit
Try a different profiling tool. Two ideas (you are welcome to find others):

* pinpoint is an energy profiler, what can you learn about your implementations' energy efficiency?

* `gcov` enables finer-grained, line-by-line profiling. What extra information can you learn about where overhead sits in your implementation?

## Part 3
1. What does the *global* flag mean?
2. Explain the following line of code in terms of threads, blocks, and grids:
```
foo<<4,32>>(out, in1, in2)
```

## What to submit
Prepare a report document with answers for each of the Report Deliverables above.

In addition, commit with your code from each part of this assignment. All code should compile if we simply run `make`.
