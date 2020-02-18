/* This file was generated by etc/gen-rounded-avx512.sh. */

//
// double
//

static inline ALWAYS_INLINE
double rounded_add_impl_double(native_rounding_mode mode, double a, double b)
{
    __m128d av = _mm_set_sd(a);
    __m128d bv = _mm_set_sd(b);
    __m128d resultv;
    switch (mode) {
    case ROUND_TONEAREST:
        resultv = _mm_add_round_sd(av, bv, _MM_FROUND_TO_NEAREST_INT | _MM_FROUND_NO_EXC);
        break;
    case ROUND_DOWNWARD:
        resultv = _mm_add_round_sd(av, bv, _MM_FROUND_TO_NEG_INF | _MM_FROUND_NO_EXC);
        break;
    case ROUND_UPWARD:
        resultv = _mm_add_round_sd(av, bv, _MM_FROUND_TO_POS_INF | _MM_FROUND_NO_EXC);
        break;
    case ROUND_TOWARDZERO:
        resultv = _mm_add_round_sd(av, bv, _MM_FROUND_TO_ZERO | _MM_FROUND_NO_EXC);
        break;
    default:
        UNREACHABLE();
        abort();
    }
    double result;
    _mm_store_sd(&result, resultv);
    return result;
}
extern double rounded_hw_add_double(HsInt mode, double a, double b)
{ return rounded_add_impl_double(hs_rounding_mode_to_native(mode), a, b); }
extern double rounded_hw_add_double_up(double a, double b)
{ return rounded_add_impl_double(ROUND_UPWARD, a, b); }
extern double rounded_hw_add_double_down(double a, double b)
{ return rounded_add_impl_double(ROUND_DOWNWARD, a, b); }
extern double rounded_hw_add_double_zero(double a, double b)
{ return rounded_add_impl_double(ROUND_TOWARDZERO, a, b); }

static inline ALWAYS_INLINE
double rounded_sub_impl_double(native_rounding_mode mode, double a, double b)
{
    __m128d av = _mm_set_sd(a);
    __m128d bv = _mm_set_sd(b);
    __m128d resultv;
    switch (mode) {
    case ROUND_TONEAREST:
        resultv = _mm_sub_round_sd(av, bv, _MM_FROUND_TO_NEAREST_INT | _MM_FROUND_NO_EXC);
        break;
    case ROUND_DOWNWARD:
        resultv = _mm_sub_round_sd(av, bv, _MM_FROUND_TO_NEG_INF | _MM_FROUND_NO_EXC);
        break;
    case ROUND_UPWARD:
        resultv = _mm_sub_round_sd(av, bv, _MM_FROUND_TO_POS_INF | _MM_FROUND_NO_EXC);
        break;
    case ROUND_TOWARDZERO:
        resultv = _mm_sub_round_sd(av, bv, _MM_FROUND_TO_ZERO | _MM_FROUND_NO_EXC);
        break;
    default:
        UNREACHABLE();
        abort();
    }
    double result;
    _mm_store_sd(&result, resultv);
    return result;
}
extern double rounded_hw_sub_double(HsInt mode, double a, double b)
{ return rounded_sub_impl_double(hs_rounding_mode_to_native(mode), a, b); }
extern double rounded_hw_sub_double_up(double a, double b)
{ return rounded_sub_impl_double(ROUND_UPWARD, a, b); }
extern double rounded_hw_sub_double_down(double a, double b)
{ return rounded_sub_impl_double(ROUND_DOWNWARD, a, b); }
extern double rounded_hw_sub_double_zero(double a, double b)
{ return rounded_sub_impl_double(ROUND_TOWARDZERO, a, b); }

static inline ALWAYS_INLINE
double rounded_mul_impl_double(native_rounding_mode mode, double a, double b)
{
    __m128d av = _mm_set_sd(a);
    __m128d bv = _mm_set_sd(b);
    __m128d resultv;
    switch (mode) {
    case ROUND_TONEAREST:
        resultv = _mm_mul_round_sd(av, bv, _MM_FROUND_TO_NEAREST_INT | _MM_FROUND_NO_EXC);
        break;
    case ROUND_DOWNWARD:
        resultv = _mm_mul_round_sd(av, bv, _MM_FROUND_TO_NEG_INF | _MM_FROUND_NO_EXC);
        break;
    case ROUND_UPWARD:
        resultv = _mm_mul_round_sd(av, bv, _MM_FROUND_TO_POS_INF | _MM_FROUND_NO_EXC);
        break;
    case ROUND_TOWARDZERO:
        resultv = _mm_mul_round_sd(av, bv, _MM_FROUND_TO_ZERO | _MM_FROUND_NO_EXC);
        break;
    default:
        UNREACHABLE();
        abort();
    }
    double result;
    _mm_store_sd(&result, resultv);
    return result;
}
extern double rounded_hw_mul_double(HsInt mode, double a, double b)
{ return rounded_mul_impl_double(hs_rounding_mode_to_native(mode), a, b); }
extern double rounded_hw_mul_double_up(double a, double b)
{ return rounded_mul_impl_double(ROUND_UPWARD, a, b); }
extern double rounded_hw_mul_double_down(double a, double b)
{ return rounded_mul_impl_double(ROUND_DOWNWARD, a, b); }
extern double rounded_hw_mul_double_zero(double a, double b)
{ return rounded_mul_impl_double(ROUND_TOWARDZERO, a, b); }

static inline ALWAYS_INLINE
double rounded_div_impl_double(native_rounding_mode mode, double a, double b)
{
    __m128d av = _mm_set_sd(a);
    __m128d bv = _mm_set_sd(b);
    __m128d resultv;
    switch (mode) {
    case ROUND_TONEAREST:
        resultv = _mm_div_round_sd(av, bv, _MM_FROUND_TO_NEAREST_INT | _MM_FROUND_NO_EXC);
        break;
    case ROUND_DOWNWARD:
        resultv = _mm_div_round_sd(av, bv, _MM_FROUND_TO_NEG_INF | _MM_FROUND_NO_EXC);
        break;
    case ROUND_UPWARD:
        resultv = _mm_div_round_sd(av, bv, _MM_FROUND_TO_POS_INF | _MM_FROUND_NO_EXC);
        break;
    case ROUND_TOWARDZERO:
        resultv = _mm_div_round_sd(av, bv, _MM_FROUND_TO_ZERO | _MM_FROUND_NO_EXC);
        break;
    default:
        UNREACHABLE();
        abort();
    }
    double result;
    _mm_store_sd(&result, resultv);
    return result;
}
extern double rounded_hw_div_double(HsInt mode, double a, double b)
{ return rounded_div_impl_double(hs_rounding_mode_to_native(mode), a, b); }
extern double rounded_hw_div_double_up(double a, double b)
{ return rounded_div_impl_double(ROUND_UPWARD, a, b); }
extern double rounded_hw_div_double_down(double a, double b)
{ return rounded_div_impl_double(ROUND_DOWNWARD, a, b); }
extern double rounded_hw_div_double_zero(double a, double b)
{ return rounded_div_impl_double(ROUND_TOWARDZERO, a, b); }

static inline ALWAYS_INLINE
double rounded_sqrt_impl_double(native_rounding_mode mode, double a)
{
    __m128d av = _mm_set_sd(a);
    __m128d resultv;
    switch (mode) {
    case ROUND_TONEAREST:
        resultv = _mm_sqrt_round_sd(av, av, _MM_FROUND_TO_NEAREST_INT | _MM_FROUND_NO_EXC);
        break;
    case ROUND_DOWNWARD:
        resultv = _mm_sqrt_round_sd(av, av, _MM_FROUND_TO_NEG_INF | _MM_FROUND_NO_EXC);
        break;
    case ROUND_UPWARD:
        resultv = _mm_sqrt_round_sd(av, av, _MM_FROUND_TO_POS_INF | _MM_FROUND_NO_EXC);
        break;
    case ROUND_TOWARDZERO:
        resultv = _mm_sqrt_round_sd(av, av, _MM_FROUND_TO_ZERO | _MM_FROUND_NO_EXC);
        break;
    default:
        UNREACHABLE();
        abort();
    }
    double result;
    _mm_store_sd(&result, resultv);
    return result;
}
extern double rounded_hw_sqrt_double(HsInt mode, double a)
{ return rounded_sqrt_impl_double(hs_rounding_mode_to_native(mode), a); }
extern double rounded_hw_sqrt_double_up(double a)
{ return rounded_sqrt_impl_double(ROUND_UPWARD, a); }
extern double rounded_hw_sqrt_double_down(double a)
{ return rounded_sqrt_impl_double(ROUND_DOWNWARD, a); }
extern double rounded_hw_sqrt_double_zero(double a)
{ return rounded_sqrt_impl_double(ROUND_TOWARDZERO, a); }

static inline ALWAYS_INLINE
double rounded_fma_impl_double(native_rounding_mode mode, double a, double b, double c)
{
    __m128d av = _mm_set_sd(a);
    __m128d bv = _mm_set_sd(b);
    __m128d cv = _mm_set_sd(c);
    __m128d resultv;
    switch (mode) {
    case ROUND_TONEAREST:
        resultv = _mm_fmadd_round_sd(av, bv, cv, _MM_FROUND_TO_NEAREST_INT | _MM_FROUND_NO_EXC);
        break;
    case ROUND_DOWNWARD:
        resultv = _mm_fmadd_round_sd(av, bv, cv, _MM_FROUND_TO_NEG_INF | _MM_FROUND_NO_EXC);
        break;
    case ROUND_UPWARD:
        resultv = _mm_fmadd_round_sd(av, bv, cv, _MM_FROUND_TO_POS_INF | _MM_FROUND_NO_EXC);
        break;
    case ROUND_TOWARDZERO:
        resultv = _mm_fmadd_round_sd(av, bv, cv, _MM_FROUND_TO_ZERO | _MM_FROUND_NO_EXC);
        break;
    default:
        UNREACHABLE();
        abort();
    }
    double result;
    _mm_store_sd(&result, resultv);
    return result;
}
extern double rounded_hw_fma_double(HsInt mode, double a, double b, double c)
{ return rounded_fma_impl_double(hs_rounding_mode_to_native(mode), a, b, c); }
extern double rounded_hw_fma_double_up(double a, double b, double c)
{ return rounded_fma_impl_double(ROUND_UPWARD, a, b, c); }
extern double rounded_hw_fma_double_down(double a, double b, double c)
{ return rounded_fma_impl_double(ROUND_DOWNWARD, a, b, c); }
extern double rounded_hw_fma_double_zero(double a, double b, double c)
{ return rounded_fma_impl_double(ROUND_TOWARDZERO, a, b, c); }

extern double rounded_hw_fma_if_fast_double(HsInt mode, double a, double b, double c)
{ return rounded_fma_impl_double(hs_rounding_mode_to_native(mode), a, b, c); }
extern double rounded_hw_fma_if_fast_double_up(double a, double b, double c)
{ return rounded_fma_impl_double(ROUND_UPWARD, a, b, c); }
extern double rounded_hw_fma_if_fast_double_down(double a, double b, double c)
{ return rounded_fma_impl_double(ROUND_DOWNWARD, a, b, c); }
extern double rounded_hw_fma_if_fast_double_zero(double a, double b, double c)
{ return rounded_fma_impl_double(ROUND_TOWARDZERO, a, b, c); }

//
// Conversion
//

static inline double rounded_int64_to_double_impl(native_rounding_mode mode, int64_t x)
{
    __m128d resultv = _mm_set_sd(0.0);
    switch (mode) {
    case ROUND_TONEAREST:
        resultv = _mm_cvt_roundi64_sd(resultv, x, _MM_FROUND_TO_NEAREST_INT | _MM_FROUND_NO_EXC);
        break;
    case ROUND_DOWNWARD:
        resultv = _mm_cvt_roundi64_sd(resultv, x, _MM_FROUND_TO_NEG_INF | _MM_FROUND_NO_EXC);
        break;
    case ROUND_UPWARD:
        resultv = _mm_cvt_roundi64_sd(resultv, x, _MM_FROUND_TO_POS_INF | _MM_FROUND_NO_EXC);
        break;
    case ROUND_TOWARDZERO:
        resultv = _mm_cvt_roundi64_sd(resultv, x, _MM_FROUND_TO_ZERO | _MM_FROUND_NO_EXC);
        break;
    default:
        UNREACHABLE();
        abort();
    }
    double result;
    _mm_store_sd(&result, resultv);
    return result;
}
extern double rounded_hw_int64_to_double(HsInt mode, int64_t x)
{ return rounded_int64_to_double_impl(hs_rounding_mode_to_native(mode), x); }
extern double rounded_hw_int64_to_double_up(int64_t x)
{ return rounded_int64_to_double_impl(ROUND_UPWARD, x); }
extern double rounded_hw_int64_to_double_down(int64_t x)
{ return rounded_int64_to_double_impl(ROUND_DOWNWARD, x); }
extern double rounded_hw_int64_to_double_zero(int64_t x)
{ return rounded_int64_to_double_impl(ROUND_TOWARDZERO, x); }

static inline double rounded_word64_to_double_impl(native_rounding_mode mode, uint64_t x)
{
    __m128d resultv = _mm_set_sd(0.0);
    switch (mode) {
    case ROUND_TONEAREST:
        resultv = _mm_cvt_roundu64_sd(resultv, x, _MM_FROUND_TO_NEAREST_INT | _MM_FROUND_NO_EXC);
        break;
    case ROUND_DOWNWARD:
        resultv = _mm_cvt_roundu64_sd(resultv, x, _MM_FROUND_TO_NEG_INF | _MM_FROUND_NO_EXC);
        break;
    case ROUND_UPWARD:
        resultv = _mm_cvt_roundu64_sd(resultv, x, _MM_FROUND_TO_POS_INF | _MM_FROUND_NO_EXC);
        break;
    case ROUND_TOWARDZERO:
        resultv = _mm_cvt_roundu64_sd(resultv, x, _MM_FROUND_TO_ZERO | _MM_FROUND_NO_EXC);
        break;
    default:
        UNREACHABLE();
        abort();
    }
    double result;
    _mm_store_sd(&result, resultv);
    return result;
}
extern double rounded_hw_word64_to_double(HsInt mode, uint64_t x)
{ return rounded_word64_to_double_impl(hs_rounding_mode_to_native(mode), x); }
extern double rounded_hw_word64_to_double_up(uint64_t x)
{ return rounded_word64_to_double_impl(ROUND_UPWARD, x); }
extern double rounded_hw_word64_to_double_down(uint64_t x)
{ return rounded_word64_to_double_impl(ROUND_DOWNWARD, x); }
extern double rounded_hw_word64_to_double_zero(uint64_t x)
{ return rounded_word64_to_double_impl(ROUND_TOWARDZERO, x); }

//
// Interval arithmetic
//

static inline double fast_fmax_double(double x, double y)
{
    // should compile to MAX[SP][SD] instruction on x86
    return x > y ? x : y;
}
static inline double fast_fmax4_double(double x, double y, double z, double w)
{
    return fast_fmax_double(fast_fmax_double(x, y), fast_fmax_double(z, w));
}
static inline double fast_fmin_double(double x, double y)
{
    // should compile to MIN[SP][SD] instruction on x86
    return x < y ? x : y;
}
static inline double fast_fmin4_double(double x, double y, double z, double w)
{
    return fast_fmin_double(fast_fmin_double(x, y), fast_fmin_double(z, w));
}

extern double rounded_hw_interval_mul_double_up(double lo1, double hi1, double lo2, double hi2)
{
    double x = rounded_mul_impl_double(ROUND_UPWARD, lo1, lo2);
    double y = rounded_mul_impl_double(ROUND_UPWARD, lo1, hi2);
    double z = rounded_mul_impl_double(ROUND_UPWARD, hi1, lo2);
    double w = rounded_mul_impl_double(ROUND_UPWARD, hi1, hi2);
    if (isnan(x)) x = 0.0; /* 0 * inf -> 0 */
    if (isnan(y)) y = 0.0; /* 0 * inf -> 0 */
    if (isnan(z)) z = 0.0; /* 0 * inf -> 0 */
    if (isnan(w)) w = 0.0; /* 0 * inf -> 0 */
    return fast_fmax4_double(x, y, z, w);
}

extern double rounded_hw_interval_mul_double_down(double lo1, double hi1, double lo2, double hi2)
{
    double x = rounded_mul_impl_double(ROUND_DOWNWARD, lo1, lo2);
    double y = rounded_mul_impl_double(ROUND_DOWNWARD, lo1, hi2);
    double z = rounded_mul_impl_double(ROUND_DOWNWARD, hi1, lo2);
    double w = rounded_mul_impl_double(ROUND_DOWNWARD, hi1, hi2);
    if (isnan(x)) x = 0.0; /* 0 * inf -> 0 */
    if (isnan(y)) y = 0.0; /* 0 * inf -> 0 */
    if (isnan(z)) z = 0.0; /* 0 * inf -> 0 */
    if (isnan(w)) w = 0.0; /* 0 * inf -> 0 */
    return fast_fmin4_double(x, y, z, w);
}

extern double rounded_hw_interval_mul_add_double_up(double lo1, double hi1, double lo2, double hi2, double hi3)
{
    double x = rounded_mul_impl_double(ROUND_UPWARD, lo1, lo2);
    double y = rounded_mul_impl_double(ROUND_UPWARD, lo1, hi2);
    double z = rounded_mul_impl_double(ROUND_UPWARD, hi1, lo2);
    double w = rounded_mul_impl_double(ROUND_UPWARD, hi1, hi2);
    if (isnan(x)) x = 0.0; /* 0 * inf -> 0 */
    if (isnan(y)) y = 0.0; /* 0 * inf -> 0 */
    if (isnan(z)) z = 0.0; /* 0 * inf -> 0 */
    if (isnan(w)) w = 0.0; /* 0 * inf -> 0 */
    double p = fast_fmax4_double(x, y, z, w);
    return rounded_add_impl_double(ROUND_UPWARD, p, hi3);
}

extern double rounded_hw_interval_mul_add_double_down(double lo1, double hi1, double lo2, double hi2, double lo3)
{
    double x = rounded_mul_impl_double(ROUND_DOWNWARD, lo1, lo2);
    double y = rounded_mul_impl_double(ROUND_DOWNWARD, lo1, hi2);
    double z = rounded_mul_impl_double(ROUND_DOWNWARD, hi1, lo2);
    double w = rounded_mul_impl_double(ROUND_DOWNWARD, hi1, hi2);
    if (isnan(x)) x = 0.0; /* 0 * inf -> 0 */
    if (isnan(y)) y = 0.0; /* 0 * inf -> 0 */
    if (isnan(z)) z = 0.0; /* 0 * inf -> 0 */
    if (isnan(w)) w = 0.0; /* 0 * inf -> 0 */
    double p = fast_fmin4_double(x, y, z, w);
    return rounded_add_impl_double(ROUND_DOWNWARD, p, lo3);
}

extern double rounded_hw_interval_div_double_up(double lo1, double hi1, double lo2, double hi2)
{
    double x = rounded_div_impl_double(ROUND_UPWARD, lo1, lo2);
    double y = rounded_div_impl_double(ROUND_UPWARD, lo1, hi2);
    double z = rounded_div_impl_double(ROUND_UPWARD, hi1, lo2);
    double w = rounded_div_impl_double(ROUND_UPWARD, hi1, hi2);
    if (isnan(x)) x = 0.0; /* 0 / 0, +-inf / +-inf -> 0 */
    if (isnan(y)) y = 0.0; /* 0 / 0, +-inf / +-inf -> 0 */
    if (isnan(z)) z = 0.0; /* 0 / 0, +-inf / +-inf -> 0 */
    if (isnan(w)) w = 0.0; /* 0 / 0, +-inf / +-inf -> 0 */
    return fast_fmax4_double(x, y, z, w);
}

extern double rounded_hw_interval_div_double_down(double lo1, double hi1, double lo2, double hi2)
{
    double x = rounded_div_impl_double(ROUND_DOWNWARD, lo1, lo2);
    double y = rounded_div_impl_double(ROUND_DOWNWARD, lo1, hi2);
    double z = rounded_div_impl_double(ROUND_DOWNWARD, hi1, lo2);
    double w = rounded_div_impl_double(ROUND_DOWNWARD, hi1, hi2);
    if (isnan(x)) x = 0.0; /* 0 / 0, +-inf / +-inf -> 0 */
    if (isnan(y)) y = 0.0; /* 0 / 0, +-inf / +-inf -> 0 */
    if (isnan(z)) z = 0.0; /* 0 / 0, +-inf / +-inf -> 0 */
    if (isnan(w)) w = 0.0; /* 0 / 0, +-inf / +-inf -> 0 */
    return fast_fmin4_double(x, y, z, w);
}

extern double rounded_hw_interval_div_add_double_up(double lo1, double hi1, double lo2, double hi2, double hi3)
{
    double x = rounded_div_impl_double(ROUND_UPWARD, lo1, lo2);
    double y = rounded_div_impl_double(ROUND_UPWARD, lo1, hi2);
    double z = rounded_div_impl_double(ROUND_UPWARD, hi1, lo2);
    double w = rounded_div_impl_double(ROUND_UPWARD, hi1, hi2);
    if (isnan(x)) x = 0.0; /* 0 / 0, +-inf / +-inf -> 0 */
    if (isnan(y)) y = 0.0; /* 0 / 0, +-inf / +-inf -> 0 */
    if (isnan(z)) z = 0.0; /* 0 / 0, +-inf / +-inf -> 0 */
    if (isnan(w)) w = 0.0; /* 0 / 0, +-inf / +-inf -> 0 */
    double p = fast_fmax4_double(x, y, z, w);
    return rounded_add_impl_double(ROUND_UPWARD, p, hi3);
}

extern double rounded_hw_interval_div_add_double_down(double lo1, double hi1, double lo2, double hi2, double lo3)
{
    double x = rounded_div_impl_double(ROUND_DOWNWARD, lo1, lo2);
    double y = rounded_div_impl_double(ROUND_DOWNWARD, lo1, hi2);
    double z = rounded_div_impl_double(ROUND_DOWNWARD, hi1, lo2);
    double w = rounded_div_impl_double(ROUND_DOWNWARD, hi1, hi2);
    if (isnan(x)) x = 0.0; /* 0 / 0, +-inf / +-inf -> 0 */
    if (isnan(y)) y = 0.0; /* 0 / 0, +-inf / +-inf -> 0 */
    if (isnan(z)) z = 0.0; /* 0 / 0, +-inf / +-inf -> 0 */
    if (isnan(w)) w = 0.0; /* 0 / 0, +-inf / +-inf -> 0 */
    double p = fast_fmin4_double(x, y, z, w);
    return rounded_add_impl_double(ROUND_DOWNWARD, p, lo3);
}

//
// Summation
//

static inline double rounded_sum_impl_double(native_rounding_mode mode, HsInt offset, HsInt length, const double *a)
{
    double s = 0.0;
    for (HsInt i = 0; i < length; ++i) {
        s = rounded_add_impl_double(mode, s, a[offset + i]);
    }
    return s;
}
static double rounded_hw_sum_double_nearest(HsInt offset, HsInt length, const double *a)
{ return rounded_sum_impl_double(ROUND_TONEAREST, offset, length, a); }
extern double rounded_hw_sum_double_up(HsInt offset, HsInt length, const double *a)
{ return rounded_sum_impl_double(ROUND_UPWARD, offset, length, a); }
extern double rounded_hw_sum_double_down(HsInt offset, HsInt length, const double *a)
{ return rounded_sum_impl_double(ROUND_DOWNWARD, offset, length, a); }
extern double rounded_hw_sum_double_zero(HsInt offset, HsInt length, const double *a)
{ return rounded_sum_impl_double(ROUND_TOWARDZERO, offset, length, a); }
extern double rounded_hw_sum_double(HsInt mode, HsInt offset, HsInt length, const double *a)
{
    switch (hs_rounding_mode_to_native(mode)) {
    case ROUND_TONEAREST:
        return rounded_hw_sum_double_nearest(offset, length, a);
    case ROUND_UPWARD:
        return rounded_hw_sum_double_up(offset, length, a);
    case ROUND_DOWNWARD:
        return rounded_hw_sum_double_down(offset, length, a);
    case ROUND_TOWARDZERO:
        return rounded_hw_sum_double_zero(offset, length, a);
    default:
        UNREACHABLE();
        abort();
    }
}

//
// float
//

static inline ALWAYS_INLINE
float rounded_add_impl_float(native_rounding_mode mode, float a, float b)
{
    __m128 av = _mm_set_ss(a);
    __m128 bv = _mm_set_ss(b);
    __m128 resultv;
    switch (mode) {
    case ROUND_TONEAREST:
        resultv = _mm_add_round_ss(av, bv, _MM_FROUND_TO_NEAREST_INT | _MM_FROUND_NO_EXC);
        break;
    case ROUND_DOWNWARD:
        resultv = _mm_add_round_ss(av, bv, _MM_FROUND_TO_NEG_INF | _MM_FROUND_NO_EXC);
        break;
    case ROUND_UPWARD:
        resultv = _mm_add_round_ss(av, bv, _MM_FROUND_TO_POS_INF | _MM_FROUND_NO_EXC);
        break;
    case ROUND_TOWARDZERO:
        resultv = _mm_add_round_ss(av, bv, _MM_FROUND_TO_ZERO | _MM_FROUND_NO_EXC);
        break;
    default:
        UNREACHABLE();
        abort();
    }
    float result;
    _mm_store_ss(&result, resultv);
    return result;
}
extern float rounded_hw_add_float(HsInt mode, float a, float b)
{ return rounded_add_impl_float(hs_rounding_mode_to_native(mode), a, b); }
extern float rounded_hw_add_float_up(float a, float b)
{ return rounded_add_impl_float(ROUND_UPWARD, a, b); }
extern float rounded_hw_add_float_down(float a, float b)
{ return rounded_add_impl_float(ROUND_DOWNWARD, a, b); }
extern float rounded_hw_add_float_zero(float a, float b)
{ return rounded_add_impl_float(ROUND_TOWARDZERO, a, b); }

static inline ALWAYS_INLINE
float rounded_sub_impl_float(native_rounding_mode mode, float a, float b)
{
    __m128 av = _mm_set_ss(a);
    __m128 bv = _mm_set_ss(b);
    __m128 resultv;
    switch (mode) {
    case ROUND_TONEAREST:
        resultv = _mm_sub_round_ss(av, bv, _MM_FROUND_TO_NEAREST_INT | _MM_FROUND_NO_EXC);
        break;
    case ROUND_DOWNWARD:
        resultv = _mm_sub_round_ss(av, bv, _MM_FROUND_TO_NEG_INF | _MM_FROUND_NO_EXC);
        break;
    case ROUND_UPWARD:
        resultv = _mm_sub_round_ss(av, bv, _MM_FROUND_TO_POS_INF | _MM_FROUND_NO_EXC);
        break;
    case ROUND_TOWARDZERO:
        resultv = _mm_sub_round_ss(av, bv, _MM_FROUND_TO_ZERO | _MM_FROUND_NO_EXC);
        break;
    default:
        UNREACHABLE();
        abort();
    }
    float result;
    _mm_store_ss(&result, resultv);
    return result;
}
extern float rounded_hw_sub_float(HsInt mode, float a, float b)
{ return rounded_sub_impl_float(hs_rounding_mode_to_native(mode), a, b); }
extern float rounded_hw_sub_float_up(float a, float b)
{ return rounded_sub_impl_float(ROUND_UPWARD, a, b); }
extern float rounded_hw_sub_float_down(float a, float b)
{ return rounded_sub_impl_float(ROUND_DOWNWARD, a, b); }
extern float rounded_hw_sub_float_zero(float a, float b)
{ return rounded_sub_impl_float(ROUND_TOWARDZERO, a, b); }

static inline ALWAYS_INLINE
float rounded_mul_impl_float(native_rounding_mode mode, float a, float b)
{
    __m128 av = _mm_set_ss(a);
    __m128 bv = _mm_set_ss(b);
    __m128 resultv;
    switch (mode) {
    case ROUND_TONEAREST:
        resultv = _mm_mul_round_ss(av, bv, _MM_FROUND_TO_NEAREST_INT | _MM_FROUND_NO_EXC);
        break;
    case ROUND_DOWNWARD:
        resultv = _mm_mul_round_ss(av, bv, _MM_FROUND_TO_NEG_INF | _MM_FROUND_NO_EXC);
        break;
    case ROUND_UPWARD:
        resultv = _mm_mul_round_ss(av, bv, _MM_FROUND_TO_POS_INF | _MM_FROUND_NO_EXC);
        break;
    case ROUND_TOWARDZERO:
        resultv = _mm_mul_round_ss(av, bv, _MM_FROUND_TO_ZERO | _MM_FROUND_NO_EXC);
        break;
    default:
        UNREACHABLE();
        abort();
    }
    float result;
    _mm_store_ss(&result, resultv);
    return result;
}
extern float rounded_hw_mul_float(HsInt mode, float a, float b)
{ return rounded_mul_impl_float(hs_rounding_mode_to_native(mode), a, b); }
extern float rounded_hw_mul_float_up(float a, float b)
{ return rounded_mul_impl_float(ROUND_UPWARD, a, b); }
extern float rounded_hw_mul_float_down(float a, float b)
{ return rounded_mul_impl_float(ROUND_DOWNWARD, a, b); }
extern float rounded_hw_mul_float_zero(float a, float b)
{ return rounded_mul_impl_float(ROUND_TOWARDZERO, a, b); }

static inline ALWAYS_INLINE
float rounded_div_impl_float(native_rounding_mode mode, float a, float b)
{
    __m128 av = _mm_set_ss(a);
    __m128 bv = _mm_set_ss(b);
    __m128 resultv;
    switch (mode) {
    case ROUND_TONEAREST:
        resultv = _mm_div_round_ss(av, bv, _MM_FROUND_TO_NEAREST_INT | _MM_FROUND_NO_EXC);
        break;
    case ROUND_DOWNWARD:
        resultv = _mm_div_round_ss(av, bv, _MM_FROUND_TO_NEG_INF | _MM_FROUND_NO_EXC);
        break;
    case ROUND_UPWARD:
        resultv = _mm_div_round_ss(av, bv, _MM_FROUND_TO_POS_INF | _MM_FROUND_NO_EXC);
        break;
    case ROUND_TOWARDZERO:
        resultv = _mm_div_round_ss(av, bv, _MM_FROUND_TO_ZERO | _MM_FROUND_NO_EXC);
        break;
    default:
        UNREACHABLE();
        abort();
    }
    float result;
    _mm_store_ss(&result, resultv);
    return result;
}
extern float rounded_hw_div_float(HsInt mode, float a, float b)
{ return rounded_div_impl_float(hs_rounding_mode_to_native(mode), a, b); }
extern float rounded_hw_div_float_up(float a, float b)
{ return rounded_div_impl_float(ROUND_UPWARD, a, b); }
extern float rounded_hw_div_float_down(float a, float b)
{ return rounded_div_impl_float(ROUND_DOWNWARD, a, b); }
extern float rounded_hw_div_float_zero(float a, float b)
{ return rounded_div_impl_float(ROUND_TOWARDZERO, a, b); }

static inline ALWAYS_INLINE
float rounded_sqrt_impl_float(native_rounding_mode mode, float a)
{
    __m128 av = _mm_set_ss(a);
    __m128 resultv;
    switch (mode) {
    case ROUND_TONEAREST:
        resultv = _mm_sqrt_round_ss(av, av, _MM_FROUND_TO_NEAREST_INT | _MM_FROUND_NO_EXC);
        break;
    case ROUND_DOWNWARD:
        resultv = _mm_sqrt_round_ss(av, av, _MM_FROUND_TO_NEG_INF | _MM_FROUND_NO_EXC);
        break;
    case ROUND_UPWARD:
        resultv = _mm_sqrt_round_ss(av, av, _MM_FROUND_TO_POS_INF | _MM_FROUND_NO_EXC);
        break;
    case ROUND_TOWARDZERO:
        resultv = _mm_sqrt_round_ss(av, av, _MM_FROUND_TO_ZERO | _MM_FROUND_NO_EXC);
        break;
    default:
        UNREACHABLE();
        abort();
    }
    float result;
    _mm_store_ss(&result, resultv);
    return result;
}
extern float rounded_hw_sqrt_float(HsInt mode, float a)
{ return rounded_sqrt_impl_float(hs_rounding_mode_to_native(mode), a); }
extern float rounded_hw_sqrt_float_up(float a)
{ return rounded_sqrt_impl_float(ROUND_UPWARD, a); }
extern float rounded_hw_sqrt_float_down(float a)
{ return rounded_sqrt_impl_float(ROUND_DOWNWARD, a); }
extern float rounded_hw_sqrt_float_zero(float a)
{ return rounded_sqrt_impl_float(ROUND_TOWARDZERO, a); }

static inline ALWAYS_INLINE
float rounded_fma_impl_float(native_rounding_mode mode, float a, float b, float c)
{
    __m128 av = _mm_set_ss(a);
    __m128 bv = _mm_set_ss(b);
    __m128 cv = _mm_set_ss(c);
    __m128 resultv;
    switch (mode) {
    case ROUND_TONEAREST:
        resultv = _mm_fmadd_round_ss(av, bv, cv, _MM_FROUND_TO_NEAREST_INT | _MM_FROUND_NO_EXC);
        break;
    case ROUND_DOWNWARD:
        resultv = _mm_fmadd_round_ss(av, bv, cv, _MM_FROUND_TO_NEG_INF | _MM_FROUND_NO_EXC);
        break;
    case ROUND_UPWARD:
        resultv = _mm_fmadd_round_ss(av, bv, cv, _MM_FROUND_TO_POS_INF | _MM_FROUND_NO_EXC);
        break;
    case ROUND_TOWARDZERO:
        resultv = _mm_fmadd_round_ss(av, bv, cv, _MM_FROUND_TO_ZERO | _MM_FROUND_NO_EXC);
        break;
    default:
        UNREACHABLE();
        abort();
    }
    float result;
    _mm_store_ss(&result, resultv);
    return result;
}
extern float rounded_hw_fma_float(HsInt mode, float a, float b, float c)
{ return rounded_fma_impl_float(hs_rounding_mode_to_native(mode), a, b, c); }
extern float rounded_hw_fma_float_up(float a, float b, float c)
{ return rounded_fma_impl_float(ROUND_UPWARD, a, b, c); }
extern float rounded_hw_fma_float_down(float a, float b, float c)
{ return rounded_fma_impl_float(ROUND_DOWNWARD, a, b, c); }
extern float rounded_hw_fma_float_zero(float a, float b, float c)
{ return rounded_fma_impl_float(ROUND_TOWARDZERO, a, b, c); }

extern float rounded_hw_fma_if_fast_float(HsInt mode, float a, float b, float c)
{ return rounded_fma_impl_float(hs_rounding_mode_to_native(mode), a, b, c); }
extern float rounded_hw_fma_if_fast_float_up(float a, float b, float c)
{ return rounded_fma_impl_float(ROUND_UPWARD, a, b, c); }
extern float rounded_hw_fma_if_fast_float_down(float a, float b, float c)
{ return rounded_fma_impl_float(ROUND_DOWNWARD, a, b, c); }
extern float rounded_hw_fma_if_fast_float_zero(float a, float b, float c)
{ return rounded_fma_impl_float(ROUND_TOWARDZERO, a, b, c); }

//
// Conversion
//

static inline float rounded_int64_to_float_impl(native_rounding_mode mode, int64_t x)
{
    __m128 resultv = _mm_set_ss(0.0f);
    switch (mode) {
    case ROUND_TONEAREST:
        resultv = _mm_cvt_roundi64_ss(resultv, x, _MM_FROUND_TO_NEAREST_INT | _MM_FROUND_NO_EXC);
        break;
    case ROUND_DOWNWARD:
        resultv = _mm_cvt_roundi64_ss(resultv, x, _MM_FROUND_TO_NEG_INF | _MM_FROUND_NO_EXC);
        break;
    case ROUND_UPWARD:
        resultv = _mm_cvt_roundi64_ss(resultv, x, _MM_FROUND_TO_POS_INF | _MM_FROUND_NO_EXC);
        break;
    case ROUND_TOWARDZERO:
        resultv = _mm_cvt_roundi64_ss(resultv, x, _MM_FROUND_TO_ZERO | _MM_FROUND_NO_EXC);
        break;
    default:
        UNREACHABLE();
        abort();
    }
    float result;
    _mm_store_ss(&result, resultv);
    return result;
}
extern float rounded_hw_int64_to_float(HsInt mode, int64_t x)
{ return rounded_int64_to_float_impl(hs_rounding_mode_to_native(mode), x); }
extern float rounded_hw_int64_to_float_up(int64_t x)
{ return rounded_int64_to_float_impl(ROUND_UPWARD, x); }
extern float rounded_hw_int64_to_float_down(int64_t x)
{ return rounded_int64_to_float_impl(ROUND_DOWNWARD, x); }
extern float rounded_hw_int64_to_float_zero(int64_t x)
{ return rounded_int64_to_float_impl(ROUND_TOWARDZERO, x); }

static inline float rounded_word64_to_float_impl(native_rounding_mode mode, uint64_t x)
{
    __m128 resultv = _mm_set_ss(0.0f);
    switch (mode) {
    case ROUND_TONEAREST:
        resultv = _mm_cvt_roundu64_ss(resultv, x, _MM_FROUND_TO_NEAREST_INT | _MM_FROUND_NO_EXC);
        break;
    case ROUND_DOWNWARD:
        resultv = _mm_cvt_roundu64_ss(resultv, x, _MM_FROUND_TO_NEG_INF | _MM_FROUND_NO_EXC);
        break;
    case ROUND_UPWARD:
        resultv = _mm_cvt_roundu64_ss(resultv, x, _MM_FROUND_TO_POS_INF | _MM_FROUND_NO_EXC);
        break;
    case ROUND_TOWARDZERO:
        resultv = _mm_cvt_roundu64_ss(resultv, x, _MM_FROUND_TO_ZERO | _MM_FROUND_NO_EXC);
        break;
    default:
        UNREACHABLE();
        abort();
    }
    float result;
    _mm_store_ss(&result, resultv);
    return result;
}
extern float rounded_hw_word64_to_float(HsInt mode, uint64_t x)
{ return rounded_word64_to_float_impl(hs_rounding_mode_to_native(mode), x); }
extern float rounded_hw_word64_to_float_up(uint64_t x)
{ return rounded_word64_to_float_impl(ROUND_UPWARD, x); }
extern float rounded_hw_word64_to_float_down(uint64_t x)
{ return rounded_word64_to_float_impl(ROUND_DOWNWARD, x); }
extern float rounded_hw_word64_to_float_zero(uint64_t x)
{ return rounded_word64_to_float_impl(ROUND_TOWARDZERO, x); }

//
// Interval arithmetic
//

static inline float fast_fmax_float(float x, float y)
{
    // should compile to MAX[SP][SD] instruction on x86
    return x > y ? x : y;
}
static inline float fast_fmax4_float(float x, float y, float z, float w)
{
    return fast_fmax_float(fast_fmax_float(x, y), fast_fmax_float(z, w));
}
static inline float fast_fmin_float(float x, float y)
{
    // should compile to MIN[SP][SD] instruction on x86
    return x < y ? x : y;
}
static inline float fast_fmin4_float(float x, float y, float z, float w)
{
    return fast_fmin_float(fast_fmin_float(x, y), fast_fmin_float(z, w));
}

extern float rounded_hw_interval_mul_float_up(float lo1, float hi1, float lo2, float hi2)
{
    float x = rounded_mul_impl_float(ROUND_UPWARD, lo1, lo2);
    float y = rounded_mul_impl_float(ROUND_UPWARD, lo1, hi2);
    float z = rounded_mul_impl_float(ROUND_UPWARD, hi1, lo2);
    float w = rounded_mul_impl_float(ROUND_UPWARD, hi1, hi2);
    if (isnan(x)) x = 0.0f; /* 0 * inf -> 0 */
    if (isnan(y)) y = 0.0f; /* 0 * inf -> 0 */
    if (isnan(z)) z = 0.0f; /* 0 * inf -> 0 */
    if (isnan(w)) w = 0.0f; /* 0 * inf -> 0 */
    return fast_fmax4_float(x, y, z, w);
}

extern float rounded_hw_interval_mul_float_down(float lo1, float hi1, float lo2, float hi2)
{
    float x = rounded_mul_impl_float(ROUND_DOWNWARD, lo1, lo2);
    float y = rounded_mul_impl_float(ROUND_DOWNWARD, lo1, hi2);
    float z = rounded_mul_impl_float(ROUND_DOWNWARD, hi1, lo2);
    float w = rounded_mul_impl_float(ROUND_DOWNWARD, hi1, hi2);
    if (isnan(x)) x = 0.0f; /* 0 * inf -> 0 */
    if (isnan(y)) y = 0.0f; /* 0 * inf -> 0 */
    if (isnan(z)) z = 0.0f; /* 0 * inf -> 0 */
    if (isnan(w)) w = 0.0f; /* 0 * inf -> 0 */
    return fast_fmin4_float(x, y, z, w);
}

extern float rounded_hw_interval_mul_add_float_up(float lo1, float hi1, float lo2, float hi2, float hi3)
{
    float x = rounded_mul_impl_float(ROUND_UPWARD, lo1, lo2);
    float y = rounded_mul_impl_float(ROUND_UPWARD, lo1, hi2);
    float z = rounded_mul_impl_float(ROUND_UPWARD, hi1, lo2);
    float w = rounded_mul_impl_float(ROUND_UPWARD, hi1, hi2);
    if (isnan(x)) x = 0.0f; /* 0 * inf -> 0 */
    if (isnan(y)) y = 0.0f; /* 0 * inf -> 0 */
    if (isnan(z)) z = 0.0f; /* 0 * inf -> 0 */
    if (isnan(w)) w = 0.0f; /* 0 * inf -> 0 */
    float p = fast_fmax4_float(x, y, z, w);
    return rounded_add_impl_float(ROUND_UPWARD, p, hi3);
}

extern float rounded_hw_interval_mul_add_float_down(float lo1, float hi1, float lo2, float hi2, float lo3)
{
    float x = rounded_mul_impl_float(ROUND_DOWNWARD, lo1, lo2);
    float y = rounded_mul_impl_float(ROUND_DOWNWARD, lo1, hi2);
    float z = rounded_mul_impl_float(ROUND_DOWNWARD, hi1, lo2);
    float w = rounded_mul_impl_float(ROUND_DOWNWARD, hi1, hi2);
    if (isnan(x)) x = 0.0f; /* 0 * inf -> 0 */
    if (isnan(y)) y = 0.0f; /* 0 * inf -> 0 */
    if (isnan(z)) z = 0.0f; /* 0 * inf -> 0 */
    if (isnan(w)) w = 0.0f; /* 0 * inf -> 0 */
    float p = fast_fmin4_float(x, y, z, w);
    return rounded_add_impl_float(ROUND_DOWNWARD, p, lo3);
}

extern float rounded_hw_interval_div_float_up(float lo1, float hi1, float lo2, float hi2)
{
    float x = rounded_div_impl_float(ROUND_UPWARD, lo1, lo2);
    float y = rounded_div_impl_float(ROUND_UPWARD, lo1, hi2);
    float z = rounded_div_impl_float(ROUND_UPWARD, hi1, lo2);
    float w = rounded_div_impl_float(ROUND_UPWARD, hi1, hi2);
    if (isnan(x)) x = 0.0f; /* 0 / 0, +-inf / +-inf -> 0 */
    if (isnan(y)) y = 0.0f; /* 0 / 0, +-inf / +-inf -> 0 */
    if (isnan(z)) z = 0.0f; /* 0 / 0, +-inf / +-inf -> 0 */
    if (isnan(w)) w = 0.0f; /* 0 / 0, +-inf / +-inf -> 0 */
    return fast_fmax4_float(x, y, z, w);
}

extern float rounded_hw_interval_div_float_down(float lo1, float hi1, float lo2, float hi2)
{
    float x = rounded_div_impl_float(ROUND_DOWNWARD, lo1, lo2);
    float y = rounded_div_impl_float(ROUND_DOWNWARD, lo1, hi2);
    float z = rounded_div_impl_float(ROUND_DOWNWARD, hi1, lo2);
    float w = rounded_div_impl_float(ROUND_DOWNWARD, hi1, hi2);
    if (isnan(x)) x = 0.0f; /* 0 / 0, +-inf / +-inf -> 0 */
    if (isnan(y)) y = 0.0f; /* 0 / 0, +-inf / +-inf -> 0 */
    if (isnan(z)) z = 0.0f; /* 0 / 0, +-inf / +-inf -> 0 */
    if (isnan(w)) w = 0.0f; /* 0 / 0, +-inf / +-inf -> 0 */
    return fast_fmin4_float(x, y, z, w);
}

extern float rounded_hw_interval_div_add_float_up(float lo1, float hi1, float lo2, float hi2, float hi3)
{
    float x = rounded_div_impl_float(ROUND_UPWARD, lo1, lo2);
    float y = rounded_div_impl_float(ROUND_UPWARD, lo1, hi2);
    float z = rounded_div_impl_float(ROUND_UPWARD, hi1, lo2);
    float w = rounded_div_impl_float(ROUND_UPWARD, hi1, hi2);
    if (isnan(x)) x = 0.0f; /* 0 / 0, +-inf / +-inf -> 0 */
    if (isnan(y)) y = 0.0f; /* 0 / 0, +-inf / +-inf -> 0 */
    if (isnan(z)) z = 0.0f; /* 0 / 0, +-inf / +-inf -> 0 */
    if (isnan(w)) w = 0.0f; /* 0 / 0, +-inf / +-inf -> 0 */
    float p = fast_fmax4_float(x, y, z, w);
    return rounded_add_impl_float(ROUND_UPWARD, p, hi3);
}

extern float rounded_hw_interval_div_add_float_down(float lo1, float hi1, float lo2, float hi2, float lo3)
{
    float x = rounded_div_impl_float(ROUND_DOWNWARD, lo1, lo2);
    float y = rounded_div_impl_float(ROUND_DOWNWARD, lo1, hi2);
    float z = rounded_div_impl_float(ROUND_DOWNWARD, hi1, lo2);
    float w = rounded_div_impl_float(ROUND_DOWNWARD, hi1, hi2);
    if (isnan(x)) x = 0.0f; /* 0 / 0, +-inf / +-inf -> 0 */
    if (isnan(y)) y = 0.0f; /* 0 / 0, +-inf / +-inf -> 0 */
    if (isnan(z)) z = 0.0f; /* 0 / 0, +-inf / +-inf -> 0 */
    if (isnan(w)) w = 0.0f; /* 0 / 0, +-inf / +-inf -> 0 */
    float p = fast_fmin4_float(x, y, z, w);
    return rounded_add_impl_float(ROUND_DOWNWARD, p, lo3);
}

//
// Summation
//

static inline float rounded_sum_impl_float(native_rounding_mode mode, HsInt offset, HsInt length, const float *a)
{
    float s = 0.0f;
    for (HsInt i = 0; i < length; ++i) {
        s = rounded_add_impl_float(mode, s, a[offset + i]);
    }
    return s;
}
static float rounded_hw_sum_float_nearest(HsInt offset, HsInt length, const float *a)
{ return rounded_sum_impl_float(ROUND_TONEAREST, offset, length, a); }
extern float rounded_hw_sum_float_up(HsInt offset, HsInt length, const float *a)
{ return rounded_sum_impl_float(ROUND_UPWARD, offset, length, a); }
extern float rounded_hw_sum_float_down(HsInt offset, HsInt length, const float *a)
{ return rounded_sum_impl_float(ROUND_DOWNWARD, offset, length, a); }
extern float rounded_hw_sum_float_zero(HsInt offset, HsInt length, const float *a)
{ return rounded_sum_impl_float(ROUND_TOWARDZERO, offset, length, a); }
extern float rounded_hw_sum_float(HsInt mode, HsInt offset, HsInt length, const float *a)
{
    switch (hs_rounding_mode_to_native(mode)) {
    case ROUND_TONEAREST:
        return rounded_hw_sum_float_nearest(offset, length, a);
    case ROUND_UPWARD:
        return rounded_hw_sum_float_up(offset, length, a);
    case ROUND_DOWNWARD:
        return rounded_hw_sum_float_down(offset, length, a);
    case ROUND_TOWARDZERO:
        return rounded_hw_sum_float_zero(offset, length, a);
    default:
        UNREACHABLE();
        abort();
    }
}
