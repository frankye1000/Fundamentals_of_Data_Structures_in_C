///* ======================================== */
//
///*    程式實例:                                 */
//
///*    局部(local)和整體(Global) 變數              */
//
///* ======================================== */
//
//#include <stdio.h>
//int step = 10;                    /* 整體變數宣告 */
//int count = 5;                    /* 整體變數宣告 */
//
///* ---------------------------------------- */
//
///*  將變數值加一              */
//
///* ---------------------------------------- */
//
//void increment()
//
//{
//
//   int step = 0;                    /* 局部變數 step 宣告 */
//
//   step++;                        /* 局部變數加一 */
//
//   count++;                       /* 整體變數加一 */
//
//   printf(" 副程序    %2d      %2d    \n",step, count);
//
//}
///* ---------------------------------------- */
//
///*  主程式                                  */
//
///* ---------------------------------------- */
//
//void main()
//
//{
//
//   int count = 0;                   /* 局部變數宣告 */
//
//   count++;                       /* 局部變數加一 */
//
//   step++;                        /* 整體變數加一 */
//
//   printf(" 程序名    STEP    COUNT   \n");
//
//   increment();                   /* 副程序呼叫 */
//
//   printf(" 主程序    %2d      %2d    \n",step, count);
//
//}/* ======================================== */


//靜 態 變 數 ( static variable)
//main()
//   {
//        increment();
//        increment();
//        increment();
//   }
// 
//       increment()
//   {
//     static int x=0;
//     x=x+1;
//     printf("%d\n",x);
//        }

//外 部 變 數 ( extern variable)
//int x=123;
//main()
//    {
//    int x=321;
//    printf("%d\n",x);
//
//    } 


        
        
        
        
