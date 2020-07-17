#include "integral_constants.h"

#include "add_const.h"
#include "add_cv.h"
#include "add_lvalue_reference.h"
#include "add_pointer.h"
#include "add_reference.h"
#include "add_rvalue_reference.h"
#include "add_volatile.h"

#include "arifhmetic_traits.h"
#include "array_traits.h"
#include "common_type.h"            
#include "conditional.h"
#include "copy_cv.h"
#include "copy_cv_ref.h"
#include "copy_reference.h"
#include "cv_traits.h"
#include "decay.h"
#include "enable_if.h"
#include "function_traits.h"

#include "is_arifhmetic.h"
#include "is_array.h"
//#include "is_compele"                 TODO
#include "is_class.h"                 //TODO
#include "is_const.h"
#include "is_cv.h"
//#include "is_default_constructible.h" TODO
#include "is_float.h"
#include "is_function.h"
#include "is_fundamental.h"
#include "is_integral.h"
#include "is_lvalue_reference.h"
#include "is_pointer.h"
#include "is_reference.h"
#include "is_rvalue_reference.h"
#include "is_same.h"
#include "is_void.h"
#include "is_volatile.h"

#include "make_void.h"
#include "pointer_traits.h"
#include "rank.h"
#include "reference_traits.h"
#include "remove_const.h"
#include "remove_cv.h"
#include "remove_cv_ref.h"
#include "remove_extent.h"
#include "remove_pointer.h"
#include "remove_reference.h"
#include "remove_volatile.h"
#include "type_identity.h"

#include <iostream>

class C { };

int main()
{
    //std::cout << tl::is_class_v<C> << '\n';
};
