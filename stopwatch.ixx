module;

#include <cstdint>
#include <chrono>

export module stopwatch;

export namespace stopwatch
{
	using uint64_t = std::uint64_t;

	class Stopwatch
	{
		std::chrono::system_clock::time_point startTime;

	public:
		Stopwatch()noexcept
		{
			start();
		}
		void start()noexcept
		{
			startTime = std::chrono::system_clock::now();
		}
		uint64_t spilit_s()const noexcept
		{
			const auto endTime = std::chrono::system_clock::now();
			return static_cast<uint64_t>(std::chrono::duration_cast<std::chrono::seconds>(endTime - startTime).count());
		}
		uint64_t spilit_ms()const noexcept
		{
			const auto endTime = std::chrono::system_clock::now();
			return static_cast<uint64_t>(std::chrono::duration_cast<std::chrono::milliseconds>(endTime - startTime).count());
		}
		uint64_t spilit_us()const noexcept
		{
			const auto endTime = std::chrono::system_clock::now();
			return static_cast<uint64_t>(std::chrono::duration_cast<std::chrono::microseconds>(endTime - startTime).count());
		}
		uint64_t spilit_ns()const noexcept
		{
			const auto endTime = std::chrono::system_clock::now();
			return static_cast<uint64_t>(std::chrono::duration_cast<std::chrono::nanoseconds>(endTime - startTime).count());
		}
	};
}