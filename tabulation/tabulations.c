#define COND1(x) (x) <= -3.0
#define FUNC1(x) (2-abs(x))
#define COND2(X) (x) > -3 && (x) <=3.0
#define FUNC2(x) ((x) > 0 ? (x) * sin(3 * (x)) : 0)
#define FUNC3(X) 2*(x^4)+(x)-3
#define COND3(X) (x) > 3
#define FUNC(x) COND1(x) ? FUNC1(x): (COND2(x) ? FUNC2(x) : FUNC3(x))

#include <math.h>

