#pragma once

template<class T1, class T2>
class CombineTemplate {
private:
	T1 _x;
	T2 _y;

public:
	CombineTemplate(T1, T2);
	void Print();
};

template<class T1, class T2>
inline CombineTemplate<T1, T2>::CombineTemplate(T1 x, T2 y) {
	_x = x;
	_y = y;
}

template <class T1, class T2>
inline void CombineTemplate<T1, T2>::Print() {
	std::cout << _x << " " << _y << std::endl;
}