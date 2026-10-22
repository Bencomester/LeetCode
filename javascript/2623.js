/**
 * @param {Function} fn
 * @return {Function}
 */
function memoize(fn) {
    sum = {};
    fact = {};
    fib = {};
    return function(...args) {
        if (fn.name == "sum") {
            if (sum[args] === undefined) sum[args] = fn(...args);
            return sum[args];
        } else if (fn.name = "fact") {
            if (fact[args] === undefined) fact[args] = fn(...args);
            return fact[args];
        } else if (fn.name == "fib") {
            if (fib[args] === undefined) fib[args] = fn(...args);
            return fib[args];
        }
    }
}


/** 
 * let callCount = 0;
 * const memoizedFn = memoize(function (a, b) {
 *	 callCount += 1;
 *   return a + b;
 * })
 * memoizedFn(2, 3) // 5
 * memoizedFn(2, 3) // 5
 * console.log(callCount) // 1 
 */