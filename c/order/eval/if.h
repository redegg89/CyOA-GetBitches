// (C) Copyright Vesa Karvonen 2004.
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE.)

#define ORDER_PP_DEF_8if(b,c,...) 8EVAL_IF,b,c,ORDER_PP_IS_TUPLE_SIZE_1(,0##__VA_ARGS__)(,ORDER_PP_REM,8do)(__VA_ARGS__),

#define ORDER_PP_ORDER_PP_DEF_8if(P,e,...) )(,1,ORDER_PP_SYNTAX_ERROR(!):8if:(,P##e,P##__VA_ARGS__))

#ifdef ORDER_PP_DEBUG
# define ORDER_PP_8EVAL_IF(P,e,b,c,a,G,...) (,P##e,ORDER_PP_SYNTAX_CHECK(,P##b,ORDER_PP_DEF)(P##b),8EVAL_IF_B,P##e,P##c,P##a,P##__VA_ARGS__)
# define ORDER_PP_8EVAL_IF_B(P,b,e,c,a,...) (,P##e,ORDER_PP_SYNTAX_CHECK(,ORDER_PP_IF_##b(,P##c,P##a),ORDER_PP_IF_##b)(ORDER_PP_DEF_,P##c,P##a),P##__VA_ARGS__)
#else
# define ORDER_PP_8EVAL_IF(P,e,b,c,a,G,...) (,P##e,ORDER_PP_DEF_##b,8EVAL_IF_B,P##e,P##c,P##a,P##__VA_ARGS__)
# define ORDER_PP_8EVAL_IF_B(P,b,e,c,a,...) (,P##e,ORDER_PP_IF_##b(ORDER_PP_DEF_,P##c,P##a),P##__VA_ARGS__)
#endif
