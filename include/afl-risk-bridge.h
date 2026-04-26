#ifndef __AFL_RISK_BRIDGE_H
#define __AFL_RISK_BRIDGE_H

#ifdef __cplusplus
extern "C" {
#endif

void __afl_risk_ins(unsigned int token);

#ifdef __cplusplus
}
#endif

#if USE_RISK_FEEDBACK
#  define __POLAR_INS(_X) do { __afl_risk_ins((unsigned int)(_X)); } while (0)
#else
#  define __POLAR_INS(_X) do { } while (0)
#endif

#endif