/* This file generated by /home/whaley/TEST/ATLAS3.9.23.0/obj64/..//tune/blas/gemm/txover.c
*/
#ifndef ATL_TXOVER_H
#define ATL_TXOVER_H 1

#define ATL_PDIM 3
static const int ATL_tmmNN_SQmnk_XO[3] =
{146,146,151};
static const int ATL_tmmNT_SQmnk_XO[3] =
{148,148,159};
static const int ATL_tmmTN_SQmnk_XO[3] =
{148,148,159};
#define ATL_tmmTT_SQmnk_XO ATL_tmmNN_SQmnk_XO
static const int *ATL_tmm_SQmnk_XO[4] =
{ATL_tmmNN_SQmnk_XO, ATL_tmmNT_SQmnk_XO,
ATL_tmmTN_SQmnk_XO, ATL_tmmTT_SQmnk_XO};
static const int ATL_tmmNN_SmnLk_XO[27] =
{0,5552,0,0,4595,0,2686,4172,8000,1003,1604,0,0,491,3960,166,342,905,155,290,445,155,295,1093,0,72,1713};
static const int ATL_tmmNT_SmnLk_XO[27] =
{0,2761,0,2761,2842,0,2761,2761,0,867,1605,3418,0,482,3830,153,351,643,153,294,1163,153,291,1155,0,72,241};
static const int ATL_tmmTN_SmnLk_XO[27] =
{0,0,0,0,0,0,3110,6137,0,1172,1616,0,0,567,1086,165,358,1094,153,296,440,153,289,439,0,72,158};
#define ATL_tmmTT_SmnLk_XO ATL_tmmNN_SmnLk_XO
static const int *ATL_tmm_SmnLk_XO[4] =
{ATL_tmmNN_SmnLk_XO, ATL_tmmNT_SmnLk_XO,
ATL_tmmTN_SmnLk_XO, ATL_tmmTT_SmnLk_XO};
static const int ATL_tmmNN_SmkLn_XO[27] =
{0,3430,8562,0,3430,6598,0,2978,5950,0,2146,3249,2146,4291,6430,480,1028,1670,153,296,440,153,289,439,0,72,217};
static const int ATL_tmmNT_SmkLn_XO[27] =
{0,5453,0,0,5453,0,0,3938,8726,0,2598,3244,1523,3145,4718,342,754,1251,156,294,433,156,296,584,0,72,255};
#define ATL_tmmTN_SmkLn_XO ATL_tmmNN_SmkLn_XO
#define ATL_tmmTT_SmkLn_XO ATL_tmmNT_SmkLn_XO
static const int *ATL_tmm_SmkLn_XO[4] =
{ATL_tmmNN_SmkLn_XO, ATL_tmmNT_SmkLn_XO,
ATL_tmmTN_SmkLn_XO, ATL_tmmTT_SmkLn_XO};
static const int ATL_tmmNN_SnkLm_XO[27] =
{0,0,0,8179,8399,0,0,6060,0,6060,0,0,2121,3972,6358,488,551,1613,153,296,440,153,289,439,0,72,119};
#define ATL_tmmNT_SnkLm_XO ATL_tmmNN_SnkLm_XO
static const int ATL_tmmTN_SnkLm_XO[27] =
{0,6017,0,0,6017,0,0,6017,7883,6017,0,0,0,1057,6362,0,300,1613,153,296,440,153,289,439,0,72,149};
#define ATL_tmmTT_SnkLm_XO ATL_tmmTN_SnkLm_XO
static const int *ATL_tmm_SnkLm_XO[4] =
{ATL_tmmNN_SnkLm_XO, ATL_tmmNT_SnkLm_XO,
ATL_tmmTN_SnkLm_XO, ATL_tmmTT_SnkLm_XO};
static const int ATL_tmmNN_SmLnk_XO[27] =
{0,301,367,301,301,603,0,184,330,0,184,591,171,214,580,147,174,591,0,147,545,147,158,303,72,145,268};
static const int ATL_tmmNT_SmLnk_XO[27] =
{0,183,602,0,183,602,170,183,590,0,170,601,157,188,591,147,166,306,0,147,523,147,158,303,72,146,221};
static const int ATL_tmmTN_SmLnk_XO[27] =
{153,0,597,153,210,609,153,180,597,153,166,597,0,153,597,153,166,586,0,153,597,153,153,291,72,153,291};
static const int ATL_tmmTT_SmLnk_XO[27] =
{180,0,599,180,206,599,180,193,599,0,180,597,153,160,591,147,174,591,147,160,591,147,158,303,72,146,221};
static const int *ATL_tmm_SmLnk_XO[4] =
{ATL_tmmNN_SmLnk_XO, ATL_tmmNT_SmLnk_XO,
ATL_tmmTN_SmLnk_XO, ATL_tmmTT_SmLnk_XO};
static const int ATL_tmmNN_SnLmk_XO[27] =
{153,0,609,153,195,609,153,166,597,153,166,597,0,153,597,0,153,586,0,153,586,153,153,291,72,150,280};
static const int ATL_tmmNT_SnLmk_XO[27] =
{0,189,608,0,189,608,176,176,595,0,163,595,163,193,586,153,166,586,0,153,586,153,153,291,72,145,268};
static const int ATL_tmmTN_SnLmk_XO[27] =
{160,0,604,160,198,570,160,187,593,160,160,591,0,147,591,0,147,591,0,147,580,147,158,303,72,152,152};
static const int ATL_tmmTT_SnLmk_XO[27] =
{0,207,602,207,219,614,207,219,602,0,207,590,195,222,597,153,180,586,0,153,597,153,153,291,72,145,268};
static const int *ATL_tmm_SnLmk_XO[4] =
{ATL_tmmNN_SnLmk_XO, ATL_tmmNT_SnLmk_XO,
ATL_tmmTN_SnLmk_XO, ATL_tmmTT_SnLmk_XO};
static const int ATL_tmmNN_SkLmn_XO[27] =
{0,180,326,0,180,1020,0,180,793,0,180,576,180,207,586,153,180,586,0,153,574,153,153,291,72,152,152};
static const int ATL_tmmNT_SkLmn_XO[27] =
{0,201,1151,0,201,313,0,201,585,201,326,582,173,193,586,153,166,586,0,153,586,153,153,291,72,152,152};
static const int ATL_tmmTN_SkLmn_XO[27] =
{0,180,576,0,180,1020,0,180,793,0,180,576,180,271,583,150,177,583,0,150,560,150,150,280,72,145,268};
#define ATL_tmmTT_SkLmn_XO ATL_tmmNN_SkLmn_XO
static const int *ATL_tmm_SkLmn_XO[4] =
{ATL_tmmNN_SkLmn_XO, ATL_tmmNT_SkLmn_XO,
ATL_tmmTN_SkLmn_XO, ATL_tmmTT_SkLmn_XO};

#endif /* end ifndef ATL_TXOVER_H */