# BenchmarkException

Benchmarking noexcept vs. throw int vs. throw exception

```
$ ./BenchmarkException 
Run on (4 X 2300 MHz CPU s)
2017-08-08 13:38:41
---------------------------------------------------------------------------------
Benchmark                                          Time           CPU Iterations
---------------------------------------------------------------------------------
BM_NoExcept/manual_time                           58 ns        191 ns   12147403
BM_ThrowInt_SuccessAlways/manual_time             61 ns        195 ns   11004314
BM_ThrowInt_Success2outOf3/manual_time           144 ns        281 ns    5052985
BM_ThrowInt_Success1outOf3/manual_time           341 ns        474 ns    2081722
BM_ThrowInt_SuccessNever/manual_time            1601 ns       1738 ns     453591
BM_ThrowExcept_SuccessAlways/manual_time          62 ns        198 ns   11428496
BM_ThrowExcept_Success2outOf3/manual_time        152 ns        288 ns    4746465
BM_ThrowExcept_Success1outOf3/manual_time        380 ns        519 ns    1953936
BM_ThrowExcept_SuccessNever/manual_time         2309 ns       2437 ns     312931
```
