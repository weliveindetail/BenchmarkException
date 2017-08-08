#include "int_bench.h"

#include <benchmark/benchmark.h>

BENCHMARK(BM_NoExcept)->UseManualTime();

BENCHMARK(BM_ThrowInt_SuccessAlways)->UseManualTime();
BENCHMARK(BM_ThrowInt_Success2outOf3)->UseManualTime();
BENCHMARK(BM_ThrowInt_Success1outOf3)->UseManualTime();
BENCHMARK(BM_ThrowInt_SuccessNever)->UseManualTime();

BENCHMARK(BM_ThrowExcept_SuccessAlways)->UseManualTime();
BENCHMARK(BM_ThrowExcept_Success2outOf3)->UseManualTime();
BENCHMARK(BM_ThrowExcept_Success1outOf3)->UseManualTime();
BENCHMARK(BM_ThrowExcept_SuccessNever)->UseManualTime();

int main(int argc, char **argv) {
  ::benchmark::Initialize(&argc, argv);
  ::benchmark::RunSpecifiedBenchmarks();
}
