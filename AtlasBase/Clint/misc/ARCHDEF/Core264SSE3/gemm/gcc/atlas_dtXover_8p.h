/* This file generated by /home/whaley/TEST/ATLAS3.9.21.8/obj64/..//tune/blas/gemm/txover.c
 */
#ifndef ATL_TXOVER_H
   #define ATL_TXOVER_H 1

   #define ATL_PDIM 3
static const int ATL_tmmNN_SQmnk_XO[3] = 
   {113,133,247};
static const int ATL_tmmNT_SQmnk_XO[3] = 
   {113,149,233};
static const int ATL_tmmTN_SQmnk_XO[3] = 
   {113,149,233};
#define ATL_tmmTT_SQmnk_XO ATL_tmmNN_SQmnk_XO
static const int *ATL_tmm_SQmnk_XO[4] =
{ATL_tmmNN_SQmnk_XO, ATL_tmmNT_SQmnk_XO,
 ATL_tmmTN_SQmnk_XO, ATL_tmmTT_SQmnk_XO};
static const int ATL_tmmNN_SmnLk_XO[27] = 
   {0,0,0,0,0,0,0,0,0,2561,4689,0,434,3273,0,245,1574,0,169,869,5765,56,511,1824,56,64,195};
static const int ATL_tmmNT_SmnLk_XO[27] = 
   {0,0,0,6392,0,0,4570,4570,0,921,3242,0,921,1693,0,125,1160,5538,125,1085,4031,62,503,1607,56,64,195};
static const int ATL_tmmTN_SmnLk_XO[27] = 
   {0,0,0,0,0,0,0,0,0,2458,0,0,894,8559,0,298,1058,5701,175,755,4717,56,297,1531,56,65,133};
#define ATL_tmmTT_SmnLk_XO ATL_tmmNN_SmnLk_XO
static const int *ATL_tmm_SmnLk_XO[4] =
{ATL_tmmNN_SmnLk_XO, ATL_tmmNT_SmnLk_XO,
 ATL_tmmTN_SmnLk_XO, ATL_tmmTT_SmnLk_XO};
static const int ATL_tmmNN_SmkLn_XO[27] = 
   {0,0,0,0,0,0,2657,5639,0,2657,2908,0,240,2375,0,240,1359,7528,115,1150,3240,56,329,1084,0,56,249};
static const int ATL_tmmNT_SmkLn_XO[27] = 
   {0,0,0,4481,9615,0,1793,9102,0,1793,4228,0,1793,3294,0,247,2091,0,173,1726,2697,56,361,1240,56,62,258};
#define ATL_tmmTN_SmkLn_XO ATL_tmmNN_SmkLn_XO
#define ATL_tmmTT_SmkLn_XO ATL_tmmNT_SmkLn_XO
static const int *ATL_tmm_SmkLn_XO[4] =
{ATL_tmmNN_SmkLn_XO, ATL_tmmNT_SmkLn_XO,
 ATL_tmmTN_SmkLn_XO, ATL_tmmTT_SmkLn_XO};
static const int ATL_tmmNN_SnkLm_XO[27] = 
   {0,0,0,0,0,0,0,0,0,3136,0,0,848,0,0,238,2427,5214,121,896,2852,56,149,1260,0,56,142};
#define ATL_tmmNT_SnkLm_XO ATL_tmmNN_SnkLm_XO
static const int ATL_tmmTN_SnkLm_XO[27] = 
   {0,0,0,0,0,0,8893,0,0,567,7714,0,567,5352,0,248,2243,3358,116,1026,1939,56,350,1201,0,56,162};
#define ATL_tmmTT_SnkLm_XO ATL_tmmTN_SnkLm_XO
static const int *ATL_tmm_SnkLm_XO[4] =
{ATL_tmmNN_SnkLm_XO, ATL_tmmNT_SnkLm_XO,
 ATL_tmmTN_SnkLm_XO, ATL_tmmTT_SnkLm_XO};
static const int ATL_tmmNN_SmLnk_XO[27] = 
   {314,650,2712,314,697,2712,314,610,2012,200,581,1176,175,490,1036,118,443,715,118,248,697,60,211,438,56,91,217};
static const int ATL_tmmNT_SmLnk_XO[27] = 
   {289,636,3590,289,636,3590,289,640,2787,289,582,2542,176,482,1130,120,434,866,120,250,699,62,252,427,56,88,264};
static const int ATL_tmmTN_SmLnk_XO[27] = 
   {212,607,2744,212,652,2563,212,660,2382,212,594,1174,173,471,1105,118,425,715,118,371,663,61,246,415,56,84,241};
static const int ATL_tmmTT_SmLnk_XO[27] = 
   {284,654,2784,284,649,3409,284,657,3198,216,603,2451,177,486,957,121,433,728,121,231,717,56,246,415,56,105,252};
static const int *ATL_tmm_SmLnk_XO[4] =
{ATL_tmmNN_SmLnk_XO, ATL_tmmNT_SmLnk_XO,
 ATL_tmmTN_SmLnk_XO, ATL_tmmTT_SmLnk_XO};
static const int ATL_tmmNN_SnLmk_XO[27] = 
   {202,749,3463,202,756,2738,202,726,2738,202,708,2263,169,637,1607,113,266,871,113,223,701,64,332,577,56,83,205};
static const int ATL_tmmNT_SnLmk_XO[27] = 
   {431,631,2780,431,659,2780,431,637,2645,199,625,1797,186,590,1170,112,428,1078,112,389,699,62,159,531,56,81,159};
static const int ATL_tmmTN_SnLmk_XO[27] = 
   {241,748,948,241,784,982,241,723,909,209,695,915,177,598,908,117,272,783,117,254,763,56,144,531,56,83,205};
static const int ATL_tmmTT_SnLmk_XO[27] = 
   {226,659,2752,226,656,2391,226,650,1432,213,666,1954,183,568,1055,112,297,813,112,238,706,56,147,380,56,87,159};
static const int *ATL_tmm_SnLmk_XO[4] =
{ATL_tmmNN_SnLmk_XO, ATL_tmmNT_SnLmk_XO,
 ATL_tmmTN_SnLmk_XO, ATL_tmmTT_SnLmk_XO};
static const int ATL_tmmNN_SkLmn_XO[27] = 
   {236,900,1203,236,870,1203,236,902,1199,204,904,1149,171,830,1145,139,0,650,123,263,466,61,146,298,56,86,252};
static const int ATL_tmmNT_SkLmn_XO[27] = 
   {304,897,1149,304,884,1149,304,899,1233,219,902,1106,174,887,1125,114,0,573,114,168,489,61,137,345,56,79,241};
static const int ATL_tmmTN_SkLmn_XO[27] = 
   {212,908,1161,212,910,1206,212,878,1161,212,885,1124,168,823,1235,137,600,650,123,312,535,61,146,345,56,79,148};
#define ATL_tmmTT_SkLmn_XO ATL_tmmNN_SkLmn_XO
static const int *ATL_tmm_SkLmn_XO[4] =
{ATL_tmmNN_SkLmn_XO, ATL_tmmNT_SkLmn_XO,
 ATL_tmmTN_SkLmn_XO, ATL_tmmTT_SkLmn_XO};

#endif /* end ifndef ATL_TXOVER_H */
