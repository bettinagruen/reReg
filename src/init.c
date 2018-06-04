// RegisteringDynamic Symbols

#include <R.h>
#include <Rinternals.h>
#include <R_ext/Rdynload.h>

/* void R_init_markovchain(DllInfo* info) { */
/*   R_registerRoutines(info, NULL, NULL, NULL, NULL); */
/*   R_useDynamicSymbols(info, TRUE); */
/* } */

/* .C calls */
extern void alphaEqC(void *, void *, void *, void *, void *, void *);
extern void betaEst(void *, void *, void *, void *, void *, void *, void *, void *, void *);
extern void ghosh(void *, void *, void *, void *, void *, void *, void *, void *);
extern void HWb(void *, void *, void *, void *, void *, void *, void *, void *, void *);
extern void log_ns_est(void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *);
extern void lwyy(void *, void *, void *, void *, void *, void *, void *, void *, void *);
extern void plLambda(void *, void *, void *, void *, void *, void *, void *);
extern void sarm1(void *, void *, void *, void *, void *, void *, void *, void *, void *);
extern void sarm2(void *, void *, void *, void *, void *, void *, void *, void *);
extern void scaleChangeGehan(void *, void *, void *, void *, void *, void *, void *, void *, void *);
extern void scaleChangeLog(void *, void *, void *, void *, void *, void *, void *, void *, void *);

static const R_CMethodDef CEntries[] = {
    {"alphaEqC",         (DL_FUNC) &alphaEqC,          6},
    {"betaEst",          (DL_FUNC) &betaEst,           9},
    {"ghosh",            (DL_FUNC) &ghosh,             8},
    {"HWb",              (DL_FUNC) &HWb,               9},
    {"log_ns_est",       (DL_FUNC) &log_ns_est,       11},
    {"lwyy",             (DL_FUNC) &lwyy,              9},
    {"plLambda",         (DL_FUNC) &plLambda,          7},
    {"sarm1",            (DL_FUNC) &sarm1,             9},
    {"sarm2",            (DL_FUNC) &sarm2,             8},
    {"scaleChangeGehan", (DL_FUNC) &scaleChangeGehan,  9},
    {"scaleChangeLog",   (DL_FUNC) &scaleChangeLog,    9},
    {NULL, NULL, 0}
};

void R_init_reReg(DllInfo *dll)
{
    R_registerRoutines(dll, CEntries, NULL, NULL, NULL);
    R_useDynamicSymbols(dll, TRUE);
}
