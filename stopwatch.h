#ifndef KUMATARO_INCLUDE_STOPWATCH_H
#define KUMATARO_INCLUDE_STOPWATCH_H

#include <chrono>


namespace kuma
{
	using namespace std;
	using namespace chrono;

	class Stopwatch
	{
		system_clock::time_point startTime;

	public:
		inline Stopwatch()noexcept
		{
			start();
		}
		inline void start()noexcept
		{
			startTime = system_clock::now();
		}
		inline uint64_t spilit_s()const noexcept
		{
			const auto endTime = system_clock::now();
			return static_cast<uint64_t>(duration_cast<seconds>(endTime - startTime).count());
		}
		inline uint64_t spilit_ms()const noexcept
		{
			const auto endTime = system_clock::now();
			return static_cast<uint64_t>(duration_cast<milliseconds>(endTime - startTime).count());
		}
		inline uint64_t spilit_us()const noexcept
		{
			const auto endTime = system_clock::now();
			return static_cast<uint64_t>(duration_cast<microseconds>(endTime - startTime).count());
		}
		inline uint64_t spilit_ns()const noexcept
		{
			const auto endTime = system_clock::now();
			return static_cast<uint64_t>(duration_cast<nanoseconds>(endTime - startTime).count());
		}
	};
}


#endif