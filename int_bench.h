#include <benchmark/benchmark.h>

void BM_NoExcept(benchmark::State &state);

void BM_ThrowInt_SuccessAlways(benchmark::State &state);
void BM_ThrowInt_Success2outOf3(benchmark::State &state);
void BM_ThrowInt_Success1outOf3(benchmark::State &state);
void BM_ThrowInt_SuccessNever(benchmark::State &state);

void BM_ThrowExcept_SuccessAlways(benchmark::State &state);
void BM_ThrowExcept_Success2outOf3(benchmark::State &state);
void BM_ThrowExcept_Success1outOf3(benchmark::State &state);
void BM_ThrowExcept_SuccessNever(benchmark::State &state);
