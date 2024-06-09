#include "pch.h"
#include<string>
#include<string.h>
#include "assignment1.h"






// TEST CASE Q1


TEST(q1, q1_1) {
        int* ptr1, * ptr2;
        int a = 2, b = 3;
        ptr1 = &a;
        ptr2 = &b;
        swap(ptr1, ptr2);
        EXPECT_EQ(3,*ptr1);
        EXPECT_EQ(2, *ptr2);
  
}
TEST(q1, q1_2) {
        int* ptr1, * ptr2;
        int a = 1, b = 1;
        ptr1 = &a;
        ptr2 = &b;
        swap(ptr1, ptr2);
        EXPECT_EQ(1, *ptr1);
        EXPECT_EQ(1, *ptr2);


}
TEST(q1, q1_3) {
        int* ptr1, * ptr2;
        int a = 0, b = -1;
        ptr1 = &a;
        ptr2 = &b;
        swap(ptr1, ptr2);
        EXPECT_EQ(-1, *ptr1);
        EXPECT_EQ(0, *ptr2);


}








// TEST CASE Q2


TEST(q2, q2_1) {
        int* array{ new int[10]{ 1, 2, 3, 4, 5,6,7,8,9,10} };
        EXPECT_EQ(difference(array, 10),9);
}
TEST(q2, q2_2) {
        int* array{ new int[10]{ 1,3,6,11,45,3,7,6,12,20} };
        EXPECT_EQ(difference(array, 10),44);
}
TEST(q2, q2_3) {
        int* array{ new int[10]{ 0,0,0,0,0,0,0,0,0,-1} };
        EXPECT_EQ(difference(array, 10), 1);
}








// TEST CASE Q3


TEST(q3, q3_1) {
        char* array{ new char[10]{'a','b','c','d','e','f','g','h','i','j'}};
        EXPECT_EQ(if_exists(array, 'a'), 1);
}
TEST(q3, q3_2) {
        char* array{ new char[10]{"hello"}};
        EXPECT_EQ(if_exists(array, 'h'), 1);
}
TEST(q3, q3_3) {
        char* array{ new char[10]{"a"} };
        EXPECT_EQ(if_exists(array, 'v'), 0);
}
TEST(q3, q3_4) {
        char* array{ new char[10]{"hello"} };
        EXPECT_EQ(if_exists(array, 't'), 0);
}










// TEST CASE Q4


TEST(q4, q4_1) {
        int* arr1{ new int[5]{3,2,3,6,8} };
        int* arr2{ new int[8]{1,5,0,4,7,9,10,11} };
        int *arr3=merge(arr1, arr2);
        EXPECT_EQ(1, arr3[0]);
        EXPECT_EQ(3, arr3[1]);
        EXPECT_EQ(2, arr3[2]);
        EXPECT_EQ(3, arr3[3]);
        EXPECT_EQ(5, arr3[4]);
        EXPECT_EQ(0, arr3[5]);
        EXPECT_EQ(4, arr3[6]);
        EXPECT_EQ(6, arr3[7]);
        EXPECT_EQ(7, arr3[8]);
        EXPECT_EQ(8, arr3[9]);
        EXPECT_EQ(9, arr3[10]);
        EXPECT_EQ(10, arr3[11]);
        EXPECT_EQ(11, arr3[12]);




}










// TEST CASE Q5


TEST(q5, q5_1) {
        float* arr1{ new float[8]{80,60,80,70,60,50,50,50} };
        int* freq = hist(arr1,8);
        EXPECT_EQ(2, freq[0]);
        EXPECT_EQ(1, freq[1]);
        EXPECT_EQ(2, freq[2]);
        EXPECT_EQ(3, freq[3]);




}
TEST(q5, q5_2) {
        float* arr1{ new float[ ]{90.6} };
        int* freq = hist(arr1,1);
        EXPECT_EQ(1, freq[0]);
}
TEST(q5, q5_3) {
        float* arr1{ new float[] {90.6,87,65,12,11} };
        int* freq = hist(arr1,5);
        EXPECT_EQ(1, freq[0]);
        EXPECT_EQ(1, freq[1]);
        EXPECT_EQ(1, freq[2]);
        EXPECT_EQ(1, freq[3]);
        EXPECT_EQ(1, freq[4]);
}




// TEST CASE Q8


TEST(q8, q8_1) {
        int n, m;
        int array3[100];
        int array1[] = { 1 , 3 , 8 , 9 , 14 };
        int array2[] = { 2 , 6, 7 , 15 , 16 };
        n = sizeof(array1) / sizeof(int);        // length of array 1
        m = sizeof(array2) / sizeof(int); // Length of array 2


        int* ptr = MergeArrayRecursively(array1, n, array2, m, array3, 0, 0, 0);
        EXPECT_EQ(1, array3[0]);
        EXPECT_EQ(2, array3[1]);
        EXPECT_EQ(3, array3[2]);
        EXPECT_EQ(6, array3[3]);
        EXPECT_EQ(7, array3[4]);
        EXPECT_EQ(8, array3[5]);
        EXPECT_EQ(9, array3[6]);
        EXPECT_EQ(14, array3[7]);
        EXPECT_EQ(15, array3[8]);
        EXPECT_EQ(16, array3[9]);


}
TEST(q8, q8_2) {
        int n, m;
        int array3[100];
        int array1[] = { 4,9,10 };
        int array2[] = { 1,5,7,8 };
        n = sizeof(array1) / sizeof(int);        // length of array 1
        m = sizeof(array2) / sizeof(int); // Length of array 2


        int* ptr = MergeArrayRecursively(array1, n, array2, m, array3, 0, 0, 0);
        EXPECT_EQ(1, array3[0]);
        EXPECT_EQ(4, array3[1]);
        EXPECT_EQ(5, array3[2]);
        EXPECT_EQ(7, array3[3]);
        EXPECT_EQ(8, array3[4]);
        EXPECT_EQ(9, array3[5]);
        EXPECT_EQ(10, array3[6]);
}








//TEST CASE Q9


TEST(q9, q9_1) {
        int A[][100] = { {1, 2, 3},
                                        {4, 5, 6},
                                        {7, 8, 9} };


        int B[][100] = { {1, 2, 3},
                                        {4, 5, 6},
                                        {7, 8, 9} };


        int row1 = 3, col1 = 3, row2 = 3, col2 = 3;
        int **C=multiplyMatrix(row1, col1, A, row2, col2, B);
        EXPECT_EQ(30, C[0][0]);
        EXPECT_EQ(36, C[0][1]);
        EXPECT_EQ(42, C[0][2]);
        EXPECT_EQ(66, C[1][0]);
        EXPECT_EQ(81, C[1][1]);
        EXPECT_EQ(96, C[1][2]);
        EXPECT_EQ(102, C[2][0]);
        EXPECT_EQ(126, C[2][1]);
        EXPECT_EQ(150, C[2][2]);
}