module;

#include <cstdint>
#include <chrono>

export module stopwatch;

export namespace kuma
{
	using namespace std;

	class Stopwatch
	{
		chrono::system_clock::time_point startTime;

	public:
		inline Stopwatch()noexcept
		{
			start();
		}
		inline void start()noexcept
		{
			startTime = chrono::system_clock::now();
		}
		inline uint64_t spilit_s()const noexcept
		{
			const auto endTime = chrono::system_clock::now();
			return static_cast<uint64_t>(chrono::duration_cast<chrono::seconds>(endTime - startTime).count());
		}
		inline uint64_t spilit_ms()const noexcept
		{
			const auto endTime = chrono::system_clock::now();
			return static_cast<uint64_t>(chrono::duration_cast<chrono::milliseconds>(endTime - startTime).count());
		}
		inline uint64_t spilit_us()const noexcept
		{
			const auto endTime = chrono::system_clock::now();
			return static_cast<uint64_t>(chrono::duration_cast<chrono::microseconds>(endTime - startTime).count());
		}
		inline uint64_t spilit_ns()const noexcept
		{
			const auto endTime = chrono::system_clock::now();
			return static_cast<uint64_t>(chrono::duration_cast<chrono::nanoseconds>(endTime - startTime).count());
		}
	};
}