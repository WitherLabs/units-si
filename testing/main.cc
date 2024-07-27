#include <wither/units/acceleration.hh>

#include <iostream>
#include <ostream>

// Uniform acceleration of 18.5 m/s to 46.1m/s over a span of 2.47s

auto
main() -> int
{
    constexpr units::metres_per_second v_i { 18.5 };
    constexpr units::metres_per_second v_f { 46.1 };
    constexpr units::seconds           time { 2.47 };

    constexpr units::metres_per_second_squared acceleration
        = (v_f - v_i) / time;

    constexpr units::metres distance
        = v_i * time + (0.5 * acceleration * time * time);

    std::println(
        std::cout,
        "acceleration = {}ms^2\ndistance = {}m",
        acceleration.get_measurement(),
        distance.get_measurement()
    );

    return 0;
}

