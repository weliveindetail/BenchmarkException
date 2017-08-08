#include "int_bench.h"
#include "int_utils.h"

#include <chrono>

void BM_NoExcept(benchmark::State &state) {
  using namespace std::chrono;

  while (state.KeepRunning()) {
    auto input = make_input();
    auto S = high_resolution_clock::now();

    int res;
    try {
      res = no_except(input);
    } catch (...) {
    }
    (void)res;

    auto E = high_resolution_clock::now();
    state.SetIterationTime(duration_cast<duration<double>>(E - S).count());
  }
}

// -----------------------------------------------------------------------------

void BM_ThrowInt_SuccessAlways(benchmark::State &state) {
  using namespace std::chrono;

  while (state.KeepRunning()) {
    auto input = make_input();
    auto S = high_resolution_clock::now();

    int res;
    try {
      res = throw_int::success_always(input);
    } catch (...) {
    }
    (void)res;

    auto E = high_resolution_clock::now();
    state.SetIterationTime(duration_cast<duration<double>>(E - S).count());
  }
}

void BM_ThrowInt_Success2outOf3(benchmark::State &state) {
  using namespace std::chrono;

  while (state.KeepRunning()) {
    auto input = make_input();
    auto S = high_resolution_clock::now();

    int res;
    try {
      res = throw_int::success_2outof3(input);
    } catch (...) {
    }
    (void)res;

    auto E = high_resolution_clock::now();
    state.SetIterationTime(duration_cast<duration<double>>(E - S).count());
  }
}

void BM_ThrowInt_Success1outOf3(benchmark::State &state) {
  using namespace std::chrono;

  while (state.KeepRunning()) {
    auto input = make_input();
    auto S = high_resolution_clock::now();

    int res;
    try {
      res = throw_int::success_1outof3(input);
    } catch (...) {
    }
    (void)res;

    auto E = high_resolution_clock::now();
    state.SetIterationTime(duration_cast<duration<double>>(E - S).count());
  }
}

void BM_ThrowInt_SuccessNever(benchmark::State &state) {
  using namespace std::chrono;

  while (state.KeepRunning()) {
    auto input = make_input();
    auto S = high_resolution_clock::now();

    int res;
    try {
      res = throw_int::success_never(input);
    } catch (...) {
    }
    (void)res;

    auto E = high_resolution_clock::now();
    state.SetIterationTime(duration_cast<duration<double>>(E - S).count());
  }
}

// -----------------------------------------------------------------------------

void BM_ThrowExcept_SuccessAlways(benchmark::State &state) {
  using namespace std::chrono;

  while (state.KeepRunning()) {
    auto input = make_input();
    auto S = high_resolution_clock::now();

    int res;
    try {
      res = throw_except::success_always(input);
    } catch (...) {
    }
    (void)res;

    auto E = high_resolution_clock::now();
    state.SetIterationTime(duration_cast<duration<double>>(E - S).count());
  }
}

void BM_ThrowExcept_Success2outOf3(benchmark::State &state) {
  using namespace std::chrono;

  while (state.KeepRunning()) {
    auto input = make_input();
    auto S = high_resolution_clock::now();

    int res;
    try {
      res = throw_except::success_2outof3(input);
    } catch (...) {
    }
    (void)res;

    auto E = high_resolution_clock::now();
    state.SetIterationTime(duration_cast<duration<double>>(E - S).count());
  }
}

void BM_ThrowExcept_Success1outOf3(benchmark::State &state) {
  using namespace std::chrono;

  while (state.KeepRunning()) {
    auto input = make_input();
    auto S = high_resolution_clock::now();

    int res;
    try {
      res = throw_except::success_1outof3(input);
    } catch (...) {
    }
    (void)res;

    auto E = high_resolution_clock::now();
    state.SetIterationTime(duration_cast<duration<double>>(E - S).count());
  }
}

void BM_ThrowExcept_SuccessNever(benchmark::State &state) {
  using namespace std::chrono;

  while (state.KeepRunning()) {
    auto input = make_input();
    auto S = high_resolution_clock::now();

    int res;
    try {
      res = throw_except::success_never(input);
    } catch (...) {
    }
    (void)res;

    auto E = high_resolution_clock::now();
    state.SetIterationTime(duration_cast<duration<double>>(E - S).count());
  }
}
