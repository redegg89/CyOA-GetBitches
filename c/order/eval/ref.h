// (C) Copyright Vesa Karvonen 2004.
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE.)

#define ORDER_PP_DEF_8ref(sym) 8EVAL_REF,sym,

#define ORDER_PP_ORDER_PP_DEF_8ref(P,e,...) )(,1,ORDER_PP_SYNTAX_ERROR(!):8ref:(,P##e,P##__VA_ARGS__))

#define ORDER_PP_8EVAL_REF(P,e,s,G,K,...) ORDER_PP_INVOKE(P##K,ORDER_PP_9ENV_REF(,P##s,P##e)),P##__VA_ARGS__)

#define ORDER_PP_9ENV_REF(P,s0,e) ORDER_PP_FX(TUPLE_AT_2,(,ORDER_PP_SCAN(ORDER_PP_SCAN(ORDER_PP_ENV_REF_A P##e(0,,)P##s0,ORDER_PP_ENV_CLOSE_A P##e(0,))),ORDER_PP_ERROR_UNBOUND_VARIABLE ORDER_PP_BLOCK(!),))

#define ORDER_PP_ENV_REF_A(P,s,v) ORDER_PP_ENV_REF_F ORDER_PP_BLOCK(,P##s,P##v,ORDER_PP_ENV_REF_B##P
#define ORDER_PP_ENV_REF_A0
#define ORDER_PP_ENV_REF_B(P,s,v) ORDER_PP_ENV_REF_F ORDER_PP_BLOCK(,P##s,P##v,ORDER_PP_ENV_REF_A##P
#define ORDER_PP_ENV_REF_B0

#define ORDER_PP_ENV_REF_F(P,s,v,...) ORDER_PP_ENV_REF_G(,P##s,P##v,__VA_ARGS__)
#define ORDER_PP_ENV_REF_G(P,s,v,s0,...) P##s0,ORDER_PP_TEST(,ORDER_PP_SYM_##s0(ORDER_PP_SYM_##s)(,,),,ORDER_PP_OPEN)(,,P##v,)P##__VA_ARGS__

#define ORDER_PP_ENV_CLOSE_A(P,...) )ORDER_PP_ENV_CLOSE_B##P
#define ORDER_PP_ENV_CLOSE_A0
#define ORDER_PP_ENV_CLOSE_B(P,...) )ORDER_PP_ENV_CLOSE_A##P
#define ORDER_PP_ENV_CLOSE_B0

#define ORDER_PP_DEF_8current_env 8CURRENT_ENV,
#define ORDER_PP_8CURRENT_ENV(P,e,G,K,...) ORDER_PP_##K(,P##e,P##__VA_ARGS__)

#ifdef ORDER_PP_DEBUG
# define ORDER_PP_8EVAL_VREF(P,e,s,G,...) (,ORDER_PP_EVAL_VREF(,ORDER_PP_REF_##s e##P,P##s),P##__VA_ARGS__)
# define ORDER_PP_EVAL_VREF(P,x,s) ORDER_PP_TUPLE_AT_1(,x,P##s ORDER_PP_COMMA 8EXIT_ERROR ORDER_PP_COMMA ORDER_PP_ERROR_UNBOUND_VARIABLE,)
#else
# define ORDER_PP_8EVAL_VREF(P,e,s,G,K,...) ORDER_PP_INVOKE(P##K,ORDER_PP_EVAL_VREF(ORDER_PP_REF_##s e##P)),P##__VA_ARGS__)
# define ORDER_PP_EVAL_VREF(x) ORDER_PP_TUPLE_AT_1(,x,ORDER_PP_ERROR_UNBOUND_VARIABLE(!),)
#endif

#define ORDER_PP_ERROR_UNBOUND_VARIABLE() ORDER_PP_ERROR_UNBOUND_VARIABLE

#include "ref_tables.h"
