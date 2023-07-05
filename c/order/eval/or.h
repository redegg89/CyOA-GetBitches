// (C) Copyright Vesa Karvonen 2004.
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE.)

#define ORDER_PP_DEF_8or(...) 8EVAL_OR,(,__VA_ARGS__),

#define ORDER_PP_ORDER_PP_DEF_8or(P,e,...) )(,1,ORDER_PP_SYNTAX_ERROR(!):8or:(,P##e,P##__VA_ARGS__))

#ifdef ORDER_PP_DEBUG
# define ORDER_PP_8EVAL_OR(P,e,ts,G,...) (,P##e,ORDER_PP_SYNTAX_CHECK(,ORDER_PP_TUPLE_FIRST ts##P,ORDER_PP_DEF_FIRST)ts##P,ORDER_PP_IS_TUPLE_SIZE_1 ts##P(,,8EVAL_OR_LOOP,P##e,(,ORDER_PP_TUPLE_REST ts##P),)P##__VA_ARGS__)
# define ORDER_PP_8EVAL_OR_LOOP(P,b,e,ts,...) (,ORDER_PP_TYPE_CHECK(,0IS_BOOL,P##b,ORDER_PP_PRIMITIVE_CAT)(ORDER_PP_IF_,P##b)(,8true,P##e,ORDER_PP_SYNTAX_CHECK(,ORDER_PP_TUPLE_FIRST ts##P,ORDER_PP_DEF_FIRST)ts##P ORDER_PP_IS_TUPLE_SIZE_1 ts##P(,,,8EVAL_OR_LOOP,P##e,(,ORDER_PP_TUPLE_REST ts##P))),P##__VA_ARGS__)
#else
# define ORDER_PP_8EVAL_OR(P,e,ts,G,...) (,P##e,ORDER_PP_DEF_FIRST ts##P,ORDER_PP_IS_TUPLE_SIZE_1 ts##P(,,8EVAL_OR_LOOP,P##e,(,ORDER_PP_TUPLE_REST ts##P),)P##__VA_ARGS__)
# define ORDER_PP_8EVAL_OR_LOOP(P,b,e,ts,...) (,ORDER_PP_IF_##b(,8true,P##e,ORDER_PP_DEF_FIRST ts##P ORDER_PP_IS_TUPLE_SIZE_1 ts##P(,,,8EVAL_OR_LOOP,P##e,(,ORDER_PP_TUPLE_REST ts##P))),P##__VA_ARGS__)
#endif
