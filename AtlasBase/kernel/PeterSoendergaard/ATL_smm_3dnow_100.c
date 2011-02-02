#define THREEDNOW
#include "SSE3Dnow.h"
#include "atlas_misc.h"

void ATL_USERMM
(const int M, const int N, const int K, const float alpha, const float *A, const int lda, const float *B, const int ldb, const float beta, float *C, const int ldc)

{
   /*--- achitecture specific declarations ---*/

   /*--- program specific declarations ---*/
   int i, j, k;
   vector betavec;
   vector zerovec = {0.0,0.0};
   const float *pA0 = A;
   const float *pB0 = B;
   float *pC0 = C;
   float *pC1 = C+(ldc SHIFT);
   const float *stM = A + MB*KB;
   const float *stN = B + NB*KB;
   const int incAm = 2*KB-KB+4;
   const int incBm = -KB+4;
   const int incCm = (2 SHIFT);
   const int incAn = -MB*KB;
   const int incBn = 2*KB;
   const int incCn = ((ldc*2-MB) SHIFT);

   /*--- initial arhitecture specific statements ---*/
   vec_enter();

   /*--- main program statements ---*/
   vec_mov_mr_1(&beta,reg0);
   vec_mov_rm(reg0,betavec);
   do /* N-loop */
   {
      do /* M-loop */
      {
#ifdef BETA0
         vec_zero(reg0);
         vec_zero(reg1);
         vec_zero(reg2);
         vec_zero(reg3);
#elif defined(BETA1)
         vec_mov_mr_1(pC0,reg0);
         vec_mov_mr_1(pC0+(1 SHIFT),reg1);
         vec_mov_mr_1(pC1,reg2);
         vec_mov_mr_1(pC1+(1 SHIFT),reg3);
#else
         vec_mov_mr(betavec,reg7);
         vec_mov_mr_1(pC0,reg0);
         vec_mul_rr(reg7,reg0);
         vec_mov_mr_1(pC0+(1 SHIFT),reg1);
         vec_mul_rr(reg7,reg1);
         vec_mov_mr_1(pC1,reg2);
         vec_mul_rr(reg7,reg2);
         vec_mov_mr_1(pC1+(1 SHIFT),reg3);
         vec_mul_rr(reg7,reg3);
#endif
         vec_mov_mr(pA0,reg4);
         vec_mul_mr(pB0,reg4);
         vec_mov_mr(pA0+KB,reg5);
         vec_mul_mr(pB0,reg5);
         vec_mov_mr(pA0,reg6);
         vec_mov_mr(pA0+KB,reg7);
         align();
         for (k=0; k<KB-4; k+=16)
         {
            vec_add_rr(reg4,reg0);
            vec_mov_mr(pA0+2,reg4);
            vec_mul_mr(pB0+KB,reg6);
            vec_add_rr(reg5,reg1);
            vec_mov_mr(pA0+2+KB,reg5);
            vec_mul_mr(pB0+KB,reg7);
            vec_add_rr(reg6,reg2);
            vec_mov_mr(pA0+2,reg6);
            vec_mul_mr(pB0+2,reg4);
            vec_add_rr(reg7,reg3);
            vec_mov_mr(pA0+2+KB,reg7);
            vec_mul_mr(pB0+2,reg5);
            vec_add_rr(reg4,reg0);
            vec_mov_mr(pA0+4,reg4);
            vec_mul_mr(pB0+2+KB,reg6);
            vec_add_rr(reg5,reg1);
            vec_mov_mr(pA0+4+KB,reg5);
            vec_mul_mr(pB0+2+KB,reg7);
            vec_add_rr(reg6,reg2);
            vec_mov_mr(pA0+4,reg6);
            vec_mul_mr(pB0+4,reg4);
            vec_add_rr(reg7,reg3);
            vec_mov_mr(pA0+4+KB,reg7);
            vec_mul_mr(pB0+4,reg5);
            vec_add_rr(reg4,reg0);
            vec_mov_mr(pA0+6,reg4);
            vec_mul_mr(pB0+4+KB,reg6);
            vec_add_rr(reg5,reg1);
            vec_mov_mr(pA0+6+KB,reg5);
            vec_mul_mr(pB0+4+KB,reg7);
            vec_add_rr(reg6,reg2);
            vec_mov_mr(pA0+6,reg6);
            vec_mul_mr(pB0+6,reg4);
            vec_add_rr(reg7,reg3);
            vec_mov_mr(pA0+6+KB,reg7);
            vec_mul_mr(pB0+6,reg5);
            vec_add_rr(reg4,reg0);
            vec_mov_mr(pA0+8,reg4);
            vec_mul_mr(pB0+6+KB,reg6);
            vec_add_rr(reg5,reg1);
            vec_mov_mr(pA0+8+KB,reg5);
            vec_mul_mr(pB0+6+KB,reg7);
            vec_add_rr(reg6,reg2);
            vec_mov_mr(pA0+8,reg6);
            vec_mul_mr(pB0+8,reg4);
            vec_add_rr(reg7,reg3);
            vec_mov_mr(pA0+8+KB,reg7);
            vec_mul_mr(pB0+8,reg5);
            vec_add_rr(reg4,reg0);
            vec_mov_mr(pA0+10,reg4);
            vec_mul_mr(pB0+8+KB,reg6);
            vec_add_rr(reg5,reg1);
            vec_mov_mr(pA0+10+KB,reg5);
            vec_mul_mr(pB0+8+KB,reg7);
            vec_add_rr(reg6,reg2);
            vec_mov_mr(pA0+10,reg6);
            vec_mul_mr(pB0+10,reg4);
            vec_add_rr(reg7,reg3);
            vec_mov_mr(pA0+10+KB,reg7);
            vec_mul_mr(pB0+10,reg5);
            vec_add_rr(reg4,reg0);
            vec_mov_mr(pA0+12,reg4);
            vec_mul_mr(pB0+10+KB,reg6);
            vec_add_rr(reg5,reg1);
            vec_mov_mr(pA0+12+KB,reg5);
            vec_mul_mr(pB0+10+KB,reg7);
            vec_add_rr(reg6,reg2);
            vec_mov_mr(pA0+12,reg6);
            vec_mul_mr(pB0+12,reg4);
            vec_add_rr(reg7,reg3);
            vec_mov_mr(pA0+12+KB,reg7);
            vec_mul_mr(pB0+12,reg5);
            vec_add_rr(reg4,reg0);
            vec_mov_mr(pA0+14,reg4);
            vec_mul_mr(pB0+12+KB,reg6);
            vec_add_rr(reg5,reg1);
            vec_mov_mr(pA0+14+KB,reg5);
            vec_mul_mr(pB0+12+KB,reg7);
            vec_add_rr(reg6,reg2);
            vec_mov_mr(pA0+14,reg6);
            vec_mul_mr(pB0+14,reg4);
            vec_add_rr(reg7,reg3);
            vec_mov_mr(pA0+14+KB,reg7);
            vec_mul_mr(pB0+14,reg5);
            vec_add_rr(reg4,reg0);
            vec_mov_mr(pA0+16,reg4);
            vec_mul_mr(pB0+14+KB,reg6);
            vec_add_rr(reg5,reg1);
            vec_mov_mr(pA0+16+KB,reg5);
            vec_mul_mr(pB0+14+KB,reg7);
            vec_add_rr(reg6,reg2);
            vec_mov_mr(pA0+16,reg6);
            vec_mul_mr(pB0+16,reg4);
            vec_add_rr(reg7,reg3);
            vec_mov_mr(pA0+16+KB,reg7);
            vec_mul_mr(pB0+16,reg5);

            pA0 += 16;
            pB0 += 16;
         }
         vec_add_rr(reg4,reg0);
         vec_mov_mr(pA0+2,reg4);
         vec_mul_mr(pB0+KB,reg6);
         vec_add_rr(reg5,reg1);
         vec_mov_mr(pA0+2+KB,reg5);
         vec_mul_mr(pB0+KB,reg7);
         vec_add_rr(reg6,reg2);
         vec_mov_mr(pA0+2,reg6);
         vec_mul_mr(pB0+2,reg4);
         vec_add_rr(reg7,reg3);
         vec_mov_mr(pA0+2+KB,reg7);
         vec_mul_mr(pB0+2,reg5);
         vec_add_rr(reg4,reg0);
         vec_add_rr(reg5,reg1);
         vec_mul_mr(pB0+2+KB,reg6);
         vec_add_rr(reg6,reg2);
         vec_mul_mr(pB0+2+KB,reg7);
         vec_add_rr(reg7,reg3);
         vec_sum(reg0);
         vec_sum(reg1);
         vec_sum(reg2);
         vec_sum(reg3);
         vec_mov_rm_1(reg0,pC0);
         vec_mov_rm_1(reg1,pC0+(1 SHIFT));
         vec_mov_rm_1(reg2,pC1);
         vec_mov_rm_1(reg3,pC1+(1 SHIFT));
         pA0 += incAm;
         pB0 += incBm;
         pC0 += incCm;
         pC1 += incCm;
      }
      while(pA0 != stM);

      pA0 += incAn;
      pB0 += incBn;
      pC0 += incCn;
      pC1 += incCn;
   }
   while(pB0 != stN);

   vec_exit();
}