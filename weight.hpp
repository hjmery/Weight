#pragma once
#include <cstdint>
#include <iostream>
#include <ratio>

/*
-------------------------------------------------------------------------------
Next steps
-Finish the type aliases |X|
-Overload the 3 operators 
-Write weight_cast
-Test agains GTests
-------------------------------------------------------------------------------
*/

namespace usu
{
	template<typename T, typename T1 = std::uint64_t>
    class weight
    {
      public:
        T1 m_count;
        weight();
        weight(T1 count);
        T1 count();
    };

	template <typename T, typename T1>
    weight<T, T1>::weight() :
        m_count(0)
    {
    }

	template<typename T, typename T1>
    weight<T, T1>::weight(T1 count):
        m_count(count)
	{
	}

	template <typename T, typename T1>
    T1 weight<T, T1>::count()
    {
        return m_count;
    }

	template<typename T, typename T1>
	T1 weight_cast(T) 
	{
		//T::ratio::num , T::ratio::den
	}

	//weight_cast<gram>(lb);

	template <typename T, typename T1>
    T operator+(T& w1, T1& w2)
    {
        return 0;
    }

	template<typename T, typename T1>
	T operator*(T& weight, double dub) 
	{
        return 0;
	}

	using gram = weight<std::ratio<1, 1>>;
	using microgram = weight<std::ratio<1, 1'000'000>>;
	using kilogram = weight<std::ratio<1'000, 1>>;
	using ounce = weight<std::ratio<35'273, 1'000'000>>;
	using pound = weight<std::ratio<2'204'622, 1'000'000'000>>;
	using ton = weight<std::ratio<1'102'311, 1'000'000'000'000>>;

}