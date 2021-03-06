/* *****************************************************
   THIS IS AN AUTOMATICALLY GENERATED FILE. DO NOT EDIT.
   *****************************************************

   Generated by:
     scitbx.source_generators.array_family.generate_std_imports
 */

#ifndef SCITBX_ARRAY_FAMILY_STD_IMPORTS_H
#define SCITBX_ARRAY_FAMILY_STD_IMPORTS_H

#ifndef DOXYGEN_SHOULD_SKIP_THIS

#include "cmath"
#include "cstdlib"
#include "complex"

namespace scitbx { namespace fn {

  using std::acos;
  using std::cos;
  using std::tan;
  using std::asin;
  using std::cosh;
  using std::tanh;
  using std::atan;
  using std::exp;
  using std::sin;
  using std::fabs;
  using std::log;
  using std::sinh;
  using std::ceil;
  using std::floor;
  using std::log10;
  using std::sqrt;
  using std::fmod;
  using std::pow;
  using std::atan2;
  using std::abs;
  using std::min;
  using std::max;
  using std::conj;
  using std::real;
  using std::imag;
  using std::arg;
  using std::norm;
  using std::polar;

  template <typename ResultType,
            typename ArgumentType>
  struct functor_acos {
    typedef ResultType result_type;
    ResultType operator()(ArgumentType const& x) const {
      return ResultType(acos(x));
    }
  };

  template <typename ResultType,
            typename ArgumentType>
  struct functor_cos {
    typedef ResultType result_type;
    ResultType operator()(ArgumentType const& x) const {
      return ResultType(cos(x));
    }
  };

  template <typename ResultType,
            typename ArgumentType>
  struct functor_tan {
    typedef ResultType result_type;
    ResultType operator()(ArgumentType const& x) const {
      return ResultType(tan(x));
    }
  };

  template <typename ResultType,
            typename ArgumentType>
  struct functor_asin {
    typedef ResultType result_type;
    ResultType operator()(ArgumentType const& x) const {
      return ResultType(asin(x));
    }
  };

  template <typename ResultType,
            typename ArgumentType>
  struct functor_cosh {
    typedef ResultType result_type;
    ResultType operator()(ArgumentType const& x) const {
      return ResultType(cosh(x));
    }
  };

  template <typename ResultType,
            typename ArgumentType>
  struct functor_tanh {
    typedef ResultType result_type;
    ResultType operator()(ArgumentType const& x) const {
      return ResultType(tanh(x));
    }
  };

  template <typename ResultType,
            typename ArgumentType>
  struct functor_atan {
    typedef ResultType result_type;
    ResultType operator()(ArgumentType const& x) const {
      return ResultType(atan(x));
    }
  };

  template <typename ResultType,
            typename ArgumentType>
  struct functor_exp {
    typedef ResultType result_type;
    ResultType operator()(ArgumentType const& x) const {
      return ResultType(exp(x));
    }
  };

  template <typename ResultType,
            typename ArgumentType>
  struct functor_sin {
    typedef ResultType result_type;
    ResultType operator()(ArgumentType const& x) const {
      return ResultType(sin(x));
    }
  };

  template <typename ResultType,
            typename ArgumentType>
  struct functor_fabs {
    typedef ResultType result_type;
    ResultType operator()(ArgumentType const& x) const {
      return ResultType(fabs(x));
    }
  };

  template <typename ResultType,
            typename ArgumentType>
  struct functor_log {
    typedef ResultType result_type;
    ResultType operator()(ArgumentType const& x) const {
      return ResultType(log(x));
    }
  };

  template <typename ResultType,
            typename ArgumentType>
  struct functor_sinh {
    typedef ResultType result_type;
    ResultType operator()(ArgumentType const& x) const {
      return ResultType(sinh(x));
    }
  };

  template <typename ResultType,
            typename ArgumentType>
  struct functor_ceil {
    typedef ResultType result_type;
    ResultType operator()(ArgumentType const& x) const {
      return ResultType(ceil(x));
    }
  };

  template <typename ResultType,
            typename ArgumentType>
  struct functor_floor {
    typedef ResultType result_type;
    ResultType operator()(ArgumentType const& x) const {
      return ResultType(floor(x));
    }
  };

  template <typename ResultType,
            typename ArgumentType>
  struct functor_log10 {
    typedef ResultType result_type;
    ResultType operator()(ArgumentType const& x) const {
      return ResultType(log10(x));
    }
  };

  template <typename ResultType,
            typename ArgumentType>
  struct functor_sqrt {
    typedef ResultType result_type;
    ResultType operator()(ArgumentType const& x) const {
      return ResultType(sqrt(x));
    }
  };

  template <typename ResultType,
            typename ArgumentType>
  struct functor_abs {
    typedef ResultType result_type;
    ResultType operator()(ArgumentType const& x) const {
      return ResultType(abs(x));
    }
  };

  template <typename ResultType,
            typename ArgumentType>
  struct functor_conj {
    typedef ResultType result_type;
    ResultType operator()(ArgumentType const& x) const {
      return ResultType(conj(x));
    }
  };

  template <typename ResultType,
            typename ArgumentType>
  struct functor_real {
    typedef ResultType result_type;
    ResultType operator()(ArgumentType const& x) const {
      return ResultType(real(x));
    }
  };

  template <typename ResultType,
            typename ArgumentType>
  struct functor_imag {
    typedef ResultType result_type;
    ResultType operator()(ArgumentType const& x) const {
      return ResultType(imag(x));
    }
  };

  template <typename ResultType,
            typename ArgumentType>
  struct functor_arg {
    typedef ResultType result_type;
    ResultType operator()(ArgumentType const& x) const {
      return ResultType(arg(x));
    }
  };

  template <typename ResultType,
            typename ArgumentType>
  struct functor_norm {
    typedef ResultType result_type;
    ResultType operator()(ArgumentType const& x) const {
      return ResultType(norm(x));
    }
  };

  template <typename ResultType,
            typename ArgumentType1,
            typename ArgumentType2>
  struct functor_fmod {
    typedef ResultType result_type;
    ResultType operator()(ArgumentType1 const& x,
                          ArgumentType2 const& y) const {
      return ResultType(fmod(x, y));
    }
  };

  template <typename ResultType,
            typename ArgumentType1,
            typename ArgumentType2>
  struct functor_pow {
    typedef ResultType result_type;
    ResultType operator()(ArgumentType1 const& x,
                          ArgumentType2 const& y) const {
      return ResultType(pow(x, y));
    }
  };

  template <typename ResultType,
            typename ArgumentType1,
            typename ArgumentType2>
  struct functor_atan2 {
    typedef ResultType result_type;
    ResultType operator()(ArgumentType1 const& x,
                          ArgumentType2 const& y) const {
      return ResultType(atan2(x, y));
    }
  };

  template <typename ResultType,
            typename ArgumentType1,
            typename ArgumentType2>
  struct functor_each_min {
    typedef ResultType result_type;
    ResultType operator()(ArgumentType1 const& x,
                          ArgumentType2 const& y) const {
      return ResultType(min(x, y));
    }
  };

  template <typename ResultType,
            typename ArgumentType1,
            typename ArgumentType2>
  struct functor_each_max {
    typedef ResultType result_type;
    ResultType operator()(ArgumentType1 const& x,
                          ArgumentType2 const& y) const {
      return ResultType(max(x, y));
    }
  };

  template <typename ResultType,
            typename ArgumentType1,
            typename ArgumentType2>
  struct functor_polar {
    typedef ResultType result_type;
    ResultType operator()(ArgumentType1 const& x,
                          ArgumentType2 const& y) const {
      return ResultType(polar(x, y));
    }
  };

}} // namespace scitbx::af

#endif // DOXYGEN_SHOULD_SKIP_THIS

#endif // SCITBX_ARRAY_FAMILY_STD_IMPORTS_H
