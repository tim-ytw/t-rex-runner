#ifndef utility_h
#define utility_h

// CPP
#include <stdio.h>
#include <math.h>



inline double displacement(const double speed, const double acceleration, const double time);

inline bool within(double x, double a, double b);

inline int getMin(int a, int b);

inline int getMax(int a, int b);


inline double displacement(const double speed, const double acceleration, const double time)
{
	return speed*time + 0.5*acceleration * pow(time, 2);
}


inline bool within(double x, double a, double b)
{
	return (a <= x && x <= b);
}

inline int getMin(int a, int b)
{
	return (a < b)? a:b;
}

inline int getMax(int a, int b)
{
	return (a > b)? a:b;
}



#endif /* utility_h */
