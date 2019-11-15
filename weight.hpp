#pragma once
#include <cstdint>
#include <iostream>
#include <ratio>

namespace usu
{
	template<typename T, typename T1 = std::uint64_t>
    class weight
    {
      public:
        T m_ratio = rat;
        T1 m_count = c;
        weight();
        weight(T1 count);
        T1 count();
    };

	template <typename T, typename T1>
    weight<typename T, T1>::weight() :
        m_count(0)
    {
    }

	template<typename T, typename T1>
    weight<typename T, T1>::weight(T1 count):
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

	}

	template<typename T, typename T>
	weight operator+(typename T, typename T1) 
	{
        return 0;
	}


	using microgram = weight(std::ratio<.000001, 1>, 10)
}